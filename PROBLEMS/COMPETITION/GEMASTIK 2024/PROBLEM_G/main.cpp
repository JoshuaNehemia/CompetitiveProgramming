#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    lli mp = -1;
    lli n = 0;
    cin >> n;
    vi buy(n);
    vi sell(n);
    REP(i, n)
    {
        cin >> buy[i];
    }
    REP(i, n)
    {
        cin >> sell[i];
    }

    lli mini = buy[0];
    lli maxi = -1;

    REP(i, n - 2)
    {
        if(buy[i]<mini){
            mini = buy[i];
            maxi = sell[i+2];
            mp = max(maxi-mini,mp);
        }
        if(sell[i+2]>maxi){
            maxi = sell[i+2];
            mp = max(maxi-mini,mp);
        }
    }

    //----------------------------------------------------------------------
    if (mp <= 0)
    {
        cout << "tidak mungkin";
    }
    else
    {
        cout << mp;
    }
    return 0;
}