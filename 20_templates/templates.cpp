#include <vector>
#include <iostream>
#include<string>


template<typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template<typename T>
void print( T& value);
void print(bool value);
//find max
template<typename T>
T findMax(const std::vector<T>& vec);

int main(){
    int i1 = 10, i2 = 200, i3 = 550;

    //xall the the template functin
    std::cout << "The smallest integer is: " << smallest(12.3, -4.5, 9.4) << std::endl;
    std::string s1 = "APPLE", s2 = "BANANA", s3 = "CHERRY";
     std::cout << "The smallest integer is: " << smallest(s1, s2, s3) << std::endl;
     int i4 = 5;
    print(i4);
    print(true);


    //to do

    return 0;



}
template<typename T>
T smallest(const T& n1, const T& n2, const T& n3) {
    if(n1 < n2 && n1 < n3){
        return n1;
    }
    else if(n2 < n1 && n2 < n3){
        return n2;
    }
    else{
        return n3;
    }


    T smallest = n1;
    if (n2 < smallest) {
        smallest = n2;

    }
    if (n3 < smallest) {
        smallest = n3;
    }
    return smallest;
}
template<typename T>
void print( T& value){
    std::cout << "Generic value: " << value << std::endl;
}
void print(bool value){
    std::cout << "Boolean value: " << (value ? "true" : "false") << std::endl;
}

template<typename T>
T findMax(const std::vector<T>& vec) {
    //preventsus from altering the the stuff in the original vector
    if (vec.empty()) {
        throw std::invalid_argument("Vector is empty");
    }
    T max = vec[0];
    for (const T& element : vec) {
        if (element > max) {
            max = element;
        }
    }
    return max;
}