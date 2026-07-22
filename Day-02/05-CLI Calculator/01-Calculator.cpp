//Week 1's CLI Calculator — minor project 

#include <iostream>
using namespace std;

int main()
{
        double a, b;
        char opr;

        int choice;
        do
        {
                cout << "Enter your Arguments here (num1 , operator (+,-,*,/), num2) : ";
                cin >> a >> opr >> b;

                switch (opr)
                {
                case '+':
                        cout << a + b << endl;
                        break;
                case '-':
                        cout << a - b << endl;
                        break;
                case '*':
                        cout << a * b << endl;
                        break;
                case '/':
                        if (b == 0)
                        {
                                cout << "Error: division by zero" << endl;
                        }
                        else
                        {
                                cout << a / b << endl;
                        }
                        break;

                default:
                        cout << "NaN" << endl;
                        break;
                }

                cout << "Enter 1 to continue, 0 to exit : ";
                cin >> choice;
        } while (choice != 0);

        return 0;
}