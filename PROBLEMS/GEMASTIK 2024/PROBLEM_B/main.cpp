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
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// Main problem-solving function
void solve()
{
    long long int num, length;
    cin >> num >> length;
    vector<long long int> cut_order(num);
    vector<long long int> cut_result;
    REP(i, num)
    {
        cin >> cut_order[i];
    }
    cut_result.push_back(length);
    REP(i,num){
        int pos = cut_order[i]-1;
        //cout << pos << endl;
        cut_result[pos] /=2;
        cut_result.insert(cut_result.begin()+pos+1,cut_result[pos]);
    }
    REP(i,num){
        cout << cut_result[i] << " ";
    }
}

int main()
{
    fast_io();
    int t = 1;
    // cin >> t; // Uncomment for multiple test cases
    while (t--)
    {
        solve();
    }
    return 0;
}