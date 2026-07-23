// Common Array Operations (the actual DSA-relevant patterns)

// Linear search (find if a value exists, and where):
#include <iostream>
using namespace std;

int main()
{
        int arr[5] = {23, 67, 12, 89, 45};
        int target = 89;     // We have to search for this inside arr[5]
        int foundIndex = -1; // We just initialize the Index No

        for (int i = 0; i < 5; i++)
        {
                if (arr[i] == target) // This will check for each index if any index value matched.
                {
                        foundIndex = i; // It will update the foundIndex with that matched index.
                        break;          // After update it will break if not found it will continue till the last iteration.
                }
        }

        if (foundIndex != -1) // If foundIndex updated then it will did the code says if not found then else
        {
                cout << "Found at index " << foundIndex << endl;
        }
        else
        {
                cout << "Not found" << endl;
        }

        return 0;
}

// This exact pattern — loop, compare, track result, break on success — is the backbone of dozens of DSA problems.