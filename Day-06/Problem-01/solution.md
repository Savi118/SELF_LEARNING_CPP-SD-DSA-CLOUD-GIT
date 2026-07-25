This is the place i will explain how i solve the problem and what i learn from it-

How i solved this by logic -

# FrequencyCounter
1. First i confused in what output i need for this question then it would be simple to write code that's what i learned from it.
2. The output i want or solution needed that 
- word - frequency of word in the sentence.
3. To find this output i need to make a function which prints the output not anything i want in return so simply i choose void function which help me to print the output without returning anything.
4. Now the real part comes now i have to first find how many words are in the sentence then after i can check how many times it repeated. So i already made a function which prints the each word in the sentence i reused the logic here.
5. The word printing logic help me to identify each words inside the sentence by counting space between the words and in the last if space is not available the word goes to currentword in the last if outside of loop.
6. Now i know how many words are there but it hard to check bcoz if i can't store them inside anything how i'm going to check if the word is repeated or not so i made 2 array each of their parallel one will add the word and other handle the count both will be stored at same index so i know which word repeated how many times.
7. And then i use an int uniqueCount which count the number of texts which is unique so i will not add same word again in word array.
8. Then i use an linearSearch method from arrays patterns which help me identifying the index when the word is unique it will just give -1 so i know the word is not repeated if a word is repeated it will give me the index no of the word matched and then i simply use wordcount[index of that repeated]++ as a counter for frequency.
9. After doing this all i make another function for reusable content.
10. Then add a loop which prints all and in the main i just call one function in which uses 2 other reusable functions.

I learn so much from this wish i will use this complexity thinking in the later questions.

# What i initially doing wrong :

1. I used else inside the for loop for adding each words that didnot match each count inside the words array and that totally where i lost the code logic it help me understanding that just copying things from the past lesson won't gonna help me i have to understand what step is needed.
2. At the last moment i forget to reset currentWord each time after checking this make the output - 

Enter sentence: the cat sat on the mat the cat ran
the: 1
thecat: 1
thecatsat: 1
thecatsaton: 1
thecatsatonthe: 1
thecatsatonthemat: 1
thecatsatonthematthe: 1
thecatsatonthematthecat: 1
thecatsatonthematthecatran: 1

so it's a minor mistake but it helps me understanding what wrong i did