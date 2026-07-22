// C++ allows multiple functions with the same name as long as their parameter lists differ (different number or types of parameters). The compiler figures out which one you meant based on what you pass in.

#include <iostream>
using namespace std;

int add(int a, int b)
{
        return a + b;
}

double add(double a, double b)
{
        return a + b;
}

int add(int a, int b, int c)
{
        return a + b + c;
}

int main()
{
        cout << add(2, 3) << endl;     // calls int version → 5
        cout << add(2.5, 3.5) << endl; // calls double version → 6.0
        cout << add(1, 2, 3) << endl;  // calls 3-param version → 6
        return 0;
}

// The compiler picks the correct version by matching the arguments' types/count against each function's signature — this matching happens at compile time, not runtime.