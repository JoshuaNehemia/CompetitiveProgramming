// ACCEPTED ANSWERS
#include <bits/stdc++.h>
using namespace std;

// Type Aliases
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Macros
#define F first
#define S second
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// Main problem-solving function
void solve() {
    // Your code here
    int num = 0;
    cin >> num;
    vi height(num);
    REP(i,num){
        cin >> height[i];
    }
    sort(height.begin(),height.end());
    int maximum = -1;
    FOR(i,1,num){
        maximum = max(height[i]-height[i-1],maximum);
    }
    cout << maximum << "\n";
    cout << (height[height.size()-1]-height[0]);
}

int main() {
    fast_io();
    int t = 1;
    // cin >> t; // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}