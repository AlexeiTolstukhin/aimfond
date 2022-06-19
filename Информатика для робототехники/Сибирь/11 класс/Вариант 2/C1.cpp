#include <iostream>
#include <vector>
#include <tuple>
#include <queue>

#define INF 1e9

using namespace std;

int main() {
    int n, d, v, r;
    cin >> n >> d >> v >> r;
    d--;
    v--;
    vector < vector < tuple < int, int, int>>> adj(n, vector < tuple < int, int, int >> ());
    for (int i = 0; i < r; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        adj[a - 1].push_back({b, c - 1, d});
    }
    priority_queue <pair<int, int>> q;
    vector<int> time(n, INF);
    vector<bool> processed(n, false);
    time[d] = 0;
    q.push({0, 0});
    while (!q.empty()) {
        int s = q.top().second;
        q.pop();
        if (processed[s]) continue;
        processed[s] = true;
        for (auto u: adj[s]) {
            int st, f, ft;
            tie(st, f, ft) = u;
            if (st >= time[s] && time[f] > ft) {
                time[f] = ft;
                q.push({-time[f], f});
            }
        }
    }
    if (time[v] == INF) cout << -1 << endl;
    else cout << time[v] << endl;
    return 0;
}
