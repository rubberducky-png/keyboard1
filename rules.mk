# Build settings for keebboard
# Most feature enables now live in info.json ("features" block) - this file only
# needs entries info.json doesn't cover.

ENCODER_ENABLE = yes

# Custom RN4871 BLE bridge - uses direct RP2040/Pico-SDK hardware access.
SRC += rn4871.c
