// What is Pointer - *ptr?
// Every variable lives at some address in memory.
// A pointer is a variable that stores an address instead of a normal value - it's point to where another variable lives.

#include <iostream>
using namespace std;

int main()
{

        int x = 10;
        int *ptr = &x; // ptr now stores the ADDRESS of x

        cout << x << endl;    // 10 -  the value
        cout << &x << endl;   // some address like 0x1cd71ff... - where x lives
        cout << ptr << endl;  // same address as &x - ptr stores that address
        cout << *ptr << endl; // 10 - DEREFERENCING: "give me the value AT this address"
        return 0;
}

// Two Symbols , two different meanings depending upon context:
// - & in front of an existing variable= "gives me its address" (Address of Operator).
// - * in front of a pointer variable= "give me the value stored at this address" (dereference operator).
// - * in a declaration like int *ptr= "this variable is a pointer to an int" (different meaning, same symbol - a genuine C++ quirks to memorize).
 
