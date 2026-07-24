// <cctype> gives you functions to classify individual characters — very useful for string-processing problems (validating input, counting vowels, etc.).

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
        char c = 'A';
        cout << isalpha(c) << endl;       // 1 — is it a letter?
        cout << isdigit(c) << endl;       // 0 — is it a digit?
        cout << isupper(c) << endl;       // 1 — is it uppercase?
        cout << (char)tolower(c) << endl; // 'a' — convert to lowercase
        return 0;
}
