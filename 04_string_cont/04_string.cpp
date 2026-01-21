#include <iostream>
#include <string>

int main(){
    std::string str1 = "This is first string";

    //initialize the string with another string (copy)
    std::string str2(str1);

    //Initialize the string with character and number of appeareance
    std::string str3(100, '?');

    //Initialize the string with a part of another string
    std::string str4(str1, 14, 6); // 14 start index, 6 characters to take
    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;
    
    if(str1 == str2){
        std::cout << str4 + str1 << std::endl;
        
    }

    return 0;
}