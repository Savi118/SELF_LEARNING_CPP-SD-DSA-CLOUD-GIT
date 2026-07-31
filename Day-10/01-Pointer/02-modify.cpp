// Modifying through a pointer

#include <iostream>
using namespace std;

int main()
{
        int x = 12;
        int *ptr = &x;
        *ptr = 20; // changes the value AT the address.

        cout << x << endl; // 20 - x itself changed.
        return 0;
}

// This is actually the exact same underlying mechanism as pass-by-reference from Day 3.
// & in a function parameter (int &x) is C++'s more convenient syntax sugar built on top of this same pointer concept.
// We've been using pointers indirectly this whole time without the raw syntax.

