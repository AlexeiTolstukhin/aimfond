#include <iostream>
#include <vector>
#include <queue>

#define INF 1e9

using namespace std;

vector<int> path(int i, int j, vector<vector<pair<int, int>>> &adj, int n) {
    vector<int> path;
    vector<int> prev(n);
    priority_queue<pair<int, int>> q;
    vector<int> distance(n, INF);
    vector<bool> processed(n, false);
    distance[i] = 0;
    q.push({0, i});
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
    int p = j;
    path.push_back(p);
    while (p != i) {
        p = prev[p];
        path.push_back(p);
    }
    return path;
}

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> adj(n, vector<pair<int, int>>());
    int t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            if (i == j) continue;
            adj[i].push_back({j, t});
        }
    }
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> p1 = path(a-1, b-1, adj, n);
    vector<int> p2 = path(c-1, d-1, adj, n);
    vector<bool> v1(n, false);
    vector<bool> v2(n, false);
    for (auto x : p1) {
        v1[x] = true;
    }
    for (auto x : p2) {
        v2[x] = true;
    }
    vector<int> r;
    for (int i = 0; i < n; i++) {
        if (v1[i] && v2[i]) r.push_back(i+1);
    }
    for (auto x : r) {
        cout << x << " ";
    }
    return 0;
}

