// 6. Write a function using pass by reference to swap two numbers (same as the example above — type it yourself from scratch, don't copy-paste, to build real memory of it)

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
        int temp = a;
        a = b;
        b = temp;
}

int main()
{

        int a, b;
        cout << "Enter number: ";
        cin >> a >> b;

        swapNumbers(a, b);
        cout << "a : " << a << ", b : " << b << endl;
        return 0;
}