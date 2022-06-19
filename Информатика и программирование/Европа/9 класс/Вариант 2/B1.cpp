#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define INF 1e9

using namespace std;

int main() {
    int n, s, f;
    cin >> n >> s >> f;
    s--;
    f--;
    vector < vector < pair < int, int>>> adj(n, vector < pair < int, int >> ());
    int t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            if (i == j || t < 0) continue;
            adj[i].push_back({j, t});
        }
    }
    priority_queue <pair<int, int>> q;
    vector<int> distance(n, INF);
    vector<bool> processed(n, false);
    vector<int> prev(n);
    distance[s] = 0;
    q.push({0, s});
    while (!q.empty()) {
        int a = q.top().second;
        q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u: adj[a]) {
            int b = u.first, w = u.second;
            if (distance[a] + w < distance[b]) {
                prev[b] = a;
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }
    }
    if (distance[f] == INF) cout << -1;
    else {
        vector<int> path;
        path.push_back(f + 1);
        int p = prev[f];
        while (p != s) {
            path.push_back(p + 1);
            p = prev[p];
        }
        path.push_back(s + 1);
        reverse(path.begin(), path.end());
        for (auto x: path) {
            cout << x << " ";
        }
    }
    return 0;
}
