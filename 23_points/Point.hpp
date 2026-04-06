
#ifndef POINT_HPP
#define POINT_HPP
class Point{

    public:
    Point(int x = 0, int y = 0);


    //relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    //Operator []
    int& operator[](int index) const;
    //you can modify outside now



    //arithmetic operators
    Point operator+(const Point& other) const{
        return Point(x + other.x, y + other.y);
    }
    Point operator-(const Point& other) const{
        return Point(x - other.x, y - other.y);
    }
    Pointer operator*(const Point& other) const{
        return Point(x * other.x, y * other.y);
    }

    Point operator+=(const Point & other){
       Point temp(x,y);
       *this = *this + other;
       return *this;
    }

    //do the other operation symbols for the assignment....

    //preincrement
    Point operator++(){
        ++x;
        ++y;
        return *this;
    }
    //post increment
    Point operator++(int){
        Point temp(*this);
        ++(*this);
        return temp;
    }


    private:
    int x, y;
};

#endif