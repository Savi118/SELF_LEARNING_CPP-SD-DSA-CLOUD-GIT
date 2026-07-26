// 3. Write int sumToN(int n) recursively

#include <iostream>
using namespace std;

int sumToN(int n)
{

        if (n <= 0)
        {
                return 0;
        }

        return n + sumToN(n - 1);
}

int main()
{
        int n = 5;
        cout << sumToN(n) << endl;
        return 0;
}
