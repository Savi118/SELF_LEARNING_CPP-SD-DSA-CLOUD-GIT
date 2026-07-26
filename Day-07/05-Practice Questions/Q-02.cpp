// 2. Write int factorial(int n) recursively — compare its output against your Day 3 iterative version for the same input to confirm they match

#include <iostream>
using namespace std;

int factorialRecursive(int n)
{
        if (n <= 0)
        {
                return 1;
        }

        return n * factorialRecursive(n - 1);
}

int factorialIterative(int n)
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
        int n = 5;
        cout << "Recursive: " << factorialRecursive(n) << endl;
        cout << "Iterative: " << factorialIterative(n) << endl;
        return 0;
}