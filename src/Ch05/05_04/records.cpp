#include "records.h"
#include "vector"
#include <iostream>

Student::Student(int the_id, std::string the_name){
    id = the_id;
    name = the_name;
}
int Student::get_id() const{
    return id;
}
std::string Student::get_name() const{
    return name;
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){
    id = the_id;
    name = the_name;
    credits = the_credits;
}
int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}


Grade::Grade(int sid, int cid, char grd){
    student_id = sid;
    course_id = cid;
    grade = grd;
}
int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}

void StudentRecords::add_student(int sid, std::string sname){
    students.push_back(Student(sid, sname));
}

void StudentRecords::add_course(int cid, std::string cname, unsigned char ccredits){
    courses.push_back(Course(cid, cname, ccredits));
}

void StudentRecords::add_grade(int sid, int cid, char grade){
    grades.push_back(Grade(sid, cid, grade));
}

float StudentRecords::get_num_grade(char letter) const{
    float num_grd;          // float for the numeric grade
    switch (letter){
        case 'A': num_grd = 4.0f;
            break;
        case 'B': num_grd = 3.0f;
            break;
        case 'C': num_grd = 2.0f;
            break;
        case 'D': num_grd = 1.0f;
            break;
        default:  num_grd = 0.0f;
            break;
    };
    return num_grd;
}

std::string StudentRecords::get_student_name(int sid) const{
    int i = 0;
    while (i < students.size() && students[i].get_id() != sid)
        i++;
    return students[i].get_name();
}

unsigned char StudentRecords::get_course_credits(int cid) const{
    int j = 0;
    while (j < courses.size() && courses[j].get_id() != cid)
        j++;
    return courses[j].get_credits();
}

float StudentRecords::get_GPA(int sid) const{
    float points = 0.0f, credits = 0.0f;
    auto grades = get_student_grades(sid);
    for (const Grade& grd : grades) {
        unsigned char current_credits = get_course_credits(grd.get_course_id());
        credits += current_credits;
        points += get_num_grade(grd.get_grade()) * current_credits;
    }
    return (points / credits);
}

std::vector<Grade> StudentRecords::get_student_grades(int sid) const{
    std::vector<Grade> found_grades;
    for (const Grade& grd : grades){
        if (grd.get_student_id() == sid){
            found_grades.push_back(grd);
        }
    }
    return found_grades;
}

std::string StudentRecords::get_course_name(int cid) const {
    int i = 0;
    while (i < courses.size() && courses[i].get_id() != cid)
        i++;
    return courses[i].get_name();
}

void StudentRecords::report_card(int id) const{
    auto students_name = get_student_name(id);
    std::cout << "Student's name: " << students_name << std::endl;
    auto grades = get_student_grades(id);
    for(Grade& grade : grades){
        auto course_name = get_course_name(grade.get_course_id());
        std::cout << course_name << ": " << grade.get_grade() << std::endl;
    }
    auto gpa = get_GPA(id);
    std::cout << "GPA: " << gpa << std::endl;
}