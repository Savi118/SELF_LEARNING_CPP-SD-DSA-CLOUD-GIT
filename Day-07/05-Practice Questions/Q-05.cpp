// 5. Write int fibonacci(int n) recursively — the nth Fibonacci number, where fib(0)=0, fib(1)=1, and fib(n) = fib(n-1) + fib(n-2) for anything beyond that (this has two recursive calls, not one — think carefully about the base cases, there are two of them here)

#include <iostream>
using namespace std;

int fibonacci(int n)
{
        if (n == 0)
        {
                return 0;
        }
        else if (n == 1)
        {
                return 1;
        }

        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

        int num;
        cout << "Enter number: ";
        cin >> num;

        cout << num << " : " << fibonacci(num) << endl;
        return 0;
}