// Comparison (==, !=, <, > — compares alphabetically/lexicographically)

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string a = "apple";
        string b = "banana";

        cout << (a == b) << endl; // 0
        cout << (a < b) << endl;  // 1 - "apple" comes before "banana" alphabetically
        return 0;
}