# Handoff: mouse orbit camera (wall collision)

Status as of 2026-09-27. This lives only on the `mouse-orbit-wip` branch of the test clone
(`D:\Retro Emulation\Conker's Recomp Test`), not on main. Experiments stay here until the
user has tried them in game; then they are ported to the original repo
(`D:\Retro Emulation\Conker's Recomp`, public as sciaschi/CBFD-Recompiled).

## Where things stand

### Released / on main
- v0.1.3 is PR #33:
  - backdrop buffer overflow crash fix (ultrawide, looking at the sky);
  - backdrop sectors widened;
  - Linux file dialogs through xdg-desktop-portal instead of GTK.
- The user merges it and tags V0.1.3.
- PR #35 (R-Look: mouse/gyro aiming, by another contributor) is recommended to merge after
  #33. It fixed B-pad aiming (the slingshot in the hub world), which previously only allowed
  left and right.

### On this branch
Commits:
- `94e23e6`: WIP orbit camera.
- `9951bf6`: merge of v0.1.3 and PR #35; zoom limited to the controller's distance range.
- `cf28983`: look mode (hold R, B-pad aiming) hands the camera back to the aim code. This fixed
  the camera turning faster than the aim.

What the user has confirmed working:
- **Mouse orbit:** yaw and pitch.
- **Scroll wheel zoom:** within the controller's nearest and farthest presets.
- **Aiming:** no conflict in story mode.
- **Handing back to the game:** C-left/right, cutscenes and look mode.

Multiplayer mouse is deferred on purpose; the user wants story mode stable first.

## Open problem: the orbit camera goes through walls

### Goal
When a wall is between Conker and the orbit eye, pull the camera in toward Conker. When the
way is clear, ease it back out.

### What didn't work
1. **`func_150AC9C0`:** a level ray the game casts in `func_15123A54`. It hardly ever hits;
   even the game's own call didn't hit when the user pushed the camera into walls with the
   C-buttons.
2. **One long move with `func_15044380`:** move-with-collision from the look-at point to the
   eye. It returned 0 hits every frame, and the collider ended exactly at its target.
3. **The same move in short steps** (0.75 × collider radius each). Still 0 hits on every
   frame. So the move length isn't the problem: our stand-in collider (or some game state at
   the time we call) makes the collision code ignore everything.

### What the game does (`func_1512BB10`)
The game's own camera collision runs each frame, called from `func_15122C5C` before the
view is built by `func_151284C4`.

- **Collider radii by mode:** camera +0x94C/+0x950, eased into +0x95C/+0x960 by `func_150495B0`.
- **A stand-in object on its stack, at sp+0x74, 0x32C bytes** (gObject size):
  - +0x00 = 0x2D (type: camera; `func_15044660` uses the type to size the collider);
  - +0x14/+0x18/+0x1C = target position (the desired eye, camera +0x2F8);
  - +0x20 = 0;
  - +0x28 = y − camera+0x354;
  - +0x40 = camera+0x37C (yaw);
  - +0x180 = camera+0x354;
  - +0x188 = camera+0x644;
  - +0x318 = camera pointer.

  The rest is uninitialised stack.
- **Collision switches set around the call:**
  - D_800CBDD2 = 1, and back to 0 after;
  - D_800CBDD3 = (camera+0x3D0)->+0x102 ? 1 : 0, restored after;
  - D_800CBDD4 is set from camera+0x23C / +0x2C, restored after;
  - the layer enables D_80089120[2] and [1] are cleared in some modes, restored after.
- **The call:** `func_15044380(f12, f14, a2 = previous eye (+0x304..+0x30C), a3 = object, sp10 = 0, sp14 = 0)`.
- **Afterwards:** object +0x14.. is the corrected position, written back to camera +0x2F8..,
  and v0 is the hit count.

`func_15044380` does this:
- `func_15044660(obj, x, y, z)` sets the collider size globals D_800CBDD8/DDC.
- For layers 3..0 that are enabled in D_80089120: `func_1510F800(layer)`, then, if
  D_800DBE62 is set, `func_150AB1F0(x0, y0, z0, obj, flags)`, adding up the hits.
- `func_1510F800(0)` at the end.

