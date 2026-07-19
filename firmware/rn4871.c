

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
    uart_puts(RN_UART, "$$$");
    sleep_ms(100);
    rn_send("+");
    rn_send("SF,2");         
    sleep_ms(200);
    uart_puts(RN_UART, "$$$");
    sleep_ms(100);
    rn_send("+");
    rn_send("SN,keebboard");
    rn_send("SDA,03C1");      
    rn_send("R,1"); 
    sleep_ms(500);
}

void rn4871_send_report(uint8_t modifier, const uint8_t keys[6]) {
    (void) modifier;
    (void) keys;
}

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
