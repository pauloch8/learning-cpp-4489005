// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main() {
    std::cout << "Hello and welcome to the C++" << std::endl;
    std::cout << "Please, enter your name: " << std::flush;
    std::string str;
    std::cin >> str;
    std:: cout << "Hello, " << str << ". Wecome to our course" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}