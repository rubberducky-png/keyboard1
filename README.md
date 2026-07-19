<center>

# Tap65: 68-Key Mechanical Keyboard

A fully custom 68-key mechanical keyboard designed from the ground up, including the PCB, case, firmware, and assembly. This project was built to learn the complete keyboard design process while creating a functional keyboard tailored to my own preferences.

Funded With The Help Of JLCPCB and HackClub's YSWS Keeb

## Features

- Custom PCB designed from scratch
- Hot-swappable MX-compatible switches
- QMK firmware support
- Screw-in stabilizers
- 3D printed two-piece tray mount case
- 7° typing angle for improved ergonomics
- Per Key RGB

## Why I Built It

I've always been interested in mechanical keyboards and wanted to understand how they work beyond simply assembling pre-made kits. Instead of buying an existing keyboard, I decided to design every major component myself.

This project gave me the opportunity to learn PCB design, CAD modelling, firmware configuration, manufacturing, soldering, and the overall engineering process behind modern custom keyboards.

## Design Process

The project began by selecting a 68-key layout that balances compactness with everyday usability. I then designed the PCB in KiCad, routed all the traces, and added support for hot-swap sockets and USB-C connectivity. After the electronics were complete I designed a simple tray mount in Onshape. The case is made out of two PLA printed pieces and includes a 7° typing angle for a more comfortable typing experience. Because of small bed size I will have to print them in pieces.

Finally, the keyboard is programmed using kmk firmware.

## Components

- Custom PCB
- Raspberry Pi Pico
- MX-compatible switches
- Durock Clear Screw-In Stabilizers V2
- Hot-swap sockets
- USB-C connector
- 3D printed PLA case
- Keycaps
- SK6812 mini-e

## Challenges

Some of the biggest challenges included:

- Learning PCB routing and keyboard matrix design
- Neopixel wiring
- Designing a printable case that was both strong and easy to assemble
- Ensuring all mounting points aligned correctly
- Managing component sourcing and costs

## What I Learned

Through this project I learned:

- PCB design using KiCad
- CAD modelling in Onshape
- Mechanical keyboard architecture
- KMK scripting
- Case design

