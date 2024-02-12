// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY; // int32_t = integer 32 bits type
    uint8_t small = 37; // uint8_t = unsigned int 8 bits type
#ifdef DEBUG
    // Somente compila essa parte do código se a variável DEBUG estiver definida
    std::cout << "[About to perform the adition]" << std::endl;
#endif
    large += small;
    std::cout << "The large value is: " << large;

    std::cout << std::endl << std::endl;
    return (0);
}
