//A multi-condition if/else statement (i.e. "if x>0 && y< 10)

#include <iostream>

bool check(int num) {
    std::cout << "The number to be checked is: " << num << std::endl;
    return num > 0;
}

int main() {
    int number = 7;
    if (number > 1 && check(number)) {
        std::cout << "The first and second condition are true." << std::endl;
    } else {
        std::cout << "One condition is true while one condition is false." << std::endl;
    }

    return 0;
}

