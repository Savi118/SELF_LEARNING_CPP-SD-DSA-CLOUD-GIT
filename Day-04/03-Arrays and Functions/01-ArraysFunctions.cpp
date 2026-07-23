// Arrays and Functions (this is where pass-by-reference knowledge pays off)
// Here's something important that surprises :arrays are always passed by reference automatically, even without writing &.
// When you pass an array to a function, the function gets access to the original array, not a copy — no exceptions.

#include <iostream>
using namespace std;

void doubleAll(int arr[], int size)
{
        for (int i = 0; i < size; i++)
        {
                arr[i] = arr[i] * 2;
        }
}

int main()
{
        int nums[4] = {1, 2, 3, 4};

        doubleAll(nums, 4);

        for (int i = 0; i < 4; i++)
        {
                cout << nums[i] << " "; // 2 4 6 8 — original array WAS modified
        }
        cout << endl;

        return 0;
}

// Notice the function signature: void doubleAll(int arr[], int size) — you must also pass the size separately, because (unlike a real array in main) once an array reaches a function, it forgets its own length; sizeof won't work correctly inside the function.
// This is a quirky, very C++-specific rule — just accept it as a fact for now, it'll make more sense once we cover pointers.
