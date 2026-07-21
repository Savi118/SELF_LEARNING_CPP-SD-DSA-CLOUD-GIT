// Switch statement is alternative for else if chains, useful when checking one variable against many exact values.
// Breaks - after each case break is critical, without it , execution "falls through" into next case automatically.

#include <iostream>
using namespace std;

int main()
{
        int day;

        cout << "Enter day number (1-7): ";
        cin >> day;

        switch (day)
        {
        case 1:
                cout << "Monday" << endl;
                break;
        case 2:
                cout << "Tuesday" << endl;
                break;
        case 3:
                cout << "Wednesday" << endl;
                break;
        case 4:
                cout << "Thursday" << endl;
                break;
        case 5:
                cout << "Friday" << endl;
                break;
        case 6:
                cout << "Saturday" << endl;
                break;
        case 7:
                cout << "Sunday" << endl;
                break;
        default:
                cout << "Invalid day" << endl;
                break;
        }

        return 0;
}