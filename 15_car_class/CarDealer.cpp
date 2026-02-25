#include "CarDealer.hpp"
#include <iostream>
   void CarDealer::addCar(const Car& car){
    inventory.push_back(car);

   } 
   void CarDealer::showInventory() const{
    for(int i = 0; i < inventory.size(); i++){
        inventory[i].print_info();
        
    }
   }
   void CarDealer::(const Car& car){
    inventory.push_back(car);

   }