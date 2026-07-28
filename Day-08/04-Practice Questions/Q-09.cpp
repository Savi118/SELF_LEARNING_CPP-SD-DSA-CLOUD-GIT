// 9. Write a recursive function int gcd(int a, int b) using the Euclidean algorithm (hint: gcd(a, b) = gcd(b, a % b), base case is b == 0, return a)

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
        if (b == 0)
        {
                return a;
        }

        return gcd(b, a % b);
}

int main()
{

        cout << gcd(4, 5);
        return 0;
}