#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
class MyVector{
    private:
        int* elements; // an array of integers

        int size; //represents the current number of elements
        int capacity; //represents the maximum number of elements in the array
        bool full() const;
        void allocateMemory(int memory_size);

    public:
        MyVector(int capacity = 10);
        

        ~MyVector();
        MyVector(const MyVector& other);
        void print() const;
        void push_back(int value); // adds an element to the end of the vector
    
        bool empty() const;
        
        int pop_back();     // removes the last element and returns its value
        int getCapacity() const; 
        int& at(int index) const; // returns the element at the specified index also checks the boundaries
        //EXTRA ASSIGNMENT
        int thirdMax() const; //returns the third distinct maximum element from the vector, 
        //if no third max  - return max value;
        // 1 1 1 1 = 1
        // 1 2 2 1 1 = 2
        //1 1 3 2 1 = 3
        //2 2 3 3 3 1 = 3
        //1 2 2 3 3 = 1
};


#endif // MYVECTOR_HPP