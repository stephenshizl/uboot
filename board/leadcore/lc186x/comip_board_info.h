/******************************************************************************
*  COPYRIGHT Leadcore Technology Co.,Ltd                                      *
******************************************************************************/
/******************************************************************************
* FileName:    comip_board_info.h
*
* Version:
*
* Purpose:
*
* Authors:
*
* Notes:
******************************************************************************/
/******************************************************************************
*                      HISTORY
*------------------------------------------------------------------------------
*    when        who        where,what,why
*------------------------------------------------------------------------------
*
*
******************************************************************************/


#ifndef __COMIP_BOARD_INFO_H__
#define __COMIP_BOARD_INFO_H__


enum {
	LTE26007M10 = 0,
	LTE26007M11, // old id
	LTE26007M20,
	LTE26047M10,
	LTE26047M11, // new id
	LTE26047M20
};

extern int comip_board_info_get(char *name);


#endif/*__COMIP_BOARD_INFO_H__*/
