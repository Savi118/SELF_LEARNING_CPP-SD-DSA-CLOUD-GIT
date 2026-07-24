// Substring — extract part of a string: s.substr(startIndex, length)

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string s = "Hello World";
        cout << s.substr(0, 5) << endl; // "Hello"
        cout << s.substr(6) << endl;    // "World" — omitting length takes rest of string
        return 0;
}
