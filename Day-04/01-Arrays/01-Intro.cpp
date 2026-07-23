// Every variable you've used so far holds exactly one value.
// An array holds multiple values of the same type, stored back-to-back in memory, accessed by a numeric index starting at 0.
// This is the single most important building block for the rest of our DSA Journey.
// Nearly every data structure we'll learn (stacks, queues, hash tables, even trees under the hood) is either built from arrays or inspired by how arrays behave.

#include <iostream>
using namespace std;

int main()
{
        int marks[5]; // Declares an array of 5 ints - all currently garbage values.

        marks[0] = 90; // By this method we can add values to the place inside array.
        marks[1] = 85; // It's start from index 0, It's the first place of array.
        marks[2] = 78;
        marks[3] = 92;
        marks[4] = 88;

        cout << marks[0] << endl; // Output : 90
        cout << marks[2] << endl; // Output : 78

        return 0;
}

// Indexing starts at 0, not 1. marks[0] is the first element.
// For an array of size 5, valid indices are 0, 1, 2, 3, 4 — there is no marks[5].
// This is the single most common source of bugs for beginners (called an "off-by-one error"), and C++ will not stop you from writing marks[5] — it compiles fine and silently reads/writes memory it shouldn't, causing unpredictable behavior.
// C++ gives you undefined behavior, which is much more dangerous. Burn this into memory now.