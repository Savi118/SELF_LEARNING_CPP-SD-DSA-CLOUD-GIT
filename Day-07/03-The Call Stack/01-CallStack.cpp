// Every time a function calls another function (including itself), the computer pushes a new stack frame onto the call stack — a region of memory tracking "which function is currently running, and what happens when it finishes."
// Each recursive call gets its own separate copy of n — they don't share or overwrite each other.

// factorial(4)  [n=4, waiting for factorial(3)]
//   factorial(3)  [n=3, waiting for factorial(2)]
//     factorial(2)  [n=2, waiting for factorial(1)]
//       factorial(1)  [n=1, returns 1 immediately — base case]

// Once factorial(1) returns, its frame is popped off the stack, and factorial(2) resumes exactly where it left off — now able to compute 2 * 1.
// This continues unwinding until factorial(4) finally returns 24 to main().

// Why the base case is non-negotiable: if you forgot it entirely —

int factorial(int n)
{
        return n * factorial(n - 1); // NO base case — infinite recursion!
}

// This keeps calling itself with smaller and smaller (eventually negative) numbers forever, endlessly pushing new stack frames, until the call stack runs out of memory and your program crashes with a stack overflow.
// This is the single most common recursion bug — always write the base case first, before the recursive case.