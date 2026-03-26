#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    // Get operator and two numbers from user
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Use switch statement to handle different operations
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            // Check for division by zero to avoid errors
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            // Handle invalid operator input
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}
