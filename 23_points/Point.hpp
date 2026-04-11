#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char* new_tag = nullptr);
    ~Point();

    Point(const Point& other); // Copy constructor


    // Relational operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Operator []
    int& operator[](int index);

    // Arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; // TODO
    Point operator-(const Point& other) const; // TODO

    // Arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other); // TODO
    Point& operator-=(const Point& other); // TODO
    //todo is for 
    // Preincrement
    Point operator++();
    
    // Postincrement
    Point operator++(int);

    //assignment opreator
    Point& operator=(const Point& other);

    std::string toString() const;

    friend std::istream& operator>>(std::istream& in, Point& p);
private:
    int x, y;
    char* tag
};
std::ostream& operator<<(std::ostream& out, const Point& p);

#endif