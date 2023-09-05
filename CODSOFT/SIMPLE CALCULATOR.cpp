#include <iostream>

int main() {
    char Operator;
    float num1, num2, result = 0;

    std::cout << "\n Please enter an operator(+,-,*,/) :";
    std::cin >> Operator;

    std::cout << "\n Please enter your two numbers :";
    std::cin >> num1 >> num2;

    switch (Operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "\n Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            std::cerr << "\n INVALID OPERATOR";
            return 1;
    }

    std::cout << "\n The result of " << num1 << Operator << num2 << " = " << result;

    return 0;
}

