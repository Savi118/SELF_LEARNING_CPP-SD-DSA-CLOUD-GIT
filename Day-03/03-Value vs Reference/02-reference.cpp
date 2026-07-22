// Pass by reference — use '&' in the parameter, and the function operates on the original variable itself, not a copy.

#include <iostream>
using namespace std;

void addTen(int &x) // note that & here
{
        x = x + 10;
        cout << "Inside function: " << x << endl;
}

int main()
{
        int num = 5;
        addTen(num);
        cout << "Outside function: " << num << endl; // Now it gives 15.
        return 0;
}

// Output will be :
// Inside function: 15
// Outside function: 15

// The & means "x isn't a new variable — it's another name for whatever variable was passed in." Changes inside the function are changes to the real thing.
// Now adding & means you pass the reference not the value that makes the code to change the num to add ten inside it will not create any other x storage.

// When to use which:
// Pass by value when you just need to read a value and don't want the function accidentally modifying the caller's data (safer default).
// Pass by reference when you specifically want the function to modify the original (like a swap function), or when passing something large (like a big string/array) where copying it every call would be wasteful.
