/*
 * can.c
 *
 *  Created on: Mar 23, 2013
 *      Author: Eric
 */

#include "derivative.h" /* include peripheral declarations */
#include "can.h"
#include "relay.h"

void can_rx_ISR() {
	CANMSG msg;
	
	// get CAN message
	// convert the two ID registers into the actual ID value
	msg.id = (CANRIDR0 << 3) + ((CANRIDR1 & 0xE) >> 5);
	msg.dlc = CANRDLR;
	msg.data[0] = CANRDSR0;
	msg.data[1] = CANRDSR1;
	msg.data[2] = CANRDSR2;
	msg.data[3] = CANRDSR3;
	msg.data[4] = CANRDSR4;
	msg.data[5] = CANRDSR5;
	msg.data[6] = CANRDSR6;
	msg.data[7] = CANRDSR7;
	
	// check ID, 0x??? = set relays, 0x??? = request state
	if (msg.id == CAN_ID_SET)
	{
		// set relay values
		set_relays(msg.data[0]);
	} else if (msg.id == CAN_ID_GET) {
		// send message with relay values
	}
	
	// clear rx flag
	CANRFLG_RXF = 0x01;
}

int can_send_msg(CANMSG *msg) {
	char txbuffer;
	// select lowest available buffer
	CANTBSEL = CANTFLG;
	// store selected buffer
	txbuffer = CANTBSEL;
	
	// convert ID into the two ID registers
	CANTIDR0 = ((msg->id & 0x7) << 5);
	CANTIDR1 = (char)(msg->id >> 3);
	CANTDLR = msg->dlc;
	CANTDSR0 = msg->data[0];
	CANTDSR1 = msg->data[1];
	CANTDSR2 = msg->data[2];
	CANTDSR3 = msg->data[3];
	CANTDSR4 = msg->data[4];
	CANTDSR5 = msg->data[5];
	CANTDSR6 = msg->data[6];
	CANTDSR7 = msg->data[7];
	
	// transmit
	CANTFLG = txbuffer;
	
	return 0;
}
