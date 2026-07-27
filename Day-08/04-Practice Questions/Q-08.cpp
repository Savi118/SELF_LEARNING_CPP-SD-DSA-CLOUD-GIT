// 8. Write void printPermutations(string current, string remaining) — print all permutations (orderings) of a short string like "abc" (hint: at each step, try each remaining character as the "next" one, not just include/exclude)

#include <iostream>
#include <string>
using namespace std;

void printPermutations(string current, string remaining)
{

        if (remaining.empty())
        {
                cout << current << endl;
        }

        for (int i = 0; i < remaining.length(); i++)
        {
                char firstChar = remaining[i];
                string restChars = remaining.substr(0, i) + remaining.substr(i + 1);
                printPermutations(current + firstChar, restChars);
        }
}

int main()
{
        printPermutations("", "abc");
        return 0;
}