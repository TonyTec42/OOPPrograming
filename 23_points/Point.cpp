#include "Point.hpp"
#include <string>
#include <cstring>
Point::Point(int x, int y, const char* new_tag){
    this->x = x;
    this->y = y;
    if(new_tag ){
        
    
    int size = strlen(new_tag);
    tag = new char[size + 1]; //include for the null character 
    strcpy(tag, new_tag); //copy the current tag into the new_tag
    }else{
        tag = nullptr;
        return;
    }

}
Point::~Point(){

    if(tag){

        delete[] tag;
        //if null ptr then there is nothing to delete
    }
    return 0;

}
Point::Point(const Point& other){
    x = other.x;
    y = other.y;
    if(other.tag){
        int size = strlen(other.tag);
        tag = new char[size + 1]; //allocate new memory for the tag
        strcpy(tag, other.tag);
    }else{
        tag = nullptr;
    }
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

    std::string s;

    if(tag){
        s += std::string(tag);

    }

    return s + ": (" + std::to_string(x) + ", " + std::to_string(y) + ")"

}

Point Point::operator+(const Point& other) const{
    return Point(x + other.x, y + other.y);
}