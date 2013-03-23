/*
 * can.h
 *
 *  Created on: Mar 23, 2013
 *      Author: Eric
 */

#ifndef CAN_H_
#define CAN_H_

#define CAN_ID_SET 0x100
#define CAN_ID_GET 0x101

typedef struct {
	long id;
	char dlc;
	char data[8];
} CANMSG;

void can_rx_ISR(void);
int can_send_msg(CANMSG *msg);

#endif /* CAN_H_ */
