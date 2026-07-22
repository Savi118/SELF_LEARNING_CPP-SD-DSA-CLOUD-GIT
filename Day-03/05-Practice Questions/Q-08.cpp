// 8. Write a function int sumDigits(int n) that reuses your Day 2 digit-sum logic, but as a callable function this time

#include <iostream>
using namespace std;

int sumDigits(int n)
{
        int digit;
        int digitSum = 0;
        while (n > 0)
        {
                digit = n % 10;
                n = n / 10;
                digitSum += digit;
        }
        return digitSum;
}

int main()
{
        int n;
        cout << "Enter any number (atleast 2 digit): ";
        cin >> n;

        int result = sumDigits(n);
        cout << n << " : " << result << endl;
        return 0;
}