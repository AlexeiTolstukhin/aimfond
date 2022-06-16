#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> & adj, vector<bool> & visited, int s, vector<vector<int>> & c, int i) {
    if (visited[s]) return;
    visited[s] = true;
    c[i].push_back(s+1);
    for (auto u: adj[s]) {
        dfs(adj, visited, u, c, i);
    }
}

int main() {
    int n, t;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            if (t) {
                adj[i].push_back(j);
            }
        }
    }
    vector<bool> visited(n, false);
    vector<vector<int>> c;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        c.push_back(vector<int>());
        dfs(adj, visited, i, c, count);
        count++;
    }
    cout << count << endl;
    for (const auto& v : c) {
        cout << v.size() << endl;
        for (auto s : v) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
