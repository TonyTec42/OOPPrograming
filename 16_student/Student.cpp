#include <string>
#include <vector>
#include <iostream>
class Student{
public:
    std::string name;
    int age;
    std::vector<int> grades;
    double GPA;
    static int total_students;

    Student(const std::string& n, double g) : name(n), GPA(g) {
        total_students++;
        
    }
    

    //Student(const std::string& n, int a, const std::vector<int>& g) : name(n), age(a), grades(g) {}

};
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
