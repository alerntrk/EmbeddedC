# calling_a_function_with_any_number_of_parameters

Please click "raw" button
_________________________

If you want to develop driver file for embedded system project,this repo is good for you .
An user who write code with our driver may want to set or resete any number of pins at a time and using or operator is great thing for this purpose.

For Example
------------
i want to set pins 1,2 and 3 .So first 16 bits of BSRR register has to be like that (0000 0000 0000 01110)
the best way of doing this is that: 
                                    0001  PIN_0 
                                    0010  PIN_1 
                                    0100  PIN_2 
                                 |        (OR)
                                 ________________
                                    0111  (RESULT)

 Then just remains assigning the result to the register.
