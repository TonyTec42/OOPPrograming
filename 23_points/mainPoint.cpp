#include "Point.hpp"
#include<iostream>
int main(void){

    // Point p1(3,4);

    // Point p2(5,4);

    // Point p3(83, 70);

    // //compare 2 points


    // if(p1 != p2){
    // std::cout << (char) p3[0];

    // }else{

    //     std::cout << (char) p3[1];
    // }

    // p1[0]= 52 + 33;
    // std::cout << char p1[0];
    // std::cout << "FB7" <<std::endl;
    // if(p1 == p2){
    //     //relational 
    //     std::cout << "Equal\n";


    // }else{
    //     std::cout << "Not Equal\n";
    // }


    Point p1(3, 4, "My Point");

    Point p2(p1);
    Point p3;
    Point p4(1,1, "p4");
    p3 = p1 = p4;
    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    std::cout << p3.toString() << std::endl;
    std::cout << p4.toString() << std::endl;

    std::cout << "---" << p1 << std::endl;
    std::cin >> p4;
    std::cout << p4 << std::endl;
    
    return 0;
}