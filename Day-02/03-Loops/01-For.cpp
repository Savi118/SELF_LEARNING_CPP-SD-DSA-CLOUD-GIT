// for loop -  Best to use when you know how many times to repeat.

#include <iostream>
using namespace std;

int main()
{
        for (int i = 1; i <= 5; i++)
        {
                cout << i << " ";
        }
        return 0;
}

// Breaking down - for (int i = 1; i <= 5, i++)
// int i = 1 -> runs once, setup the counter.
// i <= 5 -> check before every iteration, loop continues only while this is true.
// i++ -> runs after every iteration, increment the counter. 