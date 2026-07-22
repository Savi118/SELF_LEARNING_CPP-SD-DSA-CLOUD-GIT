// For small single-file programs, the simpler habit is: just define your functions above main(), so you never need a separate declaration line. You'll only need forward declarations later in bigger multi-file projects.

#include <iostream>
using namespace std;

int square(int n) {      // defined BEFORE main — no separate declaration needed
    return n * n;
}

int main() {
    cout << square(5) << endl;
    return 0;
}