1. Implement bubbleSort from scratch (above), test on {5, 2, 4, 1} and confirm output
2. Implement selectionSort from scratch, test on the same array
3. Implement insertionSort from scratch, test on the same array
4. Add a swap counter to all three (a variable incremented every time a swap happens) — print the total swaps for the same input array across all three algorithms and compare the numbers. Which does the fewest swaps?
5. Add a comparison counter to all three — print total comparisons for the same input. Which does the fewest comparisons?
6. Test all three on an already-sorted array (e.g., {1,2,3,4,5}) with your counters from #4/#5 — which algorithm does noticeably less work on already-sorted input?
7. Test all three on a reverse-sorted array (e.g., {5,4,3,2,1}) — this is usually each algorithm's worst case. Compare counts.
8. Modify bubbleSort to add the early-exit optimization mentioned in 9.2 (track whether any swap happened in a pass; if not, break out of the outer loop early)
9. Write a function void printArray(int arr[], int size) and call it after every pass (not just at the end) in bubble sort, so you can visually watch the array become sorted step by step — this will make the algorithm's behavior click much more concretely than a written trace
10. Sort an array of strings alphabetically using insertion sort (same logic, just compare strings instead of ints — this tests whether you understand the algorithm, not just the specific int code)
