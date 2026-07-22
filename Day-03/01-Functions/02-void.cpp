// Function with no return value — use void:

#include <iostream>
using namespace std;

void greet(string name)
{
        cout << "Hello, " << name << "!" << endl;
        // No return statement needed when we use void keyword to declare functions.
}

int main()
{
        greet("Savi");
        return 0;
        // Now remember when we use any functions which is any type of data like int we have to use return statement for no error and inside main component always remember to return 0; means no error in this program.
}