// 1. Take a string as input (getline) and print its length

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string fullName;
        cout << "Enter your full name: ";
        getline(cin, fullName);

        cout << fullName.length() << endl;
        return 0;
}