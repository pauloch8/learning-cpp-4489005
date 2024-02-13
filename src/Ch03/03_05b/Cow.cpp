    #include "Cow.h"
    
    Cow::Cow(std::string name, int age, CowPurpose purpose){
        this->age = age;
        this->name = name;
        this->purpose = purpose;
    }
    std::string Cow::getName() const{
        // const correctness: a getter functions should not modify the object
        return name;
    }
    int Cow::getAge() const{
        return age;
    }
    CowPurpose Cow::getPurpose() const{
        return purpose;
    }
    void Cow::setAge(int newAge){
        age = newAge;
    }