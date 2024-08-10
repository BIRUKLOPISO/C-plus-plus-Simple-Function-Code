#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    char operation;

    cout << "Welcome to the Calculator App!" << endl;

    // Get user input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the requested operation
    switch (operation) {
        case '+':
            result = add(num1, num2);
            cout << "The result is: " << result << endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "The result is: " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "The result is: " << result << endl;
            break;
        case '/':
            result = divide(num1, num2);
            cout << "The result is: " << result << endl;
            break;
        default:
            cout << "Error: Invalid operation" << endl;
            break;
    }

    return 0;
}