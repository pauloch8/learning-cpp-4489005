// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    Student* selectedStudent;
    bool studentFound = false;
    for(int i=0; i < students.size(); i++){
        Student student = students[i];
        if(student.get_id() == id){
            selectedStudent = &student;
            studentFound = true;
            break;
        }
    }
    if(!studentFound){
        std::cout << "Error: Estudent id '" << id << "' not found";
        std::cout << std::endl << std::endl;
        return 1;
    }

    float totalPoints = 0.0f;
    int totalCredits = 0;
    // Usar o & em Grade& faz usar uma referência ao objeto. 
    // Sem usar seria feita uma cópia do objeto
    for(Grade& grade: grades){ 
        int gradeStudentId = grade.get_student_id();
        if(gradeStudentId != id){
            continue;
        }
        char gradeValue = grade.get_grade();
        int gradePoints;
        switch(gradeValue){
            case 'A':
                gradePoints = 4;
                break;
            case 'B':
                gradePoints = 3;
                break;
            case 'C':
                gradePoints = 2;
                break;
            case 'D':
                gradePoints = 1;
                break;
            case 'F':
                gradePoints = 0;
                break;
            default:
                std::cout << "Error: GradeValue '" << gradeValue << "' not found";
                std::cout << std::endl << std::endl;
                return 1;
                break;
        }
        int credits;
        for(int j=0; j < courses.size(); j++){
            Course course = courses[j];
            if(course.get_id() != grade.get_course_id()){
                continue;
            }
            credits = course.get_credits();
            break;
        }
        if(!credits){
            std::cout << "Error: Grade id '" << gradeStudentId << "' not found";
            std::cout << std::endl << std::endl;
            return 1;
        }
        totalPoints += credits * gradePoints;
        totalCredits += credits;
    }
    GPA = totalPoints / totalCredits;

    std::string student_str;
    student_str = students[0].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
