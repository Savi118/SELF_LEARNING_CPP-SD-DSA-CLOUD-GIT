// 9. Write void printNumbers(int n) that prints 1 to n in order using recursion (notice: this requires printing after the recursive call, not before — think about why)

#include <iostream>
using namespace std;

void printNumbers(int n)
{
        if (n <= 0)
        {
                return;
        }

        printNumbers(n - 1);
        cout << n << endl;
}

int main()
{

        int num;
        cout << "Enter number: ";
        cin >> num;

        printNumbers(num);
        return 0;
}