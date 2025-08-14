#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> a;

bool SOLVE(int i, int sum) {
    // Base case: all elements considered
    if (i > N) {
        return sum == K;
    }

    // Option 1: take a[i]
    bool option1 = SOLVE(i + 1, sum + a[i]);

    // Option 2: skip a[i]
    bool option2 = SOLVE(i + 1, sum);

    // Return true if either option works
    return option1 || option2;
}

bool SOLVESUBSETSUM() {
    return SOLVE(1, 0); // Start from first element with sum = 0
}

int main() {
    // Example input
    cin >> N >> K;
    a.resize(N + 1); // 1-based indexing
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    if (SOLVESUBSETSUM()) {
        cout << "YES, subset exists\n";
    } else {
        cout << "NO, subset does not exist\n";
    }

    return 0;
}
