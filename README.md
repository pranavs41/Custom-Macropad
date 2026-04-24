# 9-Key Mechanical Macropad

A 3x3 hotkey pad built around an Arduino Pro Micro running QMK firmware.
Designed for common editing and browser shortcuts that I use constantly.

## Keymap

| Copy    | Paste     | Cut         |
|---------|-----------|-------------|
| New Tab | Close Tab | Reopen Tab  |
| Sel. All| (unmapped)| Delete      |

## Hardware
- Arduino Pro Micro (ATmega32u4)
- 9x mechanical switches Cherry MX whichever you used)
- 3x keycaps (ran out of keycaps)
- Designed PCB in KiCad
- USB C to PC

## Firmware
- QMK Firmware
- Matrix: 3x3 row/col mapping
- Keymap file: `keymap.c`

## Build photos
See `/photos` folder.

## Notes
- The middle key in the bottom row is intentionally unmapped — reserved for future function.
