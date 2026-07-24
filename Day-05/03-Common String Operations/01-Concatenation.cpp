// Concatenation (+, unlike C-style arrays, this just works):

#include <iostream>
#include <string>
using namespace std;

int main()
{
        string first = "Saksham";
        string last = "Viraj";

        string full = first + " " + last;
        cout << full << endl;
        return 0;
}