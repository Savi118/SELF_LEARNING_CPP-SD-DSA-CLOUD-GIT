// A Second Classic Example : Sum of 1 to N

#include <iostream>
using namespace std;

int sumToN(int n)
{
        if (n <= 0)
        { // base case sum of nothing is 0.
                return 0;
        }
        return n + sumToN(n - 1);
}

int main()
{

        int n;
        cout << "Enter number: ";
        cin >> n;

        cout << sumToN(n);
        return 0;
}

// Trace sumToN(4): 4 + sumToN(3) → 4 + (3 + sumToN(2)) → 4 + (3 + (2 + sumToN(1))) → 4 + (3 + (2 + (1 + sumToN(0)))) → 4 + 3 + 2 + 1 + 0 = 10.