// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    // implicit cast of a double 7.66 to float. 
    // To be a float, the literal value should be 7.66f with the letter f
    float flt = -7.66;
    // implicit cast of float to integer. The value is truncated
    int32_t sgn = flt;
    // try to assign negative value to an unsigned. (2^32 - 7)
    uint32_t unsgn = sgn;

    std::cout << "float: " << flt << std::endl;
    std::cout << "signed: " << sgn << std::endl;
    std::cout << "unsigned: " << unsgn <<std::endl;
    std::cout << "unsigned casted to signed: " << (int32_t)unsgn <<std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