`func_150AB1F0` is hand-written assembly (computed `jr` through addresses kept on its stack):
- It branches on D_800DBE50 (2 = level mesh via `func_150A64C8`/`func_150A44F0`, 3 = objects).
- It walks collision data from D_800DBE48, box-tested against the move.
- It reads the object's +0x14..+0x1C, +0x20, +0x28 and +0x40.

### The current experiment (built, not yet run)
- **Hooks:** `func_1512BB10` is hooked at 0x1512BEBC (before its own call) and 0x1512BEC4
  (after it). The hook functions are `conker_wall_compare_before`/`_after`, at the end of
  `host/src/mouse_camera.cpp`; the hooks are at the end of `conker.toml`.
- **What it compares:** before the game's call, `collide_camera` (our stand-in) runs with the
  same start and target. Both results go to `host/build-win/wall_compare_log.txt`, with the
  hit counts, end positions, target, D_800DBE62 and D_800DBE50.
- **The user's test:** push the camera into walls with only the C-buttons, so the game's call
  gets hits.
- **Reading the log:**
  - If the game hits and ours doesn't with identical inputs, the difference is in the
    stand-in object. Next step: copy the game's whole object (sp+0x74, 0x32C bytes) instead of
    zeros, then narrow down the field that matters.
  - If neither hits, the collision call isn't what stops the game's camera, and the next
    place to look is `func_15122C5C`'s other camera code.

`collide_camera()` in `mouse_camera.cpp` builds the stand-in and does the call. It now saves
and restores D_800CBDD2 as well, so it's safe inside the game's own call.

The orbit hook `conker_mouse_camera` currently marches the collider out in short steps and
logs to `mouse_camera_log.txt` (TEMP-DEBUG). Once walls work, remove all TEMP-DEBUG code and
hooks.

## Orbit camera map (`host/src/mouse_camera.cpp`)

Hooks, all in `conker.toml`:
- **`conker_mouse_camera_follow`**: `func_1512D390` @0x1512D54C (C-button turning). It marks
  that the follow camera ran; C-left/right disengage the orbit.
- **`conker_mouse_camera_look_mode`**: `func_15120158` @0x1512015C (look mode). It disables the
  orbit for that frame.
- **`conker_mouse_camera`**: `func_151284C4` @0x151284C8 (builds the view; $a0 = camera). It
  places the eye from our yaw, pitch and distance around the look-at point (+0x2BC), and writes
  all three eye copies (+0x2EC, +0x2F8, +0x304).
- **Scroll wheel:** an SDL event watch (`conker_mouse_camera_init`, called from frontend.cpp).

Camera (struct108), the follow camera:
- **Positions:**
  - pivot at Conker's feet: +0x2A4;
  - look-at point (pivot + 67.5): +0x2BC.
- **Distance:**
  - height: +0x344;
  - horizontal distance: +0x374.
- **Angles:**
  - yaw in degrees, recomputed from the eye each frame by `func_15125330`: +0x37C;
  - radians: +0x39C/+0x3A0.
- **Buttons:**
  - +0x36A: button bits;
  - +0x36C: pointer to the buttons held;
  - +0x6B0: C-turn direction.
- **Controller distance presets:** D_800A34B0, 4 × {horizontal, height}: {267,100}, {247,100},
  {370,185}, {530,400}.

## Building and testing
- **Recompile after a `conker.toml` change:** `py -3 recomp\recompile.py` from the repo root.
- **Build:** `host\build_windows.cmd` → `host\build-win\ConkerRecomp.exe`. The user tests
  from there, with the game closed while building.
- **The user's terminal is PowerShell:** env vars are `$env:X=1; ...; Remove-Item Env:X`.
- **Look out for:** a `\n` inside C strings written through heredocs/python can turn into a real
  newline and break the build.

## Project rules (from the user)
- **When proposing a fix, ship the matching C and the name improvements with it.** `func_`
  names are temporary: rename them once they're matched and understood (descriptive name +
  address suffix). Document every function. Ugly functions get a two-pass match.
- **Once walls work:**
  - name and document `func_1512BB10` (camera collision), `func_15044380`
    (move a collider through the level), `func_15044660` (collider size),
    `func_150AB1F0` and `func_15122C5C`;
  - keep mod-facing `func_` names where mods/hooks use them.
- **Nothing reaches the original repo until the user confirms it in game.**
