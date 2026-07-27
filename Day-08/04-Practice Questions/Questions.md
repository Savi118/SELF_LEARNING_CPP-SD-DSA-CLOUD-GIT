1. Write int sumArray(int arr[], int size, int index) from scratch (the example above), test with a 5-element array
2. Write int maxArray(int arr[], int size, int index) recursively
3. Write bool linearSearchRecursive(int arr[], int size, int index, int target) — recursive version of linear search
4. Write int countOccurrences(int arr[], int size, int index, int target) — recursively count how many times target appears in the array
5. Write void printArrayReverse(int arr[], int size, int index) — print an array's elements back to front using recursion (think about whether you print before or after the recursive call, same reasoning as Day 7 drill #9)
6. Write bool isSorted(int arr[], int size, int index) — recursively check if an array is sorted in ascending order
7. Modify the printSubsets example — instead of printing, write int countSubsets(string remaining) that returns the count of subsets without printing each one (hint: you don't even need to track current for just counting)
8. Write void printPermutations(string current, string remaining) — print all permutations (orderings) of a short string like "abc" (hint: at each step, try each remaining character as the "next" one, not just include/exclude)
9. Write a recursive function int gcd(int a, int b) using the Euclidean algorithm (hint: gcd(a, b) = gcd(b, a % b), base case is b == 0, return a)
10. Write int binarySearchRecursive(int arr[], int low, int high, int target) on a sorted array — return the index of target or -1. (This is a genuinely important one — binary search is one of the most-asked interview algorithms, and doing it recursively first will make the iterative version click faster later.)
