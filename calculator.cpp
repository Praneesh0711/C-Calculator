#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char cont = 'y';
    cout << "Simple C++ Calculator supporting multiple operations\n";
    cout << "-------------------------------------------------\n";

    while(cont == 'y' || cont == 'Y') {
        // Input first number
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "\nResult: ";
        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if(num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                else
                    cout << "Error: Division by zero is undefined.";
                break;
            default:
                cout << "Error: Invalid operator entered.";
        }

        cout << "\n\nDo you want to perform another calculation? (y/n): ";
        cin >> cont;
        cout << "\n";
    }

    cout << "Thank you for using the calculator!\n";
    return 0;
}
