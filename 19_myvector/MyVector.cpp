#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity){
    this->capacity = capacity;
    size = 0;
    elements = new int[capacity];

}
//copy constructor
MyVector::MyVector(const MyVector& other){
    std::cout<<"Copy constructor for " << this <<std::endl;
    capacity = other.capacity;
    size = other.size;
    elements = new int[capacity]; //allocate new memory for the copy
    for(int i = 0; i < size; i++){
        elements[i] = other.elements[i];

    }
}
MyVector::~MyVector(){
            delete[] elements; //deallocate the memory used by the arra
    }
    void MyVector::print() const{
        std::cout << "[ ";
        for(int i = 0; i < size; i++){
            std::cout << elements[i] << " ";
        }
        std::cout << "]\n" << std::endl;
    }
    void MyVector::push_back(int value){
        //TODO cosnider the case when the vector is full and we need to resize it
        if(full()){
            //resize the vector by doubling its capacity
            allocateMemory(capacity * 2);
            /*
            int* new_elements = new int[capacity];
            for(int i = 0; i < size; i++){
                new_elements[i] = elements[i];
            }
            delete[] elements; //deallocate the old array
            elements = new_elements; //point to the new array
            */
        }
        elements[size] = value;
        size++;
    }
    bool MyVector::full() const{
        return size == capacity;
    }
    bool MyVector::empty() const{
        return size == 0;
    }
    void MyVector::allocateMemory(int memory_size){
       
         //resize the vector by doubling its capacity

            capacity == memory_size;
            //save the old address of the array
            int* old_array = elements;
            //allocate new memory
            elements = new int[capacity];
            //copy the old elements to the new array
            for(int i = 0; i < size; i++){
                elements[i] = old_array[i];
            }
            //deallocate the old array
            delete[] old_array;
    }
    int MyVector::pop_back(){
        //cannot be constant since it changes the ARRAY VERY IMPORTANT 
        if(!empty()){
            if(size < capacity / 2){
                //shrink the vector by halving its capacity
                allocateMemory(capacity / 2);
            }
            return elements[--size]; //decrease the size and return the last element
        }else{
            throw "empty vector"; //throw an exception if the vector is empty/throw is an exception, it is out of the ordinary scenario,
        }
       
    }
    int MyVector::getCapacity() const{
        return capacity;
    }
            int& MyVector::at(int index) const{
                if(index < 0 || index >= size){
                    throw "index out of bounds";
                }
                return elements[index];
            }