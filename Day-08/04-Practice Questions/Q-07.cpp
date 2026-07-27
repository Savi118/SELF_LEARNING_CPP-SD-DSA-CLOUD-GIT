// 7. Modify the printSubsets example — instead of printing, write int countSubsets(string remaining) that returns the count of subsets without printing each one (hint: you don't even need to track current for just counting)

#include <iostream>
#include <string>
using namespace std;

/*
void printSubsets(string current, string remaining) {
    if (remaining.empty()) {
        cout << "{" << current << "}" << endl;
        return;   // base case: no more characters to decide on
    }

    char firstChar = remaining[0];
    string restChars = remaining.substr(1);

    // Choice 1: INCLUDE firstChar
    printSubsets(current + firstChar, restChars);

    // Choice 2: EXCLUDE firstChar
    printSubsets(current, restChars);
}
*/

int countSubsets(string remaining)
{
        if (remaining.empty())
        {
                return 1;
        }

        string restChar = remaining.substr(1);

        int includeCount = countSubsets(restChar);
        int excludeCount = countSubsets(restChar);

        return includeCount + excludeCount;
}

/*

                                                1st call - ("ab") - if => false; restChar => "b";
                                                |
                                --------------------------------
                                |                              |
                        2nd first call                       2nd 2nd call
                        includeCount("b")                    excludeCount("b")
                        if -> false                          if -> false
                        restChars = "";                      restChars = "";
                            |                                   |
               --------------------                          -----------------------------
               |                  |                          |                           |
        3rd first call       3rd second call            3rd third call                3rd fourth call
        includeCount("")    excludeCount("")            includeCount("")              excludeCount("")
        if -> true; 1       if -> true; 1               if -> true; 1                 if -> true; 1
               |                  |                          |                           |
               --------------------                          -----------------------------
                            |                                   |
                        2nd first call                       2nd 2nd call
                        return 1 + 1;                        return 1 + 1;
                                |                              |
                                --------------------------------
                                                |
                                                1st call
                                                return 2 + 2 => 4;
*/

int main()
{
        cout << countSubsets("ab") << endl;
        return 0;
}