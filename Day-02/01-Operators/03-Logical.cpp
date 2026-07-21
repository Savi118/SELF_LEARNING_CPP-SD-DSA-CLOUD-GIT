// Logical Operators - && / || / ! /

#include <iostream>
using namespace std;

int main() {
        bool isAdult = true;
        bool hasID = false;

        cout << (isAdult && hasID) << endl;     // AND - (It gives true when both arguments are true.)
        cout << (isAdult || hasID) << endl;     // OR - (It gives true when at least one argument is true.)
        cout << (!isAdult ) << endl;            // NOT - (It flips true or false.)

        return 0;
}
