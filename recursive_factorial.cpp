#include <iostream>
#include "factorials.hpp"

   unsigned int recursive(unsigned int number){

        if(number==0 || number == 1)
            return 1;
        else


    return number *recursive(number-1);
    }
