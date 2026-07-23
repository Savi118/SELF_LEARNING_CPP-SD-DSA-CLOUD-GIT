// 1. Declare an array of 6 integers, take all 6 as input from the user, then print them all

#include <iostream>
using namespace std;

int main()
{
        int arr[6];

        // To take input we will use loop with cin;

        for (int i = 0; i < 6; i++)
        {
                cout << "Enter [" << i << "]: ";
                cin >> arr[i];
        }

        // Now we will use loop again for printing;

        for (int i = 0; i < 6; i++)
        {
                cout << "arr[" << i << "]: " << arr[i] << endl;
        }

        return 0;
}