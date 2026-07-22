// C++ reads your file top to bottom, and a function must be known to exist before it's called.
// In C++, if you call a function before it's defined, you get a compile error.

#include <iostream>
using namespace std;

int square(int n);      
// Declaration (Prototype) - this tells compiler that the function is exist but you can define the function work later in this file.

int main()
{
        cout << square(5) << endl;
        return 0;
}

int square(int n)
{
        // Definition - this is what i talked about we declare the function at top then define or what this function do like the actual code can be defined later 
        return n * n;
}

