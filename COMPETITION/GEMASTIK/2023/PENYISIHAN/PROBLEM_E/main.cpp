#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    vi num(t);
    int prev = 0;
    REP(i, t)
    {
        cin >> num[i];
    }
    num.push_back(INT_MAX);
    sort(num.begin(), num.end());
    for (int i = 1; i < t + 1; i++)
    {
        if ((num[i - 1] + 1) < num[i])
        {
            if (num[prev] != num[i-1])
            {
                cout << num[prev] << "-" << num[i - 1];
            }
            else
            {
                cout << num[i - 1];
            }
            if (i != t)
            {
                cout << ",";
            }
            prev = i;
        }
    }

    return 0;
}