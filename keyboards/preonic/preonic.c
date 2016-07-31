#include "preonic.h"

void matrix_init_kb(void) {
	matrix_init_user();
};

void custom_bootloader_jmp(bool program) {
}


__attribute__ ((noreturn)) void _exit(int status) {
	while(1) {
		//...
	}
}

void _kill(int status) {}

int _getpid(void) {
  return 0;
}
