#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "Hello.  Do you want to do a sum on my FABULOUS"
                 " calculator?!!!!!!!! Type 'yes' or 'no'  ";

    string answer;
    cin >> answer;

    if (answer == "no" || answer == "No  ") {
        std::cout << "Your loss, loser!";
    }

    if (answer == "yes" || answer == "Yes") {
        std::cout << "Please enter the first number of your sum  ";

        int firstNumber;
        cin >> firstNumber;

        std::cout <<"Please enter the second number of your sum  ";

        int secondNumber;
        cin >> secondNumber;
        while (true) {
            std::cout << "Please enter 'multiply' to multiply the numbers,"
                         "'divide' to divide the numbers, 'minus' to minus "
                         "the numbers, or 'add' to add the numbers  ";

            string operation;
            cin >> operation;
            int result;
            if (operation == "multiply") {
                result = firstNumber * secondNumber;
            } else if (operation == "divide"){
                result = firstNumber / secondNumber;
            } else if (operation == "minus") {
                result = firstNumber - secondNumber;
            } else if (operation == "add"){
                result = firstNumber + secondNumber;

            } else {
                std::cout << "This is the simplest calculator known to man... "
                             "and you STILL managed to mess it up! "
                             "You know what, I'd even say you're "
                             "the simplest PERSON known to man!"
                             " Just type one of the options, ya doofus!";
                continue;
            }
            result += 13;
            std::cout << "  Your answer is, drum roll please......"
                      << result;
            break;
        }
    }

}
