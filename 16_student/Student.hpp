#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>


class Student{
public:
    

    Student(const std::string& n, double g);
    static int getTotalStudents();
    void print() const;
    static void setGraduationRequirement(double newGPA); //shoudl check that the new GPA is etween 2.0 and 4.0 - it changes a static property which is a good gpa
    bool canGraduate() const; // checks if the student's GPA meets the graduation requirement
    
    private:
    std::string name;
    int age;

    double GPA;
    static int total_students; // counts the total number
    static double goodGPA;// define graduation  requirement
    static int next_id; //generates a unique ID
    std::string id; 

   
    //Student(const std::string& n, int a, const std::vector<int>& g) : name(n), age(a), grades(g) {}

};







#endif // STUDENT_HPP