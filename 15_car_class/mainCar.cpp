#include "Car.hpp"

int main(){
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F8 Tributo");
    ferrari.setYear(2024);
    ferrari.setMPG(20);


    ferrari.printInfo();
    return 0;
}
