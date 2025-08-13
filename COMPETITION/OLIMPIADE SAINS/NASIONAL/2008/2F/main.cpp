#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int b, k;
    cin >> b;
    cin >> k;
    vector<int> s;
    while (b > 0)
    {
        s.push_back(b % k);
        b /= k;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}