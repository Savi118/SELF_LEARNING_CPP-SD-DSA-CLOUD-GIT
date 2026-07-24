// 9. Write a function bool startsWith(string s, string prefix) without using any built-in function — compare character by character

#include <iostream>
#include <string>
using namespace std;

bool startsWith(string s, string prefix)
{
        if (prefix.length() > s.length())
        {
                return false;
        }

        for (int i = 0; i < prefix.length(); i++)
        {
                if (s[i] != prefix[i])
                {
                        return false;
                }
        }
        return true;
}

int main()
{
        string sentence, prefix;
        cout << "Enter sentence: ";
        getline(cin, sentence);
        cout << "Enter prefix: ";
        cin >> prefix;

        bool result = startsWith(sentence, prefix);

        if (result)
        {
                cout << "Sentence start with prefix." << endl;
        }
        else
        {
                cout << "Sentence doesn't start with prefix." << endl;
        }

        return 0;
}