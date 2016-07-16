#include "preonic.h"
#include <avr/wdt.h>


void matrix_init_kb(void) {
	matrix_init_user();
};

void custom_bootloader_jmp(bool program) {
  uint16_t *const bootKeyPtr = (uint16_t *)0x0800;
  uint16_t bootKey = program ? 0x7777 : 0;
  *bootKeyPtr = bootKey;
  wdt_enable(WDTO_60MS);
  while(1){}
}
