#include "Point.hpp"
#include <string>
Point::Point(int x, int y){
    this->x = x;
    this->y = y;



}
bool Point::operator==(const Point& other) const{

    return((x == other.x) && (y == other.y));
}
bool Point::operator!=(const Point& other){
     return !(*this == other);
}
  int& Point::operator[](int index){

    return(index == 0) ? x : y;
  }

std::string Point::toString() const{
    return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator+(const Point& other) const{
    return Point(x + other.x, y + other.y);
}