#include <iostream>

//template class

template <typename T1 = int, typename T2 = double> // default template parameters
class Pair {
public:
   Pair(const T1& f, const T2& s) : first(f), second(s){


   }

    void display() const {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
    //Getters and setters can be added if needed
    //it is a const reference because we do not want to modify the value of the first and second member variables when we return them
    //and it is a byreference to avoid unnecessary copying of the values when we return them
    const T1& getFirst() const {
        return first;
    }
    const T2& getSecond() const {
        return second;
    }

    void setFirst(const T1& val) {
        //reciving te arguement and assigning it to the first member variable
        first = val;
    }
    void setSecond(const T2& second) {
        this->second = second;
    }

    
private:
    // You can add private members or methods if needed
    T1 first;
    T2 second;

};
//create a function that takes 2 arguments of any type and returns a pair of those arguments
template <typename T1, typename T2>
Pair<T1, T2> createPair(const T1& v1, const T2& v2) {
    //returns us an object of a pair
    return Pair<T1, T2>(v1, v2);
}

int main(){
    //Create the Pair object
    Pair<int, double> p1(1, 3.4);
    std::cout << "(" << p1.getFirst() << ", " << p1.getSecond() << ")" << std::endl;
    Pair<std::string, char> p2 = createPair(std::string("Hello"), '!');
    std::cout << "(" << p2.getFirst() << ", " << p2.getSecond() << ")" << std::endl;

    //it is a pair of character and interger
    auto p3 = createPair('a', 3);
    std::cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")" << std::endl;
    //can i create a pairs of pairs?
    Pair p4(1, 9.9);
    std::cout << "(" << p4.getFirst() << ", " << p4.getSecond() << ")" << std::endl;
    return 0;
}