#pragma once // garante que o arquivo só será incluído uma vez

// técnica do ifndef garante que somente será incluído uma vez quando pragma once não for suportado
#ifndef COW_H 
#define COW_H
#include <string>

enum class CowPurpose {dairy, meat, hide, pet};

class Cow{
public:
    Cow(std::string name, int age, CowPurpose purpose);
    std::string getName() const;
    int getAge() const;
    CowPurpose getPurpose() const;
    void setAge(int newAge);
private:
    std::string name;
    int age;
    CowPurpose purpose;

};


#endif // COW_H