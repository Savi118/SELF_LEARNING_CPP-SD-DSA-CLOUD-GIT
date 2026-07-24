// A string behaves like an array of characters under the hood — you can index into it with [], same as an array.

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string name = "Saksham";

        cout << name[0] << endl; // S
        cout << name[3] << endl; // h

        name[0] = 's';        // modify in place
        cout << name << endl; // saksham... wait, saksham? No — "saksham" — let's check: s-a-k-s-h-a-m -> actually "saksham"

        return 0;
}

// Let's be precise: name = "Saksham" has characters S-a-k-s-h-a-m at indices 0-6.
// Changing name[0] = 's' gives "saksham".
// Same off-by-one caution as arrays applies here: valid indices are 0 to length()-1.