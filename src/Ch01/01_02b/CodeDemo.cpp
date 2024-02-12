// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello and welcome to the C++" << endl;
    cout << "Please, enter your name: " << flush;
    string str;
    cin >> str;
     cout << "Hello, " << str << ". Wecome to our course" << endl;
    cout << endl << endl;
    return 0;
}