// Pass by value (default) — the function gets a copy. Changes inside the function do NOT affect the original variable

#include <iostream>
using namespace std;

void addTen(int x)
{
        x = x + 10;
        cout << "Inside function: " << x << endl;
}

int main()
{
        int num = 5;
        addTen(num);
        cout << "Outside function: " << num << endl;
        return 0;
}

// Output will be :
// Inside function: 15
// Outside function: 5

// num never actually changed — x was a totally separate copy living in its own memory.
// Basically the variable you assign in addTen is different storage where value of num passed and it start that process of work which assign to that function to add ten into that and store it in value of x and inside main component the value of num remain same.