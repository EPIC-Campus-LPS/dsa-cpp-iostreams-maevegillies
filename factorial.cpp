#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int y = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;
    y = n;

    while (n > 1) {
        y = y * (n - 1);
        n = n-1;
    }
    std::cout << y;

    return 0;
}