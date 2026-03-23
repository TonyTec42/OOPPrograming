#include "Student.hpp"
#include<iostream>

int main() {
    Student s1("Alice", 3.8);
    Student s2("Bob", 3.5);
    //print the total 
    Student("Anna", 3.9);
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    s1.print();
    s2.print();
    
    return 0;
}