//A one-condition if/else statement (i.e. "if x == true")

#include <iostream>

bool check(int num) {
    std::cout << "The number to be checked is: " << num << std::endl;
    return num > 0;
}

int main() {
    int number = 10;
    if (check(number)) {
        std::cout << "The condition is true." << std::endl;
    }

    return 0;
}


