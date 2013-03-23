/*
 * relay.h
 *
 *  Created on: Mar 23, 2013
 *      Author: Eric
 */

#ifndef RELAY_H_
#define RELAY_H_

// define relay pins
#define RELAY1_PIN	PTAD_PTAD0
#define RELAY2_PIN	PTAD_PTAD1
#define RELAY3_PIN	PTAD_PTAD2
#define RELAY4_PIN	PTAD_PTAD3
#define RELAY5_PIN	PTAD_PTAD4
#define RELAY6_PIN	PTAD_PTAD5
#define RELAY7_PIN	PTAD_PTAD6
#define RELAY8_PIN	PTAD_PTAD7
#define RELAY9_PIN	PTBD_PTBD0
#define RELAY10_PIN	PTBD_PTBD1
#define RELAY11_PIN	PTDD_PTDD0
#define RELAY12_PIN	PTDD_PTDD1
#define RELAY13_PIN	PTDD_PTDD2
#define RELAY14_PIN	PTDD_PTDD3
#define RELAY15_PIN	PTDD_PTDD4
#define RELAY16_PIN	PTED_PTED3

#define RELAY1	0x1
#define RELAY2	0x2
#define RELAY3	0x4
#define RELAY4	0x8
#define RELAY5	0x10
#define RELAY6	0x20
#define RELAY7	0x40
#define RELAY8	0x80
#define RELAY9	0x100
#define RELAY10 0x200
#define RELAY11 0x400
#define RELAY12 0x800
#define RELAY13 0x1000
#define RELAY14 0x2000
#define RELAY15 0x4000
#define RELAY16 0x8000

void set_relays(int flags);

#endif /* RELAY_H_ */
