// We will use factorial example for showing difference between iteration and recursion.

// factorial by iteration -

#include <iostream>
using namespace std;

int factorial(int n)
{
        int result = 1;
        for (int i = 1; i <= n; i++)
        {
                result *= i;
        }
        return result;
}

int main()
{
        int n;
        cout << "Find the factorial of: ";
        cin >> n;

        cout << "The factorial of " << n << " is " << factorial(n) << endl;
        return 0;
}