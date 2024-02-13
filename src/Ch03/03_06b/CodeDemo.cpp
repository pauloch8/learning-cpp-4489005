// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

// Smart Pointers é uma alternativa moderna e segura para Pointers

int main(){
    int a = 37;
    int *ptr = &a;

    std::cout << "O conteudo de a é: " << a << std::endl;
    std::cout << "O endereço de a é: " << &a << std::endl;
    std::cout << "O endereço contido em ptr é: " << ptr << std::endl;
    std::cout << "O valor contido no endereço que ptr aponta é: " << *ptr << std::endl;
    std::cout << "O endereço do pointer ptr é: " << &ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
