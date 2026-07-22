// 7. Write two overloaded functions called maxValue — one for two ints, one for two doubles

#include <iostream>
using namespace std;

int maxValue(int x, int y)
{
        if (x > y) {
                return x;
        } else {
                return y;
        }
}

double maxValue(double x, double y)
{
        if (x > y) {
                return x;
        } else {
                return y;
        }
}

int main()
{
        cout << maxValue(5, 6) << endl;
        cout << maxValue(5.6, 6.6) << endl;
        return 0;
}