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
    lli t,a=0;
    cin >> t;
    vi g(t);
    REP(i,t){
        cin >> g[i];
        a+= g[i];
    }
    if(a%t){
        cout << "TIDAK SESUAI";
        return 0;
    }
    a /= t;
    int ctr=0;
    int mini = 0;
    int maxi = 0;
    REP(i,t){
        if(g[i]-a != 0){
            ctr++;
            g.pb(i);
            if((g[i]-a)<(g[mini]-a)){
                mini = i;
            }
            if((g[i]-a)>(g[maxi]-a)){
                maxi = i;
            }
        }
        if(ctr>2){
            cout << "TIDAK SESUAI";
            return 0;
        }
    }
    if(ctr){
        if((g[maxi]+g[mini])== (2*a)){
            cout << (g[maxi]-g[mini])/2 <<" "<< maxi+1<<" " << mini+1;
        }
        else{
            cout << "TIDAK SESUAI";
        }
    }
    else{
        cout << "SESUAI";
    }

    return 0;
}