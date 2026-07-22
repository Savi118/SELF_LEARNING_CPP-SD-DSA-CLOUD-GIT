// 2. Write a function int factorial(int n) that computes factorial using a loop inside the function

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
        int num;
        cout << "Enter number: ";
        cin >> num;

        int result = factorial(num);
        cout << "The factorial of " << num << " is " << result << "." << endl;
        return 0;
}