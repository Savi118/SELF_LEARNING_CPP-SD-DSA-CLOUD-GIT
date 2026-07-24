// Reading a full line (including spaces) — the fix to the cin >>

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string fullName;
        cout << "Enter your full name: ";
        getline(cin, fullName);
        cout << "Hello, " << fullName << endl;

        return 0;
}

// if you use cin >> earlier in your program and then getline(cin, ...) right after, the getline will read an empty leftover newline character and appear to "skip."
// add cin.ignore(); right after the last cin >> before calling getline. You'll hit this exact bug today if you're not careful — good to know before it confuses you.