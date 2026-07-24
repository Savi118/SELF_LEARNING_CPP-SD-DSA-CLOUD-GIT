// 7. Check if two strings are anagrams of each other (contain the exact same characters, possibly in different order) — e.g., "listen" and "silent"

#include <iostream>
#include <string>
using namespace std;

bool isAnagrams(string str1, string str2)
{
        if (str1.length() != str2.length())
        {
                return false; // can't be an anagrams is length is different
        }
        int arr[26] = {};
        for (int i = 0; i < str1.length(); i++)
        {
                char c = tolower(static_cast<unsigned char>(str1[i]));
                arr[c - 'a']++;
        }
        for (int i = 0; i < str2.length(); i++)
        {
                char c = tolower(static_cast<unsigned char>(str2[i]));
                arr[c - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
                if (arr[i] != 0)
                {
                        return false;
                }
        }

        return true;
}

int main()
{
        string str1, str2;
        cout << "Enter first word: ";
        cin >> str1;
        cout << "Enter second word: ";
        cin >> str2;

        bool result = isAnagrams(str1, str2);

        if (result)
        {
                cout << str1 << " & " << str2 << " is anagrams." << endl;
        }
        else
        {
                cout << str1 << " & " << str2 << " is not anagrams." << endl;
        }
        return 0;
}