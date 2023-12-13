//Using if/elif/else statements

#include <iostream>

bool check(int num) {
    std::cout << "The number to be checked is: " << num << std::endl;
    return num > 0;
}

int main() {
    int number = 7;
    if (number > 1 && check(number)) {
        std::cout << "The first condition is true." << std::endl;
    } else if (number > 2) {
        std::cout << "The first condition is false but the second condition is true." << std::endl;
    } else {
        std::cout << "Both conditions are false." << std::endl;

    }

    return 0;
}