// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// enum cow_purpose {dairy, meat, hide, pet};
// enum grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // não é possível declarar o mesmo nome para enums diferentes

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // não é possível declarar o mesmo nome para enums diferentes



int main(){
    // int meat = 8; // sobrepõe o meat do enum com o valor da variável local
    
    cow_purpose a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
