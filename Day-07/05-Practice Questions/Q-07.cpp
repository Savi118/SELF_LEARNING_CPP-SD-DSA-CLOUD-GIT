// 7. Write int sumDigitsRecursive(int n) — recursive version of Day 2's digit-sum problem

#include <iostream>
#include <string>
using namespace std;

int sumDigitsRecursive(int n)
{
        if (n <= 0)
        {
                return 0;
        }

        int digit = n % 10;

        return digit + sumDigitsRecursive(n / 10);
}

int main()
{
        int num;
        cout << "Enter number: ";
        cin >> num;

        cout << num << ": " << sumDigitsRecursive(num) << endl;
        return 0;
}