#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef vector<lli> vi;

int BinarySearch(lli c, const vi &arr)
{
    int l = 0;
    int r = arr.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == c)
            return mid;
        else if (arr[mid] > c)
        {
            r = mid - 1;
        }
        else if (arr[mid] < c)
        {
            l = mid + 1;
        }
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    lli np, nb, dist;
    cin >> np >> nb;
    vi p((np + 1), 0);
    for (int i = 1; i < np + 1; i++)
    {
        cin >> p[i];
        p[i] += p[i - 1];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> dist;
        cout << BinarySearch(dist, p) << "\n";
    }
    return 0;
}