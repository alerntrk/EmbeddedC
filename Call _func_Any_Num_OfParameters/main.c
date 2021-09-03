#include <stdio.h>
#include <stdint.h>
#define ENABLE  0x1
#define DISABLE (!ENABLE)
#define GPIO_PIN_0  0x1U
#define GPIO_PIN_1  0x2U
#define GPIO_PIN_2  0x4U
#define GPIO_PIN_3  0x8U

void  GPIO_Write_Pin(uint32_t *reg,uint8_t pinNumber,uint8_t pinstate){
    
    if(pinstate==ENABLE) *reg= pinNumber;
    else if(pinstate==DISABLE) *reg |=(pinNumber<<16U);// or operator keeps the previously setted pins ofcourse except to be resetted pins

}



int main(){
    uint32_t GPIO_BSRR=0x0;
    GPIO_Write_Pin(&GPIO_BSRR,GPIO_PIN_1 | GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_0,0x1);
    printf("%#x          %d\n",GPIO_BSRR,GPIO_BSRR);
    GPIO_Write_Pin(&GPIO_BSRR,GPIO_PIN_1 | GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_0,0x0);
    printf("%#x          %d\n",GPIO_BSRR,GPIO_BSRR);

}
