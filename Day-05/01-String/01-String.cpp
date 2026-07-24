// We've used string since Day 1, but only for basic input/output.
// In C++, string (from <string>) is actually a full class with built-in functions (called member functions, accessed via '.').

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string name = "Saksham";

        cout << name.length() << endl; // 7 — number of characters
        cout << name.size() << endl;   // 7 — identical to .length(), just an alias

        return 0;
}
