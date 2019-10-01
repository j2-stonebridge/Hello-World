#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to my program" << std::endl;

    int a =0;
    int b =0;

    std::cout << "Please enter a number" << std::endl;
    std::cin >> a;
    std::cout << "Please enter a number to be added" << std::endl;
    std::cin >> b;
    std::cout << "the total of your two numbers is " << std::endl;
    std::cout << int (a + b) <<std::endl;

    return 0;
}