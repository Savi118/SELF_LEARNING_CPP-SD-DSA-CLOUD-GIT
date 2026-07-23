// Common Array Operations (the actual DSA-relevant patterns)

// Finding the maximum/minimum:
#include <iostream>
using namespace std;

int main()
{
        int arr[5] = {23, 67, 12, 89, 45};
        int maxVal = arr[0];

        for (int i = 1; i < 5; i++)
        {
                if (arr[i] > maxVal)
                {
                        maxVal = arr[i];
                }
        }

        cout << "Max: " << maxVal << endl;

        // Same you can do for minimum

        int minVal = arr[0];
        for (int i = 1; i < 5; i++)
        {
                if (arr[i] < minVal)
                {
                        minVal = arr[i];
                }
        }

        cout << "Min: " << minVal << endl;
}
