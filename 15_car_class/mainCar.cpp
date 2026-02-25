#include "Car.hpp"
#include "CarDealer.hpp"

int main(){
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F8 Tributo");
    ferrari.setYear(2024);
    ferrari.setMPG(20);


    ferrari.print_info();

    Car ferrari_spider("Ferrari", "F8 Spider", 2024, 13.8);
    Car ferrari_superGT("Ferrari", "Super GT", 2024, 22.5);
    ferrari_spider.print_info();
    ferrari_superGT.print_info();


    //create a car dealer and add cars to the inventory
    CarDealer lakeland_ferrari;
    lakeland_ferrari.addCar(ferrari);
    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_superGT);


    
    return 0;
}
