#include <bits/stdc++.h>
using namespace std;

string N;
set<long long> results;

void dfs(int pos, long long current, long long term, char lastOp) {
    if (pos == N.size()) {
        if (lastOp == '+') current += term;
        else if (lastOp == '-') current -= term;
        results.insert(current);
        return;
    }

    long long digit = N[pos] - '0';

    long long newTerm = term * 10 + digit;
    dfs(pos + 1, current, newTerm, lastOp);

    if (lastOp == '+') dfs(pos + 1, current + term, digit, '+');
    else if (lastOp == '-') dfs(pos + 1, current - term, digit, '+');

    if (lastOp == '+') dfs(pos + 1, current + term, digit, '-');
    else if (lastOp == '-') dfs(pos + 1, current - term, digit, '-');
}

int main() {
    cin >> N;
    long long firstDigit = N[0] - '0';
    dfs(1, 0, firstDigit, '+');
    cout << results.size() << "\n";
    return 0;
}
