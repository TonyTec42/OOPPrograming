#include<string>
#include<iostream>

/*
    1.Implement get methods
    2. Create a constructor with arguements
    3. Add mileage property (odometer value)
    4. Add fuel capacity property (tank capacity)
    5. Add fuel level property (current fuel level)
    6. void refuel (double gallons);
    7. void drive (double distance);
    */




    #ifndef CAR_HPP
    #define CAR_HPP

class Car {
public:
// No-arg constructor
Car();
// Get methods
std::string getMake() const;
std::string getModel() const;
int getYear() const;
double getMPG() const;
// Set methods
void setMake(const std::string& new_make);
void setModel(const std::string& new_model);
void setYear(int new_year);
void setMPG(double new_mpg);
// Class methods
void print_info();
private:
std::string make;
std::string model;
int year;
double mpg;
};
void Car::setMake(const std::string& new_make) {
if (!new_make.empty()) {
make = new_make;
}
}
void Car::setModel(const std::string& new_model) {
if (!new_model.empty()) {
model = new_model;
}
}
void Car::setYear(int new_year) {
if (new_year > 1900 && new_year <= 2026) {
year = new_year;
}
else if (new_year > 2026) {
year = 2026;
}
else {
year = 1900;
}
}
void Car::setMPG(double new_mpg) {
mpg = (new_mpg >= 0) ? new_mpg : 0;
}
Car::Car() {
setMake("...");
setModel("...");
setYear(1900);
setMPG(0);
}
void Car::print_info() {
std::cout << make << std::endl;
std::cout << model << std::endl;
std::cout << year << std::endl;
std::cout << mpg << std::endl;
}
#endif
/*    class Car{
   
private:
    std::string make;
    std::string model;
    int year;
    int mpg;

public:
    Car(std::string make, std::string model, int year);
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    //class methods
    void printInfo();
    void setMake(std::string new_make);
    void setModel(std::string new_model);
    


    void Car::setYear(int new_year){
    if(new_year > 1885 && new_year <= 2024){
        year = new_year;
    }else if (new_year > 2026){
        year = 2026;
    } else{
        year = 1900;
    }
}

    void Car::setMPG(int new_mpg){
        mpg = (new_mpg>= 0) ? new_mpg : 0;
}
    Car::Car(){
        setMake("...");
        setModel("...");
        setYear(1900);
        setMPG(0);

    }
}
void Car::printInfo(){
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
}
    */