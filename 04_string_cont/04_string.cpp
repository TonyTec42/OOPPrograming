#include <iostream>
#include <string>
const double PI = 3.14;

//constants are usually all capital letters
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

    std::string strt1 = "ABCD";
    std::string strt2 = "ABCE";

    std::cout << (strt1 > strt2) << std::endl;
    //this outputs 0 because 'D' has a lower ASCII value than 'E'




    //short form of the if statement
    //std::string s0 = s0("3");
    std::string s0 = "3";
    std::string s1 = "8";
    std::string s2 = s0 + s1;
    s2 += '7';

     s2 += (s1 < s2) ? s0 : "Z"; //if s1 is less than s2, append s0 to s2, else append "Z"
    std::cout << s2 << "J" << std::endl;
        //equality test of to floating point values??

        //conditional expression;
     int x = 75, y= 75;
     
    
        y = (x > 50) ? 50 : x;



    return 0;
}