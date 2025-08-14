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
    int b, s;
    cin >> b >> s;
    vi bsi(b);
    unordered_map<int, int> ssi;
    REP(i, b)
    {
        cin >> bsi[i];
    }
    int size = 0;
    REP(i, s)
    {
        cin >> size;
        ssi[size]++;
    }
    int ctr = 0;
    sort(bsi.begin(),bsi.end());
    REP(i, b)
    {
        if (ssi.find(bsi[i]) != ssi.end() && ssi[bsi[i]] > 0)
        {
            ctr++;
            ssi[bsi[i]]--;
        }
        else if (ssi.find(bsi[i] + 1) != ssi.end() && ssi[bsi[i] + 1] > 0)
        {
            ctr++;
            ssi[bsi[i] + 1]--;
        }
    }
    cout << ctr;
    return 0;
}