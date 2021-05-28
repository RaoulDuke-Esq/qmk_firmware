# IBM LPFK

A converter for the IBM Lighted Program Function Keyboard.

Each key has a green LED which can also be controlled.

Keyboard Maintainer: [MMcM](https://github.com/MMcM)  
Hardware Supported: IBM LPFK, Teensy LC

Make example for this keyboard (after setting up your build environment):

    make converter/ibm_lpfk:default

The protocol is described in [IBM LPFK on a Serial Port](https://www.brutman.com/IBM_LPFK/IBM_LPFK.html).

## Hardware

The keyboard connects with a mini-DIN-8 cable.
The protocol is 9600 baud serial at RS-232 levels, so a serial level shifter like the MAX232 is needed (there is one inside the keyboard itself).

| DIN | Color  | Signal         |
|-----|--------|----------------|
| 1   | Brown  | Ground         |
| 2   | Red    | Ground         |
| 3   | Green  | TX (from kbd)  |
| 4   | Yellow |                |
| 5   | Orange | +5V            |
| 6   | Gray   |                |
| 7   | Violet |                |
| 8   | Black  | RX (to kbd)    |
