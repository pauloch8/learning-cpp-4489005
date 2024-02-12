// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // global variable

int main(){
    bool myFlag; // local variable
    a = 7;
    myFlag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << myFlag << std::endl;
    myFlag = true;
    std::cout << "flag = " << myFlag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
