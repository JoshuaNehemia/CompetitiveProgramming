#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void Debug1DVector(vi vec)
{
    REP(i, vec.size())
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    long long int num, length;
    cin >> num >> length;
    vi cut_order(num);
    vi cut_result(2);
    REP(i, num)
    {
        cin >> cut_order[i];
    }
    cut_result[0] = 0;
    cut_result[1] = length;        
    //Debug1DVector(cut_result);
    REP(i, num)
    {
        int pos = cut_order[i];
        cut_result.insert(cut_result.begin() + pos, (cut_result[pos] + cut_result[pos - 1]) / 2);
        //Debug1DVector(cut_result);
    }
    //cout << "ANSWER: \n";
    REP(i, num+1)
    {
        cout << (cut_result[i + 1] - cut_result[i]) << " ";
    }
}

int main()
{
    fast_io();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}