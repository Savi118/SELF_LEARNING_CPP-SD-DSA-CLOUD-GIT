// 5. Palindrome-check on full sentences (harder than Day 5's version)
//    Extend Day 5's palindrome checker to work on a full sentence, ignoring spaces, punctuation, and letter case. E.g., "A man a plan a canal Panama" should be recognized as a palindrome. (Hint: build a "cleaned" version of the string first — only lowercase letters, no spaces/punctuation — then apply your existing two-pointer palindrome logic.)

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
        string cleaned = "";
        for (char c : str)
        {
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                {
                        char lower_c = tolower(static_cast<unsigned char>(c));
                        cleaned += lower_c;
                }
        }

        int size = cleaned.length();
        bool result = true;
        for (int i = 0; i < size; i++)
        {
                int j = size - 1 - i;
                char left = cleaned[i];
                char right = cleaned[j];
                if (left != right)
                {
                        result = false;
                        break;
                }
        }
        return result;
}

int main()
{
        string text;
        cout << "Enter any word: ";
        getline(cin, text);

        bool result = isPalindrome(text);

        if (result)
        {
                cout << text << " is palindrome." << endl;
        }
        else
        {
                cout << text << " is not palindrome." << endl;
        }
        return 0;
}