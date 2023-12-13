//Simple short-circuit logic

#include <iostream>

bool check(int num) {
    std::cout << "The number to be checked is: " << num << std::endl;
    return num > 0;
}

int main() {
    int number = 10;
    if (number > 0 && check(number)) {
        std::cout << "The first and second condition are true." << std::endl;
    } else {
        std::cout << "One condition is true while one condition is false." << std::endl;
    }

    return 0;
}

