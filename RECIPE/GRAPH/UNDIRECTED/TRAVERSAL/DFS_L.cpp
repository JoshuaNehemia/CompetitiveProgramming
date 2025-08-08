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
void DebugList(unordered_map<int,vi> vec)
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

int Visit(unordered_map<int,vi> list, vi &pre, vi &post, int current_node, int counter)
{
    //cout<<"Visit Node: " << current_node << "\n";
    pre[current_node] = counter;
    counter++;
    int size = list[current_node].size();
    REP(i, size)
    {
        if (pre[list[current_node][i]] == -1)
        {
            counter = Visit(list, pre, post,list[current_node][i], counter);
        }
    }
    post[current_node] = counter;
    counter++;
    return counter;
}

void DFS(unordered_map<int,vi> list, vi &pre, vi &post)
{
    int size = list.size();
    int counter = 1;
    REP(i, size)
    {
        if (post[i] == -1)
        {
            counter = Visit(list, pre, post, i, counter);
        }
    }
}

void solve()
{
    int node, edge;
    cin >> node >> edge;
    unordered_map<int,vi> list(node);
    vi pre(node, -1);
    vi post(node, -1);
    REP(i, edge)
    {
        int a, b;
        cin >> a >> b;
        list[a-1].push_back(b-1);
        list[b-1].push_back(a-1);
    }
    DFS(list, pre, post);
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