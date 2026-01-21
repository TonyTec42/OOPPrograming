#include<iostream>


//create a namespace

namespace first{
    int a;
}
namespace second{
    int a;
}
int main(void){
    
    first::a = 10;
    std::cout << "Testing: " << first::a << "!!!!"<< std::endl;
    return 0;
    
}