#include <iostream>
#include <vector>

using namespace std;

void dfs(vector <vector<int>> &adj, vector<bool> &visited, int a) {
    if (visited[a]) return;
    visited[a] = true;
    for (auto u: adj[a]) {
        dfs(adj, visited, u);
    }
}

int main() {
    int n, t;
    cin >> n;
    vector <vector<int>> adj(n, vector<int>());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            if (t == 0) continue;
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    vector<bool> visited(n, false);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        count++;
        dfs(adj, visited, i);
    }
    cout << count;
    return 0;
}
