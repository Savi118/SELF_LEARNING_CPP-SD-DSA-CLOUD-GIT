// 7. Print the ASCII value of a character using int(char)

// ASCII (American Standard Code for Information Interchange) is a foundational character encoding standard that assigns unique numerical values (from 0 to 127) to letters, digits, punctuation marks, and control characters.

#include <iostream>
using namespace std;

int main() {

        char letter = 'a';

        cout << letter << " : " << int(letter) << endl;
        return 0;
}