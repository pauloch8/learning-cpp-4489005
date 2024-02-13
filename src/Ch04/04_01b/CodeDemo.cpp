// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1024;
    if(a > 1000){
        std::cout << "Warning: a is over 1000." << std::endl;
    }
    if((a % 2) == 0) {
        std::cout << "A is odd";
    } else {
        std::cout << "A is even";
    }
    std::cout << std::endl << std::endl;

    char lttr = 'd';
    std::cout << "The letter " << lttr;
    const bool isLowerVowel = lttr == 'a' || lttr == 'e' || lttr == 'i' || lttr == 'o' || lttr == 'u';
    const bool isUpperVowel = lttr == 'A' || lttr == 'E' || lttr == 'I' || lttr == 'O' || lttr == 'U';
    if(!isLowerVowel && !isUpperVowel){
        std::cout << " is not ";
    }
    else {
        std::cout << " is ";
    }
    std::cout << "a vowel" << std::endl;

    return (0);
}
