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

> [!IMPORTANT]
> These support Lemon Wired v0.5 and Lemon Wireless v0.4. If your microcontroller is older, use the binaries under [Binaries for Old Microcontrollers](#binaries-for-old-microcontrollers).

- Lemon Wired
  - For ROW2COL wiring (for Pumpkin Patch and Plum Twists–if you followed my pinout)
      - [`peamk_wired_v5_r2c_left.uf2`] and [`peamk_wired_v5_r2c_right.uf2`]. Connect either side to the computer.
  - For COL2ROW wiring (for Skree's flex PCBs).
    - [`peamk_wired_v5_c2r_left.uf2`] and [`peamk_wired_v5_c2r_right.uf2`]. Connect either side to the computer.
- Lemon Wireless
  - For ROW2COL wiring (for Pumpkin Patch and Plum Twists)
    - [`peamk_r2c_left-cosmos_lemon_wireless_v4-zmk.uf2`] for the left side of the keyboard, which must be connected through USB.
    - [`peamk_r2c_right-cosmos_lemon_wireless_v4-zmk.uf2`] for the right side of the keyboard, which is the bluetooth peripheral.
  - For COL2ROW wiring (for Skree's flex PCBs).
    - [`peamk_c2r_left-cosmos_lemon_wireless_v4-zmk.uf2`] for the left side of the keyboard, which must be connected through USB.
    - [`peamk_c2r_right-cosmos_lemon_wireless_v4-zmk.uf2`] for the right side of the keyboard, which is the bluetooth peripheral.

These print out the matrix position of each key when pressed. I also try and make sure the keyboard firmwares serve as examples of how to best configure these microcontrollers.

### Binaries for Old Microcontrollers

- Lemon Wired
  - For ROW2COL wiring (for Pumpkin Patch and Plum Twists–if you followed my pinout)
      - [`peamk_wired_v4_r2c_left.uf2`] and [`peamk_wired_v4_r2c_right.uf2`]. Connect either side to the computer.
  - For COL2ROW wiring (for Skree's flex PCBs).
    - [`peamk_wired_v4_c2r_left.uf2`] and [`peamk_wired_v4_c2r_right.uf2`]. Connect either side to the computer.
- Lemon Wireless
  - For ROW2COL wiring (for Pumpkin Patch and Plum Twists)
    - [`peamk_r2c_left-cosmos_lemon_wireless-zmk.uf2`] for the left side of the keyboard, which must be connected through USB.
    - [`peamk_r2c_right-cosmos_lemon_wireless-zmk.uf2`] for the right side of the keyboard, which is the bluetooth peripheral.
  - For COL2ROW wiring (for Skree's flex PCBs).
    - [`peamk_c2r_left-cosmos_lemon_wireless-zmk.uf2`] for the left side of the keyboard, which must be connected through USB.
    - [`peamk_c2r_right-cosmos_lemon_wireless-zmk.uf2`] for the right side of the keyboard, which is the bluetooth peripheral.

[`peamk_wired_v4_c2r_left.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v4_c2r_left.uf2
[`peamk_wired_v4_c2r_right.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v4_c2r_right.uf2
[`peamk_wired_v4_r2c_left.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v4_r2c_left.uf2
[`peamk_wired_v4_r2c_right.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v4_r2c_right.uf2
[`peamk_c2r_left-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_c2r_left-cosmos_lemon_wireless-zmk.uf2
[`peamk_c2r_right-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_c2r_right-cosmos_lemon_wireless-zmk.uf2
[`peamk_r2c_left-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_r2c_left-cosmos_lemon_wireless-zmk.uf2
[`peamk_r2c_right-cosmos_lemon_wireless-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_r2c_right-cosmos_lemon_wireless-zmk.uf2

[`peamk_wired_v5_c2r_left.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v5_c2r_left.uf2
[`peamk_wired_v5_c2r_right.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v5_c2r_right.uf2
[`peamk_wired_v5_r2c_left.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v5_r2c_left.uf2
[`peamk_wired_v5_r2c_right.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_wired_v5_r2c_right.uf2
[`peamk_c2r_left-cosmos_lemon_wireless_v4-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_c2r_left-cosmos_lemon_wireless_v4-zmk.uf2
[`peamk_c2r_right-cosmos_lemon_wireless_v4-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_c2r_right-cosmos_lemon_wireless_v4-zmk.uf2
[`peamk_r2c_left-cosmos_lemon_wireless_v4-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_r2c_left-cosmos_lemon_wireless_v4-zmk.uf2
[`peamk_r2c_right-cosmos_lemon_wireless_v4-zmk.uf2`]: https://github.com/rianadon/peaMK/releases/download/latest/peamk_r2c_right-cosmos_lemon_wireless_v4-zmk.uf2
