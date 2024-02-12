// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4; // size_t = size type. Mais apropriado para tamanhos do que usar int
    int age[AGE_LENGTH];
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;
    std::cout << "The age array has " << AGE_LENGTH << " elements" << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    
    std::cout << std::endl;

    const float temperature[] = {31.5, 32.7, 38.9};
    std::cout << "Temperature[0] = " << temperature[0] << std::endl;
    std::cout << "Temperature[1] = " << temperature[1] << std::endl;
    std::cout << "Temperature[2] = " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
