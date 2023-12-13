# PLP-4
PLP 4: Selection, Loops, and Conditionals

In C++ the boolean values are represented by the keywords true and false. They are case sensitive so typing True or False would result in an error. 

#include <iostream>

int main() {
    bool True = true;
    bool False = false;
}



C++ offers a variety of conditional statements which include if statements, if-else statements, and if-else if-else statements. C++ does not offer a keyword like in Perl where unless does the opposite of if. However, you can simply use the if statement with a negated condition.


if statement: Code is executed if the condition is true

if (condition) {
//code
}


if-else statement: If the first condition is true it executes the first block and if the first condition is false it executes the next block.

if (condition) {
//code
}
else {
//code
}


if-else if-else statement: Similar to the if-else statement you are able to check if multiple conditions are true and can execute the last block if the conditions turn out to be false. 

if (condition) {
//code
}
else if (condition)
//code
}
else {
//code
}


if statement negated: Code is executed if the condition is false

if (!(condition)) {
//code
}



C++ delimits code blocks under each condition in selection control statements through the use of curly brackets {}. Examples of curly brackets being used in and if statement is shown below:


if statement:
#include <iostream>

int main() {
    if (true) {
        int sum = 1 + 1;
        std::cout << "The sum is: " << sum << std::endl;
    }
    
    return 0;
}



C++ uses short-circuiting during the evaluation of the logical operators ‘&&’ (and) and ‘||’ (or). While evaluating the logical operator ‘&&’, if the left side of the ‘&&’ is false, then the result of the expression will automatically be false regardless of the right side of the ‘&&’ being true. Checking the right side wouldn’t make sense in this case, and same with evaluating the logical operator ‘||’. While evaluating the logical operator ‘||’ if the left side of the ‘||’ is true then the result of the expression will automatically be true regardless of the right side of the ‘||’ being false. The following is and example of short circuiting with the ‘&&’ logical operator.


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



The “dangling else” problem is when there is no clarity about which if statement is associated with the else clause. C++ deals with this situation by matching the nearest if statement with the else clause. 


Before matching with the nearest if statement:

if (condition) {
//code
}

else 


After matching with the nearest if statement:

if (condition) {
//code
}
else {
//code
}



C++ uses the switch statement to allow any values to change the control of the execution. The break statement gets out of the switch block. Although it is common practice to use the break statement, it is not required. C++ will just follow through each case until it has reached the end of a switch block. It is still highly preferred to use the break statement to avoid any bugs.

The default case is executed when none of the cases match the expression. This is optional but is good to have as an option in the case that this is the situation.


switch(expression) {
  case 1:
    // code block
    break;
  case 2:
    // code block
    break;
  default:
    // code block
}





Sources:
https://www.geeksforgeeks.org/short-circuiting-in-c-and-linux/
https://en.wikipedia.org/wiki/Dangling_else#:~:text=The%20dangling%20else%20is%20a,than%20one%20correct%20parse%20tree.
https://www.w3schools.com/cpp/cpp_switch.asp
