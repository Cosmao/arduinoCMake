#include <avr/io.h>
#include <util/delay.h>

// 0x20 = 0b100000
// 0x10 = 0b010000
#define ledPortOne 0x20
#define ledPortTwo 0x10
#define blink_delay_ms 1000

int main(void) {
  // DDRB pin 8-13
  DDRB |= ledPortOne;
  DDRB |= ledPortTwo;
  while (1) {
    PORTB ^= ledPortOne;
    _delay_ms(blink_delay_ms);
    PORTB ^= ledPortTwo;
  }
}
