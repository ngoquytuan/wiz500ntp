/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdio.h>
#include "stm32f10x.h"                  // Device header
#include "GPIO_STM32F10x.h"             // Keil::Device:GPIO
#include <time.h>
//user include
#include "uartHandler.h"
#include "stm32f10x_it.h"
#include "timerHandler.h"
#include "delay.h"
#include "spiconfig.h"
#include "w5500init.h"
#include "socketdefines.h"
#include "ntpserver.h"
#include "snmp.h"
#include "eeprom_stm.h"
#include "httpServer.h"
#include "webpage.h"


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
//#define ONTIME 1
//#define STOP   0
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void networkSevices(void);
void loadwebpages(void);
void usart1Process(void);
void test_eeprom(void);
void IWDG_Config(void);
void WIZ550webGPIO_config(void);
uint8_t checkDaymang(void);
#define GPS_MASTER_OK   1
#define LOST_GPS_MASTER 0
#endif /* __MAIN_H */

