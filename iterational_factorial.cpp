#include <iostream>
#include "factorials.hpp"

unsigned int iterational(unsigned int number){
unsigned int temp = number;
if(number == 0 ||number == 1)
return 1;
else
    for(int i=1;i<number;i++){
        temp *=i;

    }


    return temp;

}
