// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class CowPurpose {dairy, meat, hide, pet};

class Cow{
public:
    Cow(std::string name, int age, CowPurpose purpose){
        this->age = age;
        this->name = name;
        this->purpose = purpose;
    }
    std::string getName() const{
        // const correctness: a getter functions should not modify the object
        return name;
    }
    int getAge() const{
        return age;
    }
    CowPurpose getPurpose() const{
        return purpose;
    }
    void setAge(int newAge){
        age = newAge;
    }
private:
    std::string name;
    int age;
    CowPurpose purpose;

};

int main(){
    Cow myCow("Hildy", 7, CowPurpose::pet);
    myCow.setAge(8);
    std::cout << myCow.getName() << " is a type-" << (int)myCow.getPurpose() << " cow." << std::endl;
    std::cout << myCow.getName() << " is " << myCow.getAge() << " years old." << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
