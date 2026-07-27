// Backtracking -
// Fibonacci already showed us a function with two recursive calls.
// Backtracking pushes this further: at each step, we try a choice, recurse, then undo the choice and try the next one.
// This "try → recurse → undo" cycle is the entire idea behind backtracking, which we'll use heavily later for problems like permutations, subsets, and pathfinding.

// Simplest possible example — print all subsets of a small set (using "include or exclude" at each step)

#include <iostream>
#include <string>
using namespace std;

void printSubsets(string current, string remaining)
{
        if (remaining.empty())
        {
                cout << "{" << current << "}" << endl;
                return; // Base case: No more character to decide
        }

        char firstChar = remaining[0];
        string restChars = remaining.substr(1);

        // Choice 1 : Include firstChar;
        printSubsets(current + firstChar, restChars);

        // Choice 2 : Exclude firstChar;
        printSubsets(current, restChars);
}

// Trace -

/*
                                                                        first call("", "ab") - if (remaining(ab)) -> false; firstChar = "a" , restChars = "b";
                                                                             |
                                                                ----------------------------
                                                                |                           |
                                                choice 1 (2nd 1st call)             choice 2 (2nd 2nd call)
                                                ("a", "b")                          ("", "b")
                                                if (remaining(b)) -> false          if (remaining(b)) -> false
                                                firstChar = "b"; restChar = "";     firstChar= "b"; restChar = "";
                                                        |                                       |
                                ----------------------------                                   -----------------------------------
                                |                          |                                   |                                 |
                choice 1 (3rd first call)      choice 2 (3rd sec call)             choice 1 (3rd third call)       choice 2 (3rd fourth call)
                ("ab", "")                     ("a", "")                           ("b", "")                       ("", "")
                if (remaining("")) -> true;    if (remaining("")) -> true;         if (remaining("")) -> true;     if (remaining("")) -> true;
                print - {ab}; return            print - {a}; return                 print - {b}; return             print - {}; return


*/
int main()
{
        printSubsets("", "ab");
        return 0;
}

// Each character, the function branches into two paths — one where that character is kept, one where it's dropped — and each path recurses independently until remaining runs out.
// This "branch into multiple choices" pattern, where each recursive call explores one possibility, is the seed of backtracking.
// We're not going deep into backtracking yet (that's Week 3+ territory) — today's goal is just to see that recursion can branch into more than one path per call, not just call itself once.