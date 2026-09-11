# DragonMacroPad

A macro pad with 8 switches, one rotary encoder, one OLED display and of course some RGB. It uses [QMK](https://qmk.fm/) firmware.

# CAD model

The full case and the pcb are connected by four M3x13mm screws and M3x5mx4mm heatset inserts, the inserts come under the `Top_case` and your screw the all macro pad by the bottom of the `Bottom_case`, like a sandwich with the pcb in the middle.

![Case](<assets/Case.png>)

# Case parts

### Top_case

![Top_case](<assets/Top_case.png>)

### Bottom_case

![Bottom_case](<assets/Bottom_case.png>)

# PCB

### Schematic

![schematic](<assets/schematic.png>)

### PCB

![pcb](<assets/pcb.png>)

### The 3D model

![PCB 3D](<assets/pcb 3D.png>)

# Firmware

I use QMK for this DragonMacroPad.

Here, keys binding (in order, starting from the top right) :
- RGB Toggle
- RGB Mode Switch
- Previous Track
- Next Track
- Copy
- Paste
- Undo
- Redo

- The rotary encoder changes Volume and if it's press switch between Play/Pause.

# BOM

The real one is in the repo.

| Component | Quantity |
|---|---:|
| XIAO RP2040 | 1 |
| Cherry MX Switches | 8 |
| EC11 Rotary Encoder | 1 |
| WS2812 RGB LED | 8 |
| 0.91" 128x32 OLED Display | 1 |
| 1N4148 DO-35 Diodes | 9 |
| DSA Keycaps | 8 |
| PCB | 1 |
| M3x13mm | 4 |
| M3 M3x5x4 Heatset inserts | 4 |
| Case (2 printed parts )| 1 |
| EC11 Knob ( printed part )| 1 |

# Possible improvement

Take switches which are Led SMD compatible (such as Gateron SMD Yellow), because Cherry MX Switches do not let pass so much light.

# Credits

I used [QMK](https://qmk.fm/) and [Kicad](https://www.kicad.org/).
Moreover, I used one 3D model from [Ziemniaczenka](https://www.printables.com/@Ziemniaczenka)