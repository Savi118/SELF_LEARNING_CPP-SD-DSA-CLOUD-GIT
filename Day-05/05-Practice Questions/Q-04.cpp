// 4. Reverse a string in place, character by character (reuse your array-reverse logic from Day 4 — a string is just an array of chars)

#include <iostream>
#include <string>
using namespace std;

string reverse(string str)
{
        int size = str.length();
        for (int i = 0; i < size / 2; i++)
        {
                int j = size - 1 - i;
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
        }
        return str;
}

int main()
{
        string text;
        cout << "Enter any word: ";
        cin >> text;

        string result = reverse(text);
        cout << text << " : " << result << endl;
        return 0;
}