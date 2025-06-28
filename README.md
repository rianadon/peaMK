# peaMK (or 🫛MK)

**What is this?**
peaMK aims to be an extension of existing keyboard firmwares (namely QMK and ZMK) to make the setup process for custom boards easier.

### Roadmap

- V1: Prebuild firmwares to print out matrix positions (similar to Pog's coordmap finder). Use Cosmos to match coordinates to the physical keyboard and generate a firmware.
- V2: A UF2 that can be edited in place to change basic things like diode direction, key assignments
- V3: Add the ability to turn on/off major features (e.g. trackball) through editing memory through the UF2
- V4: Support for more microcontrollers other than Cosmos Lemon

The eventual goal is to on-the-fly generate a UF2 firmware for a broad range of common keyboard setups. Rather than compile QMK/ZMK for every keyboard setup, peaMK generates a "one-size-fits-all" firmware with enough feature flags and editable settings to support these setups.

-------

### Binaries

Currently, the project is at V1. I publish a few firmware binaries:

- Lemon Wired
  - [`peamk_wired_default.uf2`] (COL2ROW) for flex PCBs and col2row handwiring
  - [`peamk_wired_row2col.uf2`] binary if you followed my pinout and handwired Plum Twists
- Lemon Wireless
  - For COL2ROW wiring (e.g. my and Skree's flex PCBs).
    - [`peamk_c2r_left-cosmos_lemon_wireless-zmk.uf2`] for the left side of the keyboard, which must be connected through USB.
    - [`peamk_c2r_right-cosmos_lemon_wireless-zmk.uf2`] for the right side of the keyboard, which is the bluetooth peripheral.
  - For ROW2COL wiring (e.g. Plum Twists)
    - [`peamk_r2c_left-cosmos_lemon_wireless-zmk.uf2`] for the left side of the keyboard, which must be connected through USB.
    - [`peamk_r2c_right-cosmos_lemon_wireless-zmk.uf2`] for the right side of the keyboard, which is the bluetooth peripheral.

These print out the matrix position of each key when pressed. I also try and make sure the keyboard firmwares serve as examples of how to best configure these microcontrollers.

[`peamk_wired_default.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_default.uf2
[`peamk_wired_row2col.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_row2col.uf2
[`peamk_c2r_left-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_c2r_left-cosmos_lemon_wireless-zmk.uf2
[`peamk_c2r_right-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_c2r_right-cosmos_lemon_wireless-zmk.uf2
[`peamk_r2c_left-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_r2c_left-cosmos_lemon_wireless-zmk.uf2
[`peamk_r2c_right-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_r2c_right-cosmos_lemon_wireless-zmk.uf2
