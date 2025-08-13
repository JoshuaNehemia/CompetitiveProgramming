#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

vector<vs> a = {{"DA", "DD", "AC", "BC"}, {"DB", "AB", "CC", "CD"}, {"DC", "BA", "AD", "AA"}, {"CA", "BB", "CB", "BD"}};
vector<vs> b = {{"CB", "AA", "DD", "DB"}, {"CC", "DC", "CA", "DA"}, {"BA", "AD", "AC", "BC"}, {"BB", "CD", "AB", "BD"}};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    string s = "";
    cin >> s;
    string r = "", c = "";
    for (int i = 0; i < s.length(); i += 2)
    {
        c = a[s[i] - 'A'][s[i + 1] - 'A'];
        r = r + b[c[0] - 'A'][c[1] - 'A'];
    }
    cout << r;
    return 0;
}