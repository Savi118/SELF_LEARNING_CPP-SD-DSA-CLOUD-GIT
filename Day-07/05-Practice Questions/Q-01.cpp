// 1. Write int countdown(int n) (the example above) from scratch, without looking, then run it

#include <iostream>
using namespace std;

int countdown(int n)
{
        if (n <= 0)
        {
                cout << "Liftoff" << endl;
                return 0;
        }
        cout << n << endl;
        return countdown(n - 1);
}

int main()
{

        countdown(5);
        return 0;
}