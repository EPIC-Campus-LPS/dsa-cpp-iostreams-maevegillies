#include <iostream>
#include <string>
//libraries
using namespace std;

int main() {
    //declaring name variable
    string name = "";
    std::cout << "What's your name? ";
    //asks user for name
    std::cin >> name;
    //assigns input to name variable
    std::cout << "Hello, " << name << "!";
    //outputs name

    return 0;

}