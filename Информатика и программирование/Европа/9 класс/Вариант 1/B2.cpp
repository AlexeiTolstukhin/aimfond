#include <iostream>
#include <vector>
#include <map>

using namespace std;

void dfs(vector <vector<int>> &adj, vector<bool> &visited, int a) {
    if (visited[a]) return;
    visited[a] = true;
    for (auto u: adj[a]) {
        dfs(adj, visited, u);
    }
}

int solve(vector <vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (visited[i]) continue;
        count++;
        dfs(adj, visited, i);
    }
    return count;
}

int main() {
    int n, m, c = 0;
    cin >> n >> m;
    vector <vector<char>> a(n, vector<char>(m));
    vector <vector<int>> adj;
    vector <vector<int>> coords(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                adj.emplace_back();
                coords[i][j] = c;
                if (i - 1 >= 0 && a[i - 1][j] == '#') {
                    adj[c].push_back(coords[i - 1][j]);
                    adj[coords[i - 1][j]].push_back(c);
                }
                if (j - 1 >= 0 && a[i][j - 1] == '#') {
                    adj[c].push_back(coords[i][j - 1]);
                    adj[coords[i][j - 1]].push_back(c);
                }
                c++;
            }
        }
    }
    cout << solve(adj, c);
    return 0;
}
