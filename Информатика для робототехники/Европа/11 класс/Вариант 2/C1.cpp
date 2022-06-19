#include <iostream>
#include <vector>
#include <queue>

#define INF 1e9

using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    cin >> m;
    vector < vector < pair < int, int>>> adj(n, vector < pair < int, int >> ());
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back({v, p[u]});
        adj[v].push_back({u, p[v]});
    }
    priority_queue <pair<int, int>> q;
    vector<int> distance(n, INF);
    vector<bool> processed(n, false);
    distance[0] = 0;
    q.push({0, 0});
    while (!q.empty()) {
        int a = q.top().second;
        q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u: adj[a]) {
            int b = u.first, w = u.second;
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }
    }
    if (distance[n - 1] == INF) cout << -1;
    else cout << distance[n - 1];
    return 0;
}
