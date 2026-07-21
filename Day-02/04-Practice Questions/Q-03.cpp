// 3. Check if a year is a leap year (hint: divisible by 4, but not by 100 unless also by 400)

#include <iostream>
using namespace std;

int main()
{
        int year;
        cout << "Enter a year : ";
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {

                cout << year << " is a leap year.";
        }
        else
        {
                cout << year << " is not a leap year.";
        }

        return 0;
}