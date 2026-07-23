// Getting array size dynamically (useful so you don't hardcode 5 everywhere)

#include <iostream>
using namespace std;

int main()
{
        int marks[5] = {90, 85, 78, 92, 88};
        int size = sizeof(marks) / sizeof(marks[0]);
        cout << "Array has " << size << " elements" << endl;

        // Now we can use size for array
        for (int i = 0; i < size; i++)
        {
                cout << "marks[" << i << "] = " << marks[i] << endl;
        }

        return 0;
}

// sizeof(marks) gives total bytes used by the whole array;
// sizeof(marks[0]) gives bytes used by one element; dividing gives the element count.
// We'll use this pattern often — it's how C++ arrays "know" their own size.