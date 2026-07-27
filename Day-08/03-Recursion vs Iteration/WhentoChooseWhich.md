# In depth: We now know both approaches for the same problems (factorial, sum, etc.). Some honest tradeoffs worth knowing:

- Iteration is generally more memory-efficient (no call stack buildup) and often faster for simple linear problems.
- Recursion shines when the problem is naturally defined in terms of smaller versions of itself — trees, graphs, backtracking, divide-and-conquer algorithms (which we'll hit soon: merge sort, quicksort). Trying to write these iteratively is often far more awkward than the recursive version.
- Stack overflow risk: every recursive call uses stack memory. Deep recursion (e.g., factorial(100000)) can crash from stack overflow, where the equivalent loop wouldn't. This is a real, practical limitation — not just theoretical.

We don't need to memorize a rule for when to use which yet — this instinct builds naturally as we see more problems where one approach clearly fits better than the other.
