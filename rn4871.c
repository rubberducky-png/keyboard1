// Custom RN4871 BLE HID bridge, bolted onto QMK.
//
// IMPORTANT CONTEXT - read before assuming this "just works":
// QMK's portable uart.h driver is inconsistently supported on RP2040 depending on
// QMK version (this was an open feature request for a long time). To sidestep that,
// this talks to the RP2040's UART hardware directly via the Pico SDK, which QMK's
// RP2040 port is built on top of - that part of the toolchain is genuinely present.
// What's NOT independently verified: the exact RN4871 HID-over-GATT byte sequence
// (see rn4871_configure_hid below). Connection-mode/naming/reset commands ARE
// confirmed against Microchip's actual command reference. The HID service setup
// needs you to open a serial terminal to the RN4871 and confirm/adjust against
// your specific module and the datasheet's HID Profile chapter.

#include "rn4871.h"
#include "hardware/uart.h"
#include "hardware/gpio.h"
#include "pico/time.h"
#include <string.h>

#define RN_UART   uart0
#define RN_TX_PIN 0   // GP0 -> RN4871 UART_RX
#define RN_RX_PIN 1   // GP1 <- RN4871 UART_TX
#define RN_BAUD   115200

static uint8_t pressed_keys[6] = {0};
static uint8_t pressed_modifier = 0;

static void rn_send(const char *cmd) {
    uart_puts(RN_UART, cmd);
    uart_puts(RN_UART, "\r\n");
    sleep_ms(100);
}

void rn4871_init(void) {
    uart_init(RN_UART, RN_BAUD);
    gpio_set_function(RN_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(RN_RX_PIN, GPIO_FUNC_UART);
}

void rn4871_configure_hid(void) {
    // --- Confirmed against Microchip's RN4870/71 command reference ---
    uart_puts(RN_UART, "$$$"); // enter command mode, no trailing CR on this one
    sleep_ms(100);
    rn_send("+");
    rn_send("SF,2");          // factory reset
    sleep_ms(200);
    uart_puts(RN_UART, "$$$");
    sleep_ms(100);
    rn_send("+");
    rn_send("SN,keebboard");
    rn_send("SDA,03C1");      // GAP Appearance = Keyboard

    // --- NOT independently verified - confirm against your module before relying on this ---
    // rn_send("PS,1812");        // HID service
    // rn_send("PC,2A4A,02,04");  // HID Information characteristic
    // rn_send("PC,2A4B,02,BB");  // Report Map characteristic
    // rn_send("PC,2A22,32,01");  // Boot Keyboard Input Report
    // rn_send("PC,2A32,0A,01");  // Boot Keyboard Output Report
    // rn_send("PC,2A4C,04,01");  // HID Control Point
    // Reference: Microchip RN4870/71 User Guide (DS50002466B), Chapter 5 "HID Profile",
    // and embeddedguruji.blogspot.com/2019/03/emulating-microchip-rn4871-as-hid.html

    rn_send("R,1"); // reboot to apply
    sleep_ms(500);
}

void rn4871_send_report(uint8_t modifier, const uint8_t keys[6]) {
    // Stub until the HID characteristic handle above is confirmed on real hardware -
    // once you have it, this sends via: SHW,<handle>,<hex bytes>
    (void) modifier;
    (void) keys;
}

// Called from process_record_user - rebuilds the 6-key rollover state and pushes
// an updated report any time it changes.
void rn4871_update_key(uint16_t keycode, bool pressed) {
    bool changed = false;

    if (pressed) {
        for (int i = 0; i < 6; i++) {
            if (pressed_keys[i] == 0) {
                pressed_keys[i] = (uint8_t) keycode;
                changed = true;
                break;
            }
        }
    } else {
        for (int i = 0; i < 6; i++) {
            if (pressed_keys[i] == (uint8_t) keycode) {
                pressed_keys[i] = 0;
                changed = true;
                break;
            }
        }
    }

    if (changed) {
        rn4871_send_report(pressed_modifier, pressed_keys);
    }
}
