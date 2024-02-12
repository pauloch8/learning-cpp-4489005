// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    const int fahrenheit = 100;
    // divisão de inteiros (5 / 9) dá 0.
    //const int celsius = (5 / 9) * (fahrenheit - 32);
    // É necessário fazer cast para um número real
    const int celsius = ((float)5 / 9.0f) * (fahrenheit - 32);
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;

    const auto weight = 10.99f;
    const auto weightDouble = 10.99;
    std::cout << "Real number: " << weight << std::endl;
    std::cout << "Integer part: " << (int)weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;
    std::cout << "Fractional part (of double): " << (int)((weightDouble - (int)weightDouble) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
