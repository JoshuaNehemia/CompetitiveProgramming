#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> um;

#define F first
#define S second
#define pb push_back
#define trace(...) cerr << "[" << #__VA_ARGS__ << "] = ", debug_out(__VA_ARGS__)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int b, k, r;
    cin >> b >> k;
    r = k - b;
    vector<int> s;
    while (r > 0)
    {
        s.push_back(r % 2);
        r /= 2;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i])
        {
            cout << pow(2, i) << "\n";
        }
    }
    return 0;
}