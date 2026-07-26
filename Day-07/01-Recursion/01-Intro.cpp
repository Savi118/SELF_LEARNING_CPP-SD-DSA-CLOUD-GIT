// Recursion -
// A recursive function is one that call itself to solve a smaller version of the same problem, until it reaches a version so small it can answer directly without calling itself again.
// That "small enough to answer directly" case is called the base case - without it, a recursive function calls itself forever (until the program crashes from a stack overflow).

// Every recursive function needs exactly two parts:
// Base case — the condition where the function stops calling itself and just returns an answer
// Recursive case — where the function calls itself with a smaller/simpler version of the input, trusting that call to give the right answer

#include <iostream>
using namespace std;

int countdown(int n)
{
        // Base Case
        if (n <= 0)
        {
                cout << "Liftoff!" << endl;
                return 0;
        }

        cout << n << endl;       // doing something
        return countdown(n - 1); // Recursive case
}

int main()
{
        countdown(5);
        return 0;
}

// The key mental shift: don't try to mentally trace every single call at first— instead, trust the recursive call.
// When you write countdown(n-1), assume it correctly counts down from whatever n-1 is, the same way you'd trust calling any other function you've already written (like sum() or average()) without re-deriving its internals every time you use it.
// This trust is called the recursive leap of faith, and building it is the actual skill — not mentally simulating every call.
