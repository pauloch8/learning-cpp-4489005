// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

// C++ 11 standard : type inference
// must initialize at declaration

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 99987654312;
    auto c = 3.14f; //float
    auto d = 3.14; //double
    auto e = true;
    auto f = 'd'; //char
    auto g = "C++ rocks!";
    
    std::cout << "Type of a is " << typeid(a).name() << std::endl;
    std::cout << "Type of b is " << typeid(b).name() << std::endl;
    std::cout << "Type of c is " << typeid(c).name() << std::endl;
    std::cout << "Type of d is " << typeid(d).name() << std::endl;
    std::cout << "Type of e is " << typeid(e).name() << std::endl;
    std::cout << "Type of f is " << typeid(f).name() << std::endl;
    std::cout << "Type of g is " << typeid(g).name() << std::endl; // PKc Point for Const Char

    std::cout << std::endl << std::endl;
    return (0);
}
