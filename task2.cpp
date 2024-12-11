#include <iostream>
using namespace std;

class Calculator {
private:

    double number1;
    double number2;

public:
    // Constructor
    Calculator(double num1 = 0, double num2 = 0) {
        number1 = num1;
        number2 = num2;
    }

    // Setter methods
    void setNumber1(double num1) {
        number1 = num1;
    }

    void setNumber2(double num2) {
        number2 = num2;
    }

    // Getter methods
    double getNumber1() {
        return number1;
    }

    double getNumber2() {
        return number2;
    }

    // Operations
    double add() {
        return number1 + number2;
    }

    double subtract() {
        return number1 - number2;
    }

    double multiply() {
        return number1 * number2;
    }

    double divide() {
        if (number2 != 0) {
            return number1 / number2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

// Main Function
int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Create an instance of Calculator
    Calculator calc(num1, num2);

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "Result: " << calc.add() << endl;
        break;
    case '-':
        cout << "Result: " << calc.subtract() << endl;
        break;
    case '*':
        cout << "Result: " << calc.multiply() << endl;
        break;
    case '/':
        cout << "Result: " << calc.divide() << endl;
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
