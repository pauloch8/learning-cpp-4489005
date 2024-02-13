// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cowPurpose {dairy, meat, hide, pet};

struct cow {
    std::string name;
    int age;
    cowPurpose purpose;
};

int main(){
    cow myCow;
    myCow.age = 5;
    myCow.name = "Betsy";
    myCow.purpose = cowPurpose::dairy;
    std::cout << myCow.name << " is a type-" << (int) myCow.purpose << " cow." << std::endl;
    std::cout << myCow.name << " is " << myCow.age << " years old." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
