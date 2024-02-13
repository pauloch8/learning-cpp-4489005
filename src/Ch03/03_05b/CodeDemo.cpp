// Learning C++ 
// Exercise 03_05
// Using Several Source Files, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "Cow.h"

int main(){
    Cow myCow("Hildy", 7, CowPurpose::pet);
    myCow.setAge(8);
    std::cout << myCow.getName() << " is a type-" << (int)myCow.getPurpose() << " cow." << std::endl;
    std::cout << myCow.getName() << " is " << myCow.getAge() << " years old." << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
