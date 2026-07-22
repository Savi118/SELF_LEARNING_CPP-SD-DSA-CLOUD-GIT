// 9. Write a function void printMultiplicationTable(int n) — refactor your Day 2 drill #10 into a proper function

#include <iostream>
using namespace std;

void printMultiplicationTable(int n)
{
        for (int i = 1; i <= 10; i++)
        {
                cout << n << " x " << i << " = " << n * i << endl;
        }
}

int main()
{
        int n;
        cout << "Enter any number : ";
        cin >> n;
        printMultiplicationTable(n);
        return 0;
}