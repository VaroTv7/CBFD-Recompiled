# Runs ConkerRecomp for a while and saves screenshots of its window.
#   powershell -File host\capture_run.ps1 [-Seconds 60] [-Shots "10,20,30"] [-Keys "40:Enter,44:Space"]
# -Keys presses a key (held ~150 ms) at each given second, to test input. Key names:
# Enter, Space, Shift, Q, E, Tab, W, A, S, D, Up, Down, Left, Right.
# -Exe runs another build in host\build-win (e.g. a debug copy linked while the game is open).
# Output: host\build-win\shotN.png, run-out.txt, run-err.txt
param(
    [int]$Seconds = 60,
    [string]$Shots = "10,20,30,40,50",
    [string]$Keys = "",
    [switch]$Launcher,
    [string]$Exe = "ConkerRecomp.exe"
)
$shotTimes = $Shots.Split(",") | ForEach-Object { [int]$_ }
# PS/2 set-1 scancodes; the E0-prefixed arrow keys are marked with 0x100.
$scancodes = @{ Escape = 0x01; Enter = 0x1C; Space = 0x39; Shift = 0x2A; Q = 0x10; E = 0x12; Tab = 0x0F;
    W = 0x11; A = 0x1E; S = 0x1F; D = 0x20; Up = 0x148; Down = 0x150; Left = 0x14B; Right = 0x14D }
$events = @()
foreach ($t in $shotTimes) { $events += [pscustomobject]@{ Time = $t; Key = $null } }
if ($Keys) {
    foreach ($k in $Keys.Split(",")) {
        $parts = $k.Split(":")
        $events += [pscustomobject]@{ Time = [double]$parts[0]; Key = $parts[1] }
    }
}
$events = $events | Sort-Object Time

$dir = Join-Path $PSScriptRoot "build-win"
Set-Location $dir
Add-Type -AssemblyName System.Windows.Forms, System.Drawing
Add-Type @"
using System;
using System.Runtime.InteropServices;
public static class Win {
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
    [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int cmd);
    [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
    [StructLayout(LayoutKind.Sequential)] public struct RECT { public int Left, Top, Right, Bottom; }
    [StructLayout(LayoutKind.Sequential)] struct KEYBDINPUT { public ushort vk, scan; public uint flags, time; public IntPtr extra; }
    // INPUT is a union sized for MOUSEINPUT; pad to it.
    [StructLayout(LayoutKind.Sequential)] struct INPUT { public uint type; public KEYBDINPUT ki; public ulong pad; }
    [DllImport("user32.dll")] static extern uint SendInput(uint n, INPUT[] inputs, int size);
    public static void Key(int scancode, bool down) {
        var i = new INPUT[1];
        i[0].type = 1; // INPUT_KEYBOARD
        i[0].ki.scan = (ushort)(scancode & 0xFF);
        i[0].ki.flags = 0x8 | ((scancode & 0x100) != 0 ? 0x1u : 0) | (down ? 0 : 0x2u); // SCANCODE, EXTENDED, KEYUP
        SendInput(1, i, Marshal.SizeOf(typeof(INPUT)));
    }
}
"@

Get-ChildItem shot*.png -ErrorAction SilentlyContinue | Remove-Item
# Test runs ignore the game controller, which may be in use by someone playing.
$env:CONKER_NO_CONTROLLER = "1"
# ...and use their own data folder (%LOCALAPPDATA%\ConkerRecompiledTest), not the player's saves.
$env:CONKER_TEST_PROFILE = "1"
# -Launcher opens the launcher instead of starting the game (no --seconds); the
# game is then closed after -Seconds.
$gameArgs = if ($Launcher) { @("--launcher") } else { @("--seconds", "$Seconds") }
$p = Start-Process -FilePath ".\$Exe" -ArgumentList $gameArgs `
    -RedirectStandardOutput "run-out.txt" -RedirectStandardError "run-err.txt" -PassThru -NoNewWindow
$start = Get-Date
foreach ($ev in $events) {
    $t = $ev.Time
    while (((Get-Date) - $start).TotalSeconds -lt $t) { Start-Sleep -Milliseconds 50 }
    if ($p.HasExited) { break }
    $p.Refresh()
    $h = $p.MainWindowHandle
    if ($h -eq [IntPtr]::Zero) { continue }
    [Win]::ShowWindow($h, 9) | Out-Null
    [Win]::SetForegroundWindow($h) | Out-Null
    if ($ev.Key) {
        $sc = $scancodes[$ev.Key]
        Start-Sleep -Milliseconds 50
        [Win]::Key($sc, $true); Start-Sleep -Milliseconds 150; [Win]::Key($sc, $false)
        "key $($ev.Key) at $t s"
        continue
    }
    Start-Sleep -Milliseconds 300
    $r = New-Object Win+RECT
    [Win]::GetWindowRect($h, [ref]$r) | Out-Null
    $w = $r.Right - $r.Left; $hgt = $r.Bottom - $r.Top
    $bmp = New-Object System.Drawing.Bitmap $w, $hgt
    $g = [System.Drawing.Graphics]::FromImage($bmp)
    $g.CopyFromScreen($r.Left, $r.Top, 0, 0, $bmp.Size)
    $bmp.Save((Join-Path $dir "shot$t.png"))
    $g.Dispose(); $bmp.Dispose()
}
if ($Launcher) {
    while (((Get-Date) - $start).TotalSeconds -lt $Seconds -and -not $p.HasExited) { Start-Sleep -Milliseconds 200 }
}
$p.WaitForExit($(if ($Launcher) { 0 } else { ($Seconds + 30) * 1000 })) | Out-Null
if (-not $p.HasExited) { $p.Kill(); "killed" }
"exit code: $($p.ExitCode)"
