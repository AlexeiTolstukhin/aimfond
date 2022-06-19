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
        cin >> t;
        adj[i].push_back(t - 1);
        adj[t - 1].push_back(i);
    }
    int count = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        count++;
        dfs(adj, visited, i);
    }
    cout << count / 12;
    return 0;
}
