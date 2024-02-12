// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    const char arrStr1[LENGTH1] = "Hey Guys! ";
    const char arrStr2[] = "What's up?";

    const std::string stdStr1 = "Hi everybody! ";
    const std::string stdStr2 = "How's the going?";

    char arrStrConcat[LENGTH1];
    strncat(arrStrConcat, arrStr2, LENGTH1);

    std::cout << arrStrConcat << std::endl;
    std::cout << stdStr1 + stdStr2 << std::endl; // Operator overloading: + funciona como concatenação em objetos String


    std::cout << std::endl << std::endl;
    return (0);
}
