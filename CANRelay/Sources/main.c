#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "relay.h"
#include "can.h"

void MCU_init(void); /* Device initialization function declaration */

void sleep(void) {
	SOPT1_STOPE = 1;
	SPMSC1_LVDE = 0;
	SPMSC2_PPDC = 0;
	__asm("STOP");
}

void main(void) {
	CANMSG test;
	long i;
	int res;
	MCU_init();	/* call Device Initialisation */
	RELAY1_PIN = 1;
	
	test.id=5;
	test.dlc = 8;
	test.data[0] = 0x55;
	
	for(;;) {
		res = can_send_msg(&test);
		for (i=0; i<30000; i++);
	}
}
