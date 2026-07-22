// 1. Write a function bool isEven(int n) that returns whether a number is even

#include <iostream>
using namespace std;

bool isEven(int n)
{
        return n % 2 == 0;
}

int main()
{
        int num;
        cout << "Enter a number: ";
        cin >> num;

        bool result = isEven(num);
        if (result)
        {
                cout << num << " is even." << endl;
        }
        else
        {
                cout << num << " is not even." << endl;
        }
        return 0;
}