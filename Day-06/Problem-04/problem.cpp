// 4. Caesar cipher (basic encryption)
//    Take a string and a shift number. Shift every letter forward by that many positions in the alphabet (wrap around from 'z' back to 'a'). E.g., "abc" shifted by 2 → "cde". This combines string looping, char arithmetic, and modulo — a genuinely common early interview problem.

#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int shift)
{
        if (c >= 'a' && c <= 'z')
        {
                int position = c - 'a';
                int newPosition = (position + shift) % 26;
                char newChar = 'a' + newPosition;
                return newChar;
        }
        else if (c >= 'A' && c <= 'Z')
        {
                int position = c - 'A';
                int newPosition = (position + shift) % 26;
                char newChar = 'A' + newPosition;
                return newChar;
        }
        else
        {
                return c;
        }
}

void caesarCipher(string &str, int shift)
{
        for (int i = 0; i < str.length(); i++)
        {
                str[i] = shiftChar(str[i], shift);
        }
}

int main()
{
        string text;
        int shift;
        cout << "Enter text: ";
        getline(cin, text);
        cout << "Enter shift digit you want: ";
        cin >> shift;

        cout << "Before shift: " << text << endl;
        caesarCipher(text, shift);
        cout << "After shift: " << text << endl;

        return 0;
}