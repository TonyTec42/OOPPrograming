#include <vector>
#include "Car.hpp"


#ifndef CARDEALER_HPP
#define CARDEALER_HPP
class CarDealer{

public:
   void addCar(const Car& car); //adds the given car to the inventory of the dealer)
   void showInventory() const; //displays the information of all cars in the inventory
private:
    std::vector<Car> inventory;


};#endif
