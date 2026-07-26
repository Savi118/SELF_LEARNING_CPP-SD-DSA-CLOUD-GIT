1. Write int countdown(int n) (the example above) from scratch, without looking, then run it
2. Write int factorial(int n) recursively — compare its output against your Day 3 iterative version for the same input to confirm they match
3. Write int sumToN(int n) recursively
4. Write int power(int base, int exp) recursively — computes base^exp (hint: base case is exp == 0, which returns 1)
5. Write int fibonacci(int n) recursively — the nth Fibonacci number, where fib(0)=0, fib(1)=1, and fib(n) = fib(n-1) + fib(n-2) for anything beyond that (this has two recursive calls, not one — think carefully about the base cases, there are two of them here)
6. Write bool isPalindromeRecursive(string s, int left, int right) — reimplement your palindrome checker using recursion instead of a loop (base case: left >= right returns true; recursive case: check s[left] == s[right], then recurse inward)
7. Write int sumDigitsRecursive(int n) — recursive version of Day 2's digit-sum problem
8. Write int reverseNumberRecursive(int n) — trickier: think about what state needs to be carried between calls (hint: you may need a helper function with extra parameters, since the "reversed so far" value needs to persist across calls)
9. Write void printNumbers(int n) that prints 1 to n in order using recursion (notice: this requires printing after the recursive call, not before — think about why)
10. Trace through factorial(3) entirely by hand on paper first — write out every call and every return value — before running it in code. Then run it and confirm your trace was right.
