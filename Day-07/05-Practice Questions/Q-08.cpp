// 8. Write int reverseNumberRecursive(int n) — trickier: think about what state needs to be carried between calls (hint: you may need a helper function with extra parameters, since the "reversed so far" value needs to persist across calls)

#include <iostream>
#include <string>
using namespace std;

int reverseHelper(int n, int rev)
{
        if (n <= 0)
        {
                return rev;
        }

        int digit = n % 10;
        int newRev = (rev * 10) + digit;

        return reverseHelper(n / 10, newRev);
}

int reverseNumberRecursive(int n)
{
        return reverseHelper(n, 0);
}

int main()
{
        int num;
        cout << "Enter num: ";
        cin >> num;

        cout << "The reverse of " << num << ": " << reverseNumberRecursive(num) << endl;
        return 0;
}