#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void dfs(int u, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) dfs(v, adj, visited);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(N, false);
    int cars = 0;
    int isolated_count = 0;

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            if (adj[i].size()==0) {
                isolated_count++;
            } else {
                cars++;
            }
        }
    }

    if (isolated_count == 1) {
    } else if (isolated_count > 1) {
        cars++;
    }

    cout << cars << "\n";
    return 0;
}
