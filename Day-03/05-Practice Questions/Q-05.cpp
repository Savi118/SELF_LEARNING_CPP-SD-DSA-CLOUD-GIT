// 5. Write a function using pass by reference that doubles a number in place: void doubleIt(int &n)

#include <iostream>
using namespace std;

void doubleIt(int &n)
{
        n *= 2;
}

int main()
{
        int x;
        cout << "Enter any number: ";
        cin >> x;

        doubleIt(x);
        cout << x << endl;
        return 0;

}