#include <iostream>
#include <string>

int main(){ 


    std::string str = "Hello";
    std::cout << str << std::endl;
    std::cout << "The size of the string is: " << str.size() <<std::endl;
    //concatenate another string
    str += " World!";

    std::cout << str << std::endl;
    std::cout << "The size of the string is: " << str.size() <<std::endl;

    return 0;
}
