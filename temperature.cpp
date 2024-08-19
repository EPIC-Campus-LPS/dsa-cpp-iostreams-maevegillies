#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    int c = 0;
    //declares celsius at 0
    std::cin >> c;
    //asks for input
    c = c * 9;
    //multiplies c by 9
    c = c / 5;
    //divides c by 5
    c = c + 32;
    //adds 32
    std::cout << c;
    //output c 
    
    return 0;
}