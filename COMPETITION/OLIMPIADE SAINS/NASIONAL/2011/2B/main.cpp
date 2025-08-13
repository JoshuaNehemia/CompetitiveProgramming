#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void CreatePascal(vector<vector<int>> &pascal)
{
    pascal[0] = {1};
    pascal[1] = {1, 1};
    for (int i = 2; i < pascal.size(); i++)
    {
        pascal[i].push_back(1);
        for (int j = 1; j < i; j++)
        {
            pascal[i].push_back((pascal[i - 1][j - 1] + pascal[i - 1][j]));
        }
        pascal[i].push_back(1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    vi x(n);
    vi y(n);
    vector<vi> pascal(n + 3);
    CreatePascal(pascal);
    REP(i, n)
    {
        cin >> x[i] >> y[i];
    }
    if (n < 3)
        cout << 0;
    else
    {
        cout << pascal[n][3];
    }
    return 0;
}