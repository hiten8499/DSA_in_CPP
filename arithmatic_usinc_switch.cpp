// Program to build a simple calculator using switch Statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    char Operator;
    float num1, num2;
    
  
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> Operator;
    switch (Operator) {
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
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}