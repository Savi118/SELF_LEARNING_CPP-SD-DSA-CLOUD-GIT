# Problems

1. Word frequency counter
   Take a sentence. Split it into words (reuse Day 5 logic). For each unique word, count how many times it appears, and print each word with its count. (Hint: you'll need to check, for each word, whether you've already counted it — think about how to track "have I seen this before" without a hash map yet, since we haven't covered those. A parallel array of words + counts works fine for now.)

2. Grade report generator
   Take n students' names (array of strings) and their marks (array of ints) as input. Print each student's name, their marks, and their letter grade (reuse Day 2's grading logic as a function). At the end, print the class average and who scored above it.

3. Matrix (2D array) row/column sums
   Declare a 3x3 array of integers, take all 9 values as input using nested loops. Print the sum of each row and the sum of each column. (This is your first taste of 2D arrays — a natural extension of what you already know: an array of arrays.)

- cpp
  |- int matrix[3][3];
  |- for (int i = 0; i < 3; i++) {
  |- for (int j = 0; j < 3; j++) {
  |- cin >> matrix[i][j];
  |- }
  |- }

4. Caesar cipher (basic encryption)
   Take a string and a shift number. Shift every letter forward by that many positions in the alphabet (wrap around from 'z' back to 'a'). E.g., "abc" shifted by 2 → "cde". This combines string looping, char arithmetic, and modulo — a genuinely common early interview problem.

5. Palindrome-check on full sentences (harder than Day 5's version)
   Extend Day 5's palindrome checker to work on a full sentence, ignoring spaces, punctuation, and letter case. E.g., "A man a plan a canal Panama" should be recognized as a palindrome. (Hint: build a "cleaned" version of the string first — only lowercase letters, no spaces/punctuation — then apply your existing two-pointer palindrome logic.)

6. Simple student record system
   Combine everything: take n (number of students), then for each student take name, age, and 3 subject marks (use a 2D array or 3 parallel arrays). Compute each student's average. Print a formatted report, then print the name of the topper (highest average). This is the closest thing to a "mini project" you've built purely from today's review, no new syntax required.
