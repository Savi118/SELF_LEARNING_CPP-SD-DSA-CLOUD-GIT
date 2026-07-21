// 6. Print the sum of digits of a number using a while loop (e.g., 123 → 1+2+3 = 6)

#include <iostream>
using namespace std;

int main()
{
        int n;
        cout << "Enter any number (atleast 2 digit): ";
        cin >> n;
        int digit;
        int digitSum = 0;
        while (n > 0)
        {
                digit = n % 10;
                n = n / 10;
                digitSum += digit;
        }
        cout << digitSum << endl;

        return 0;
}