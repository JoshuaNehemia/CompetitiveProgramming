#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int n, d;
    int s = 0;
    cin >> n >> d;
    vi pr(n+1,0);
    for(int i=1;i< n+1;i++)
    {
        cin >> pr[i];
        s += pr[i];
    }
    sort(pr.begin()+1,pr.end());
    reverse(pr.begin()+1,pr.end());
    vi prs(n+1,s);
    for (int i = 1; i < n+1; i++)
    {
        for (int j = i; j < n+1; j += i)
        {
            prs[i] -= pr[j] / 2;
        }
    }
    int ma;
    while(d--){
        cin >> ma
if (ma>n) return s;
        cout << prs[ma] << "\n";
    }


    return 0;
}