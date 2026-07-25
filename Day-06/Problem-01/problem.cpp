// 1. Word frequency counter
// Take a sentence. Split it into words (reuse Day 5 logic). For each unique word, count how many times it appears, and print each word with its count. (Hint: you'll need to check, for each word, whether you've already counted it — think about how to track "have I seen this before" without a hash map yet, since we haven't covered those. A parallel array of words + counts works fine for now.)

#include <iostream>
#include <string>
using namespace std;

int wordIndexSearch(string arr[], int size, string target)
{
        int foundIndex = -1;
        for (int i = 0; i < size; i++)
        {
                if (target == arr[i])
                {
                        foundIndex = i;
                        break;
                }
        }

        return foundIndex;
}

void wordSearch(string words[], int count[], string target, int &uniqueCount)
{

        int foundIndex = wordIndexSearch(words, uniqueCount, target);

        if (foundIndex != -1)
        {
                count[foundIndex]++;
        }
        else
        {
                words[uniqueCount] = target;
                count[uniqueCount] = 1;
                uniqueCount++;
        }
}
void frequencyCounter(string str)
{
        string currentWord = "";
        string words[100];
        int wordCount[100];
        int uniqueCount = 0;

        for (char c : str)
        {
                if (c == ' ')
                {
                        if (currentWord != "")
                        {
                                wordSearch(words, wordCount, currentWord, uniqueCount);
                                currentWord = "";
                        }
                }
                else
                {
                        currentWord += c;
                }
        }

        if (currentWord != "")
        {

                wordSearch(words, wordCount, currentWord, uniqueCount);
                currentWord = "";
        }

        for (int i = 0; i < uniqueCount; i++)
        {
                cout << words[i] << ": " << wordCount[i] << endl;
        }
}

int main()
{
        string texts;
        cout << "Enter sentence: ";
        getline(cin, texts);

        frequencyCounter(texts);
        return 0;
}