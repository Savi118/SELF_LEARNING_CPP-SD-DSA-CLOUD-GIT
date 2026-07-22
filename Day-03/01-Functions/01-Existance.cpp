// We've been writing everything inside main() so far. That works for small programs, but real code needs to be broken into reusable, named chunks — both so we don't repeat ourself, and so each piece has a clear single job.

// C++ adds one big requirement : we must declare the type of everything — what the function returns, and what type each parameter is.

#include <iostream>
using namespace std;

// First function I'm going to create
int add(int a, int b)
{
        return a + b;
}

int main()
{
        // Now we can use this functions inside our main program.
        int result = add(5, 3);
        cout << result << endl;

        // Now we can do one more thing which is we can take input and then run the code
        int a, b;
        cout << "Enter numbers (just add space between them) : ";
        cin >> a >> b;

        result = add(a, b);
        cout << result << endl;
        return 0;
}

// In main(), add(5, 3) is the function call — execution jumps into add, runs it, then comes back with the result and then print in the terminal. Same it will do as the input take it to the add function and comeback with the result and print it.
