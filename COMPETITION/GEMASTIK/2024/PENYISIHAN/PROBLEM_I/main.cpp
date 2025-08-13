#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<lli> vi;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    lli n, d;
    lli s = 0;
    cin >> n >> d;
    int a, b;
    vi pr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i];
        s += pr[i];
    }
    sort(pr.rbegin(), pr.rend());

    vi dc(n + 1, s);
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = i; j < n + 1; j += i)
        {
            dc[i] -= pr[j - 1] / 2;
        }
    }

    while (d--)
    {
        cin >> b;
        if (b > n)
        {
            cout << s <<"\n";
        }
        else
        {
            cout << dc[b] << "\n";
        }
    }

    return 0;
}