// 10. Trace through factorial(3) entirely by hand on paper first — write out every call and every return value — before running it in code. Then run it and confirm your trace was right.

#include <iostream>
using namespace std;


// Trace of factorial(3) : 3 * (factorial(2)) => 3 * (2 * (factorial(1))) => 3 * (2 * (1 * (factorial(0)))) => 3 * 2 * 1 * 1 = 6.
int factorial(int n)
{
        if (n <= 0)
        {
                return 1;
        }

        return n * factorial(n - 1);
}

int main()
{
        int n = 3;
        cout << n << "!: " << factorial(n) << endl;
        return 0;
}