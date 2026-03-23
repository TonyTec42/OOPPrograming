#include "Student.hpp"
#include <string>
#include <vector>
#include <iostream>

    /*std::string name;
    int age;
    std::vector<int> grades;
    double GPA;
    
    //initialize the static data member (REQUIRED)
   
    std::string id; 
    */
    Student::static int total_students;
    Student::static int next_id;
    Student::static int good_grade_threshold;
    
    

    Student::Student(const std::string& n, double g) : name(n), GPA(g) {
        total_students++;
        id = "U0000" + std::to_string(next_id);
        next_id += 5;
    }
    static int Student::getTotalStudents(){
        return total_students;
    }

    void Student::print() const{
        std::cout << "ID: " << id << std::endl;

        std::cout << "Name: " << name << std::endl;
        std::cout << "GPA: " << GPA << std::endl;
        std::cout << "Can graduate: " << (canGraduate() ? "Yes" : "No") << std::endl;
        

    }

//initialize the static data member (REQUIRED)
int Student::total_students = 0;

int main() {
    Student s1("Alice", 3.8);
    Student s2("Bob", 3.5);
    //print the total 
    Student("Anna", 3.9);
    std::cout << "Total students: " << Student::total_students << std::endl;
    return 0;
}
