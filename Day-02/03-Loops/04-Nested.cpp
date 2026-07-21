// Nested loops — a loop inside a loop, essential for grids/patterns/2D problems in DSA.

#include <iostream>
using namespace std;

int main()
{
        for (int i = 1; i <= 3; i++)
        {
                for (int j = 1; j <= 3; j++)
                {
                        cout << i * j << " ";
                }
                cout << endl;
        }

        return 0;
}