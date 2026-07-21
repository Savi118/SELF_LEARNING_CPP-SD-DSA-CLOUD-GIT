// 4. Build a simple calculator using switch — take two numbers and an operator (+, -, *, /) as input

#include <iostream>
using namespace std;

int main()
{
        double a, b;
        char opr;

        cout << "Enter your Arguments here (num1 , operator (+,-,*,/), num2) : ";
        cin >> a >> opr >> b;

        switch (opr)
        {
        case '+':
                cout << a + b;
                break;
        case '-':
                cout << a - b;
                break;
        case '*':
                cout << a * b;
                break;
        case '/':
                if (b == 0)
                {
                        cout << "Error: division by zero";
                }
                else
                {
                        cout << a / b;
                }
                break;

        default:
                cout << "NaN";
                break;
        }

        return 0;
}