#include <stdio.h>
#include <stdint.h>
#define GPIO_PIN_0				(uint16_t)(0x0001)   /* Gpio pin 0 selected*/
#define GPIO_PIN_1				(uint16_t)(0x0002)	 /* Gpio pin 1 selected*/
#define GPIO_PIN_2				(uint16_t)(0x0004)	 /* Gpio pin 2 selected*/
#define GPIO_PIN_3				(uint16_t)(0x0008)   /* Gpio pin 3 selected*/
#define GPIO_PIN_4				(uint16_t)(0x0010)   /* Gpio pin 4 selected*/
#define GPIO_PIN_5				(uint16_t)(0x0020)   /* Gpio pin 5 selected*/
#define GPIO_PIN_6				(uint16_t)(0x0040)   /* Gpio pin 6 selected*/
#define GPIO_PIN_7				(uint16_t)(0x0080)   /* Gpio pin 7 selected*/
#define GPIO_PIN_8				(uint16_t)(0x0100)   /* Gpio pin 8 selected*/
#define GPIO_PIN_9				(uint16_t)(0x0200)   /* Gpio pin 9 selected*/
#define GPIO_PIN_10				(uint16_t)(0x0400)   /* Gpio pin 10 selected*/
#define GPIO_PIN_11				(uint16_t)(0x0800)   /* Gpio pin 11 selected*/
#define GPIO_PIN_12				(uint16_t)(0x1000)   /* Gpio pin 12 selected*/
#define GPIO_PIN_13				(uint16_t)(0x2000)   /* Gpio pin 13 selected*/
#define GPIO_PIN_14				(uint16_t)(0x4000)   /* Gpio pin 14 selected*/
#define GPIO_PIN_15				(uint16_t)(0x8000)   /* Gpio pin 15 selected*/
#define GPIO_PIN_ALL			(uint16_t)(0xFFFF)   /* All Gpio pin selected*/
int main()
{
 uint16_t GPIO_Pin_to_be_config=GPIO_PIN_12 | GPIO_PIN_11 |GPIO_PIN_4;

   for(uint16_t position=0;position<16U;position++){
       uint16_t tempValue=(0x1U << position);//shift the '1' as position
       uint16_t isThere = tempValue & GPIO_Pin_to_be_config;//And tempValue , GPIO_Pin_to_be_config to check the position has pin to be configured
       //if pin number is the same as position then isThere value will be the same value as the tempvalue else it will be zero
       if(isThere) printf("%d is the position %#x is tempvalue %#x isThere value\n",position,tempValue,isThere);

   }

    return 0;
}
