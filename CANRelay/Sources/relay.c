/*
 * relay.c
 *
 *  Created on: Mar 23, 2013
 *      Author: Eric
 */

#include "derivative.h"
#include "relay.h"

void set_relays(int flags) {
	if (flags & RELAY1) {
		RELAY1_PIN = 1;
	} else {
		RELAY1_PIN = 0;
	}
	
	if (flags & RELAY2) {
		RELAY2_PIN = 1;
	} else {
		RELAY2_PIN = 0;
	}

	if (flags & RELAY3) {
		RELAY3_PIN = 1;
	} else {
		RELAY3_PIN = 0;
	}
	
	if (flags & RELAY4) {
		RELAY4_PIN = 1;
	} else {
		RELAY4_PIN = 0;
	}
	
	if (flags & RELAY5) {
		RELAY5_PIN = 1;
	} else {
		RELAY5_PIN = 0;
	}
	
	if (flags & RELAY6) {
		RELAY6_PIN = 1;
	} else {
		RELAY6_PIN = 0;
	}
	
	if (flags & RELAY7) {
		RELAY7_PIN = 1;
	} else {
		RELAY7_PIN = 0;
	}
	
	if (flags & RELAY8) {
		RELAY8_PIN = 1;
	} else {
		RELAY8_PIN = 0;
	}
	
	if (flags & RELAY9) {
		RELAY9_PIN = 1;
	} else {
		RELAY9_PIN = 0;
	}
	
	if (flags & RELAY10) {
		RELAY10_PIN = 1;
	} else {
		RELAY10_PIN = 0;
	}
	
	if (flags & RELAY11) {
		RELAY11_PIN = 1;
	} else {
		RELAY11_PIN = 0;
	}
	
	if (flags & RELAY12) {
		RELAY12_PIN = 1;
	} else {
		RELAY12_PIN = 0;
	}
	
	if (flags & RELAY13) {
		RELAY13_PIN = 1;
	} else {
		RELAY13_PIN = 0;
	}
	
	if (flags & RELAY14) {
		RELAY14_PIN = 1;
	} else {
		RELAY14_PIN = 0;
	}
	
	if (flags & RELAY15) {
		RELAY15_PIN = 1;
	} else {
		RELAY15_PIN = 0;
	}
	
	if (flags & RELAY16) {
		RELAY16_PIN = 1;
	} else {
		RELAY16_PIN = 0;
	}
}
