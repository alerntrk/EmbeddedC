# EXTI_ALGORITHM

This code provides an algorithm to find which register which bit to be written when I configure certain pin number of a port.
There are the 4 different register this registers are used to configure external interrupt line (I can select port and pin i want to take interrupt).
For instance EXTI5 accept only one interrupt it can be from PA5 PB5 or PC5 but just one of them . It is okay EXTI5 are about 5th pin but 
EXTI5 have to know this pin belongs to which port to do this i write some numbers to the related register's related bits.
Each EXTIx has 4 bit i show you below what will be writteen to set (A,B,C,D)ports.

0000:  PA[x] pin
0001: PB[x] pin
0010: PC[x] pin
0011: PD[x] pin
0100: PE[x] pin
x is the pin number from 0 to 15
For example if you want to take interrupt from pin PA7  all you have to do  writing 0x0 to the SYSCFG_EXTICR2 register's last 4 bit as i show you below with '*' sign.
Lets say i want to take interrupt from PB8 to realize this i have to write 0x1 (look line 6) to the SYSCFG_EXTICR4 register 's first 4 bit (EXTI8).


EXTIx --> x is the pin number from 0 to 15
_________________________________________________
|EXTI3      |EXTI2      |EXTI1      |EXTI0      |   
_________________________________________________         SYSCFG_EXTICR1(external interrupt configuration register )
|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|
_________________________________________________


_________________________________________________
|EXTI7      |EXTI6      |EXTI5      |EXTI4      |   
(*__*__*__*)_________________________________________         SYSCFG_EXTICR2(external interrupt configuration register )
|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|
_________________________________________________


_________________________________________________
|EXTI11      |EXTI10      |EXTI9      |EXTI8    |   
________________________________________________         SYSCFG_EXTICR3(external interrupt configuration register )
|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|
_________________________________________________


_________________________________________________
|EXTI15      |EXTI14      |EXTI13      |EXTI12  |   
_________________________________________________         SYSCFG_EXTICR4(external interrupt configuration register )
|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|rw|
_________________________________________________
