// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    const int nums[5] = {1,23,32,24,337};
    const int sum = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    const float result = sum / 5.0f;

    // Write your code here
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