## Files:
PCB production ready files availabe in [Production](/fabrication). CAD files availabe on OnShape [Tap65](https://cad.onshape.com/documents/8f869f2a44712437e4702e46/w/78ecf35c97da350371a517a7/e/15a686cf102c39b24f8e8911?renderMode=0&uiState=6a460c8d3c1bece070459f5d)

## Images and Renders!

### Matrix Schematic
<img width="1173" height="401" alt="image" src="https://github.com/user-attachments/assets/31d9d7a0-ed0f-43a0-95e5-541793c8da74" /><br><br>

### Neopixel
<img width="714" height="547" alt="image" src="https://github.com/user-attachments/assets/31604d8d-ad05-4e9a-b7aa-fd7be4cce659" /><br><br>

### MCU - Raspberry Pi PICO
<img width="443" height="464" alt="image" src="https://github.com/user-attachments/assets/02c447b4-0945-40b7-88ad-7abbc88fbf32" /><br><br>

### PCB
<img width="1024" height="464" alt="image" src="https://github.com/user-attachments/assets/219b900c-b72c-4392-af85-b87ae30fd4f0" /><br><br>

### PCB Render - 3D Viewer

#### Front
<img width="1151" height="362" alt="image" src="https://github.com/user-attachments/assets/f7e9d533-d326-4429-8a8c-e4ecfd8cd5de" /><br><br>

#### Back
<img width="1151" height="362" alt="image" src="https://github.com/user-attachments/assets/1e4aa1d7-9c70-4f04-aca4-e5c7b8159c56" /><br><br>

### OnShape Render

#### Case
<img width="768" height="325" alt="image-removebg-preview" src="https://github.com/user-attachments/assets/dd0fff1f-5d15-4b31-aad8-1b04b95e59ae" /> <br><br>

#### Plate
<img width="903" height="382" alt="image" src="https://github.com/user-attachments/assets/426b34d4-7cda-4fc3-a937-d4ba0661007a" /> <br><br>

### PCB
<img width="903" height="382" alt="image" src="https://github.com/user-attachments/assets/a508dc3e-e0b8-489d-be0c-f40e91f4e41d" /> <br><br>

### Assembly
<img width="899" height="382" alt="image" src="https://github.com/user-attachments/assets/413ae0ea-e072-42de-88cb-4ff1a3502499" /> <br><br>

## Sketch
<img width="899" height="382" alt="image" src="https://github.com/user-attachments/assets/b394bc86-97e6-4b74-9678-9ab45d89d3c4" /> <br><br>


## Bill of Materials (BOM)

| SI No. | Name | Notes | Qty | Price/Unit | Total | Running Total | Link |
|------:|------|-------|----:|-----------:|------:|--------------:|------|
| 1 | Keygeek x MZ Y1 Keyboard Switch (Pack of 10) | MX compatible switches | 7 | ₹300 | ₹2,100 | ₹2,100 | [Buy](https://stackskb.com/store/keygeek-y1-keyboard-switch/) |
| 2 | PCB (JLC Sponsored) | Sponsored PCB from JLCPCB | 1 | ₹200 | ₹200 | ₹2,300 | [JLCPCB](https://jlcpcb.com/) |
| 3 | Durock Clear Screw-In Stabilizers V2 | Screw-in stabs | 1 | ₹1,600 | ₹1,600 | ₹3,900 | [Buy](https://stackskb.com/store/durock-clear-screw-in-stabilizers-v2/) |
| 4 | Gateron Hotswap Sockets | Hotswap sockets | 70 | ₹10 | ₹700 | ₹4,600 | [Buy](https://stackskb.com/store/gateron-hotswap-sockets/) |
| 5 | 1N4148 SOD-123 SMD Diode (Pack of 10) | Diodes | 7 | ₹15 | ₹105 | ₹4,705 | [Buy](https://stackskb.com/store/1n4148-sod-123-smd-diode/) |
| 6 | Ykyio Keycap Set | Keycaps | 1 | ₹2,999 | ₹2,999 | ₹7,704 | [Buy](https://meckeys.com/shop/accessories/keyboard-accessories/keycaps/ykyio-keycap-set/) |
| 7 | Raspberry Pi Pico | MCU | 1 | ₹349 | ₹349 | ₹8,053 | [Buy](https://makerbazar.in/products/raspberry-pi-pico-development-boards?variant=48251026899184) |
| 8 | Brass Heat Set Insert M3 | Heat-set inserts | 1 | ₹149 | ₹149 | ₹8,202 | [Buy](https://makerbazar.in/products/brass-heat-set-threaded-round-female-insert-nut?variant=48339035455728) |
| 9 | Philips Head Nuts & Bolts Set (Silver Plated) - Pack of 10 | Mounting hardware | 1 | ₹99 | ₹99 | ₹8,301 | [Buy](https://makerbazar.in/products/philips-head-nuts-bolts-set-silver-plated-pack-of-10) |
| 10 | OPSCO Optoelectronics SK6812MINI-E | Per-key RGB LEDs | 70 | — | — | — | [Buy](https://www.lcsc.com/product-detail/Light-Emitting-Diodes-LED_OPSCO-Optoelectronics-SK6812MINI-E_C5149201.html) |

### Cost Summary

| Item | Cost |
|------|-----:|
| Total Cost | ₹8,819 |
| Total (USD) | **$90.92** |
| Rounded Total | **$91** |
| Estimated Total (Including Tax & Shipping) | **$95** |

## Credits

This project was made possible through open-source hardware and firmware resources, along with support from the mechanical keyboard community. Special thanks to Hack Club and JLCPCB for helping make the project possible.


</center>
