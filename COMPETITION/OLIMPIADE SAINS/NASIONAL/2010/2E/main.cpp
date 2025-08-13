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

long long GCD(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
long long LCM(long long a, long long b) {
    return (a / GCD(a, b)) * b; // safer to divide first to avoid overflow
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t = 1;
    cin >> t;
    vi dat(t);
    REP(i,t){
        cin >> dat[i];
    }
    sort(dat.begin(),dat.end());
    int lcm = dat[0];
    for(int i=0;i<t;i++){
        lcm = LCM(lcm,dat[i]);
    }
    cout << lcm;
    return 0;
}