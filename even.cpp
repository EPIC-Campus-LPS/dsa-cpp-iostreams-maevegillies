#include <iostream>
#include <string>

using namespace std;
int main() {
    // declares x and answer as integer variables
    int x;
    int answer;
    //asks for input
    std::cout << "Enter a number: ";
    std::cin >> x;
    //divides x by 2 and stores remainder
    answer = x%2;

    // if remainder of x = 0, then it's even
    if (answer == 0){
        std::cout << "Your number is even";
    }
    //if remainder of x = 1, then it's odd
    if (answer == 1){
        std::cout << "Your number is odd";
    }
    return 0;
}