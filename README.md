# peaMK (or 🫛MK)

**What is this?**
peaMK aims to be an extension of existing keyboard firmwares (namely QMK and ZMK) to make the setup process for custom boards easier.

**Roadmap**

- V1: Prebuild firmwares to print out matrix positions (similar to Pog's coordmap finder). Use Cosmos to match coordinates to the physical keyboard and generate a firmware.
- V2: A UF2 that can be edited in place to change basic things like diode direction, key assignments
- V3: Add the ability to turn on/off major features (e.g. trackball) through editing memory through the UF2
- V4: Support for more microcontrollers other than Cosmos Lemon

The eventual goal is to on-the-fly generate a UF2 firmware for a broad range of common keyboard setups. Rather than compile QMK/ZMK for every keyboard setup, peaMK generates a "one-size-fits-all" firmware with enough feature flags and editable settings to support these setups.
