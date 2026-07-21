// 8. Check if a number is prime (loop from 2 to n-1, check divisibility)

#include <iostream>
using namespace std;

int main()
{
        int n;
        cout << "Enter any number : ";
        cin >> n;

        bool isPrime = true;
        for (int i = 2; i <= n - 1; i++)
        {
                if (n % i == 0)
                {
                        isPrime = false;
                        break;
                }
        }
        if (n < 2)
        {
                isPrime = false;
        }
        if (isPrime)
        {
                cout << n << " is a prime." << endl;
        }
        else
        {
                cout << n << " is not a prime." << endl;
        }

        return 0;
}