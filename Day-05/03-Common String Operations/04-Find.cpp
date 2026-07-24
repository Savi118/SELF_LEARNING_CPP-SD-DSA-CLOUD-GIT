// Find — search for a substring, returns index or 'string::npos' if not found.

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string s = "Hello World";
        int pos = s.find("World");
        if (pos != string::npos)
        {
                cout << "Found at index " << pos << endl;
        }
        else
        {
                cout << "Not found" << endl;
        }

        // string::npos is a special constant meaning "no position" — the string equivalent of your array searches returning -1.
        return 0;
}
