// 10. Combine several of the above: write a small program where main() just calls functions (isEven, factorial, isPrime) based on a menu choice from the user — this is your first taste of organizing a program into clean, purposeful pieces instead of one long block

#include <iostream>
using namespace std;

bool isEven(int n)
{
        return n % 2 == 0;
}

int factorial(int n)
{

        int result = 1;
        for (int i = 1; i <= n; i++)
        {
                result *= i;
        }
        return result;
}

bool isPrime(int n)
{
        for (int i = 2; i <= n - 1; i++)
        {
                if (n % i == 0)
                {
                        return false;
                        break;
                }
        }
        if (n < 2)
        {
                return false;
        }
        return true;
}

int main()
{
        int n;
        char choice;

        cout << "Enter any number: ";
        cin >> n;
        cout << endl;
        cout << "Enter (1 : Is even or not? / 2 : Is prime or not / 3 : Factorial): ";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
                bool even_result = isEven(n);
                if (even_result)
                {
                        cout << n << " is even." << endl;
                }
                else
                {
                        cout << n << " is not even." << endl;
                }
                break;
        }

        case '2':
        {
                bool prime_result = isPrime(n);
                if (prime_result)
                {
                        cout << n << " is a prime." << endl;
                }
                else
                {
                        cout << n << " is not a prime." << endl;
                }
                break;
        }

        case '3':
        {
                int factorial_result = factorial(n);
                cout << "The factorial of " << n << " is " << factorial_result << "." << endl;
                break;
        }

        default:

                cout << "The choice is invalid" << endl;
                break;
        }

        return 0;
}