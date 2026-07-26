// Factorial of Recursion -

#include <iostream>
using namespace std;

int factorial(int n)
{
        if (n <= 1) // Base case - 0! and 1! are both 1.
        {
                return 1;
        }

        return n * factorial(n - 1); // Recursive Case
}

int main()
{
        int n;
        cout << "Find the factorial of: ";
        cin >> n;

        cout << "The factorial of " << n << " is " << factorial(n) << endl;
        return 0;
}

// Each call waits for the call below it to finish before it can complete its own multiplication.