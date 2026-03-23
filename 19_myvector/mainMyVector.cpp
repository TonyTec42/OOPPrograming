#include "MyVector.hpp"
#include <iostream>

int main(){
    //create my vector object dynamically

        MyVector* mv = new MyVector(15); //create a vector with initial capacity of 15

        for(int i = 0; i< 25; i++){
            //we are using the arrow since it is a pointer to the object
            mv->push_back(i*i); //add some elements to the vector
        }
        mv->at(0) = 10;
        std::cout << "The first element at index 0: " << mv->at(0) << std::endl;
        while(!mv->empty()){
            std::cout << "Capacity: " << mv->getCapacity() << std::endl; //print the current capacity of the vector
            std::cout<<"Popped value: " << mv->pop_back() << std::endl; //remove and print the last element
            mv->print(); //print the current state of the vector
        }

        //mv->print();

        delete mv;


        /*

        vec->push_back(1);
        vec->push_back(2);
        vec->push_back(3);
    
        std::cout<<"Vector size: " << vec->size() << std::endl;
        std::cout<<"Vector capacity: " << vec->capacity() << std::endl;
    
        delete vec; //clean up memory
        */


    return 0;
}