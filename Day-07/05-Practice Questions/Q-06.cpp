// 6. Write bool isPalindromeRecursive(string s, int left, int right) — reimplement your palindrome checker using recursion instead of a loop (base case: left >= right returns true; recursive case: check s[left] == s[right], then recurse inward)

#include <iostream>
#include <string>
using namespace std;

bool isPalindromeRecursive(string s, int left, int right)
{
        if (left >= right)
        {
                return true;
        }

        if (s[left] != s[right])
        {
                return false;
        }

        return isPalindromeRecursive(s, (left + 1), (right - 1));
}

int main()
{
        string text;
        cout << "Enter any word: ";
        cin >> text;

        int start = 0;
        int end = text.length() - 1;

        bool Palindrome = isPalindromeRecursive(text, start, end);
        if (Palindrome)
        {
                cout << text << " is palindrome." << endl;
        }
        else
        {
                cout << text << " is not palindrome." << endl;
        }
        return 0;
}