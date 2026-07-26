// 4. Write int power(int base, int exp) recursively — computes base^exp (hint: base case is exp == 0, which returns 1)

#include <iostream>
using namespace std;

int power(int base, int exp)
{

        if (exp == 0)
        {
                return 1;
        }

        return base * power(base, exp - 1);
}

int main()
{

        int num, exp;
        cout << "Enter number with power: ";
        cin >> num >> exp;

        cout << "The " << exp << " power of " << num << " : " << power(num, exp) << endl;
        return 0;
}