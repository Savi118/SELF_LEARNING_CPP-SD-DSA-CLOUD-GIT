// 4. Rewrite Day 2 drill #8 (prime check) as a function bool isPrime(int n), then call it from main()

#include <iostream>
using namespace std;

bool isPrime(int n)
{
        for (int i = 2; i <= n - 1; i++)
        {
                if (n % i == 0)
                {
                        return false;
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
        cout << "Enter any number: ";
        cin >> n;

        bool result = isPrime(n);
        if (result)
        {
                cout << n << " is a prime." << endl;
        }
        else
        {
                cout << n << " is not a prime." << endl;
        }

        return 0;
}