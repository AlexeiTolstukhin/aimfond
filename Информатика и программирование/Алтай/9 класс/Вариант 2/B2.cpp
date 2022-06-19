#include <iostream>
#include <vector>

using namespace std;

void dfs(vector <vector<int>> &adj, vector<bool> &visited, int a, vector <vector<int>> &t) {
    if (visited[a]) return;
    visited[a] = true;
    t.back().push_back(a);
    for (auto u: adj[a]) {
        dfs(adj, visited, u, t);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector<int>> a(n, vector<int>(n, 1));
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        a[s - 1][e - 1] = 0;
        a[e - 1][s - 1] = 0;
    }
    vector <vector<int>> adj(n, vector<int>());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || a[i][j] == 0) continue;
            adj[i].push_back(j);
        }
    }
    vector<bool> visited(n, false);
    int count = 0;
    vector <vector<int>> t;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        count++;
        t.emplace_back();
        dfs(adj, visited, i, t);
    }
    if (count > 2) cout << "NO";
    else {
        cout << "YES" << endl;
        for (auto x: t[0]) cout << x + 1 << " ";
    }
    return 0;
}
