#include <iostream>
void add_five(int& num );
//function to demonstrate reference variable// prototype function



int main(){
    int a = 10;

    //create a reference variable

    int& a_ref = a;
    a+= 10;

    std::cout << a << " " << a_ref << std::endl;
    a*= 10;

    std::cout << a << " " << a_ref << std::endl;


    add_five(a);
    std::cout << a << " " << a_ref << std::endl;


    return 0;

    // check the output of a static and check the output of a variable both global before and after intialization, compared to local...
}
void add_five(int& num ){
    num += 5;
}