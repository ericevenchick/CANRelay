#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */


// define relay output pins
#define RELAY1	PTAD_PTAD0
#define RELAY2	PTAD_PTAD1
#define RELAY3	PTAD_PTAD2
#define RELAY4	PTAD_PTAD3
#define RELAY5	PTAD_PTAD4
#define RELAY6	PTAD_PTAD5
#define RELAY7	PTAD_PTAD6
#define RELAY8	PTAD_PTAD7
#define RELAY9	PTBD_PTBD0
#define RELAY10	PTBD_PTBD1
#define RELAY11	PTDD_PTDD0
#define RELAY12	PTDD_PTDD1
#define RELAY13	PTDD_PTDD2
#define RELAY14	PTDD_PTDD3
#define RELAY15	PTDD_PTDD4
#define RELAY16	PTED_PTED3

// can control pin
#define CANCTL	PTED_PTED2

#define SWITCH_TEST
#define SLEEP_TEST
void MCU_init(void); /* Device initialization function declaration */

void main(void) {
	long i;
	MCU_init();	/* call Device Initialisation */

#ifdef SLEEP_TEST
	SOPT1_STOPE = 1;
	SPMSC1_LVDE = 0;
	SPMSC2_PPDC = 0;
	__asm("STOP");
#endif
	
	for(;;) {
		// test relay switching. turn on and of all drivers with a delay
#ifdef SWITCH_TEST
		RELAY1 = 1;
		RELAY2 = 1;
		RELAY3 = 1;
		RELAY4 = 1;
		RELAY5 = 1;
		RELAY6 = 1;
		RELAY7 = 1;
		RELAY8 = 1;
		RELAY9 = 1;
		RELAY10 = 1;
		RELAY11 = 1;
		RELAY12 = 1;
		RELAY13 = 1;
		RELAY14 = 1;
		RELAY15 = 1;
		RELAY16 = 1;
		for (i=0;i<1000;i++) {
			__RESET_WATCHDOG();
		}
		RELAY1 = 0;
		RELAY2 = 0;
		RELAY3 = 0;
		RELAY4 = 0;
		RELAY5 = 0;
		RELAY6 = 0;
		RELAY7 = 0;
		RELAY8 = 0;
		RELAY9 = 0;
		RELAY10 = 0;
		RELAY11 = 0;
		RELAY12 = 0;
		RELAY13 = 0;
		RELAY14 = 0;
		RELAY15 = 0;
		RELAY16 = 0;
		for (i=0;i<1000;i++) {
			__RESET_WATCHDOG();
		}
#endif
	}
}