#include <stdint.h>
#include <stdio.h>

int main()
{
    for(uint8_t pinNumber=0;pinNumber<16;pinNumber++)  {
        //printf("pin number %d ---> %d is your register %d is your bit number\n",pinNumber,(pinNumber/4),(pinNumber%4)*4);
        uint8_t registerValue=pinNumber>>2;//divided by 4
        uint8_t bitNumber=(pinNumber & 0x3)*4;//(pinNumber%4)*4
        printf("pin number %d ---> %d is your register %d is your bit number\n",pinNumber,registerValue,bitNumber);

    }
}
