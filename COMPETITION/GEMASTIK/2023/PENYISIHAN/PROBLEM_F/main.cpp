#include <bits/stdc++.h>
using namespace std;

typedef long long lli;
typedef vector<int> vi;

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

    lli p, n, k;
    cin >> p >> n >> k;

    string prov;
    unordered_map<int, string> mp;
    vi vec(p);
    lli l, s;
    for (int i = 0; i < p; i++)
    {
        cin >> prov;
        s = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> l;
            s += l;
        }
        if (mp.find(s) != mp.end())
        {
            string b = mp[s];
            int com = strcmp(b,prov);
            if(com){
                mp[s] = prov;
            }
            else{
                mp[s] = b;
            }
        }
        else
        {
            mp[s] = prov;
        }
        vec[i] = s;
    }

    sort(vec.begin(), vec.end());
    l = BinarySearch(k, vec);
    return 0;
}