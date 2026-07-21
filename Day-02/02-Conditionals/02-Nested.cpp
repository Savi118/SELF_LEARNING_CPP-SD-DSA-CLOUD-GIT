// Nested Conditional means the condition inside a condition.

#include <iostream>
using namespace std;

int main()
{
        int age;
        bool hasLicense;

        cout << "Enter age : ";
        cin >> age;
        cout << "Do you have a license? (1 = Yes , 0 = No) : ";
        cin >> hasLicense;

        if (age >= 18)
        {
                if (hasLicense)
                {
                        cout << "You can drive" << endl;
                }
                else
                {
                        cout << "You're old enough, but need a license" << endl;
                }
        }
        else
        {
                cout << "Too young to drive." << endl;
        }

        return 0;
}