<center>

# rektek keyboard1: 81-Key Mechanical Keyboard

A fully custom 81-key mechanical keyboard designed by me, including the PCB, case, firmware, and assembly. This project was built to learn the complete keyboard design process while creating a functional keyboard.

Funded With The Macondo Program

## Features

- Custom PCB designed from scratch
- Hot-swappable MX-compatible switches
- QMK firmware support
- Screw-in stabilizers
- 3D printed two-piece tray mount case
- 8° typing angle for improved ergonomics
  
## Why I Built It

I've always been interested in how things work, so when I was looking for a project I happened to glance at my hands, with my keyboard right underneath. Instead of buying an existing keyboard, I decided to design every  component like the PCB myself.


## Design Process

The project began by selecting a 81-key layout that has a lot of function but is also on the smaller side. I then designed the PCB in KiCad, routed all the traces, and added support for hot-swap sockets and USB-C connectivity. After the electronics were complete I designed a simple tray mount in Onshape. The case is made out of two PLA printed pieces and includes a 7° typing angle for a more comfortable typing experience. Because of small bed size I will have to print them in pieces.

Finally, the keyboard is programmed using qmk firmware.

## Components

- Custom PCB
- Raspberry Pi Pico
- MX-compatible switches
- MX Screw-In Stabilizers V2
- USB-mini connector
- 3D printed PLA case
- Keycaps
- Rotary encoder
- 3D printed knob

## Challenges

Some of the biggest challenges included:

- Learning PCB routing and keyboard matrix design
- Designing a printable case that was able to support the pcb well
- Ensuring all mounting points aligned correctly

## Files:
I apologize for the mess, when I put my files into folders the larger ones kept deleting themselves.

## Images and Renders!

### Matrix Schematic
<img width="1822" height="925" alt="image" src="https://github.com/user-attachments/assets/843dc2d1-18d9-4d06-a0e3-b7d57ff4d6e7" />
<img width="1166" height="739" alt="image" src="https://github.com/user-attachments/assets/c0a766a6-0606-490b-b57d-987bf25a6845" />

### PCB


### PCB Render - 3D Viewer

#### Front
<img width="1151" height="362" alt="image" src="https://github.com/user-attachments/assets/f7e9d533-d326-4429-8a8c-e4ecfd8cd5de" /><br><br>

#### Back
<img width="1151" height="362" alt="image" src="https://github.com/user-attachments/assets/1e4aa1d7-9c70-4f04-aca4-e5c7b8159c56" /><br><br>

### OnShape Render

#### Case
<img width="1165" height="528" alt="image" src="https://github.com/user-attachments/assets/e3d96410-2df9-41ee-8e6f-7d7ce6166e82" />

### PCB
<img width="1112" height="519" alt="image" src="https://github.com/user-attachments/assets/f377088d-d057-4555-9f10-83b966d3cdee" />

### Assembly
<img width="1071" height="471" alt="image" src="https://github.com/user-attachments/assets/ef5d38c2-2d68-4b87-b9fb-afdaafa41700" />
I apologize again for the semi-completed assembly, my document on Onshape couldn't take all of the lag from the amount of parts and started to kick me off of the document every time I went to import something.


## Sketch
<img width="807" height="462" alt="image" src="https://github.com/user-attachments/assets/51c62869-89a3-462d-bdb1-b6b95fda4f7a" />



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

##Shoutout hackclub and the macondo program

</center>
