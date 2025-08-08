// Depth First Search (DFS) Traversal for undirected graphs with adjacentcy matrix
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

void Debug1DVector(vi vec)
{
    REP(i, vec.size())
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void Debug2DVector(vector<vi> vec)
{

    cout << "  ";
    REP(i, vec.size())
    {
        cout << i + 1 << " ";
    }
    cout << "\n";
    REP(i, vec.size())
    {
        cout << i + 1 << " ";
        REP(j, vec[i].size())
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int Visit(vector<vi> matrix, vi &pre, vi &post, int current_node, int counter)
{
    pre[current_node] = counter;
    counter++;
    int size = matrix.size();
    REP(i, size)
    {
        if (matrix[current_node][i] == 1 && pre[i] == -1)
        {
            counter = Visit(matrix, pre, post, i, counter);
        }
    }
    post[current_node] = counter;
    counter++;
    return counter;
}

void DFS(vector<vi> matrix, vi &pre, vi &post)
{
    int size = matrix.size();
    int counter = 1;
    REP(i, size)
    {
        if (post[i] == -1)
        {
            counter = Visit(matrix, pre, post, i, counter);
        }
    }
}

void solve()
{
    int node, edge;
    cin >> node >> edge;
    vector<vi> matrix(node, vi(node, 0));
    vi pre(node, -1);
    vi post(node, -1);
    REP(i, edge)
    {
        int a, b;
        cin >> a >> b;
        matrix[a - 1][b - 1] = 1;
        matrix[b - 1][a - 1] = 1;
    }
    Debug2DVector(matrix);
    DFS(matrix, pre, post);
    Debug1DVector(pre);
    Debug1DVector(post);
}

int main()
{
    fast_io();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}