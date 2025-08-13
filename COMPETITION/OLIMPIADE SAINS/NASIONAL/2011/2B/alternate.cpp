#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n,a,b,s=1;
    cin >> n;
    REP(i,n){
        cin >> a >> b;
    }
    if(n<3){
        cout << 0;
    }
    else{
        for(int i=n;i>(n-3);i--){
            s *= i;
            //cout << s<<" ";
        }
        cout << s/6;
    }

    return 0;
}