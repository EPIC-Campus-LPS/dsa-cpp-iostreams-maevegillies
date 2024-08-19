#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //declares x and y variables
    int x;
    int y;
    int sum;
    // asks for input of x and y and stores it
    std::cout << "Number one: ";
    std::cin >> x;
    std::cout << "Number two: ";
    std::cin >> y;
    // adds x and y together and stores it
    sum = x + y;
    // prints sum
    std:: cout << "Answer: " << sum;

    return 0;

}