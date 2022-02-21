#include <iostream>
#include "factorials.hpp"
#include "recursive_factorial.cpp"
#include "iterational_factorial.cpp"

using namespace std;


bool valid (int number){
if(number<0 || number>=13){
   cout<<"entered value is invalid!\n";
   return true;
}

return false;
}

int main()
{

while(true){

    int number;

    cout << "enter a number to factorial: " << endl;
    cin>>number;
if(valid(number)==false){

    cout<<"factorial :"<<endl;
    cout<<"iterational: "<<iterational(number)<<endl;
    cout<<"recursive: "<<recursive(number)<<endl;
}



}
 return 0;
}
