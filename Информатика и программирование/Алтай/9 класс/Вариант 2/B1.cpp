#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n, m, s, e;
    cin >> n >> m >> s >> e;
    s--;
    e--;
    vector <vector<double>> adj(n, vector<double>(n));
    for (int i = 0; i < m; i++) {
        int si, ei;
        double pi;
        cin >> si >> ei >> pi;
        si--;
        ei--;
        pi = 1 - pi / 100;
        adj[si][ei] = pi;
        adj[ei][si] = pi;
    }
    vector <vector<double>> chance(n, vector<double>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) chance[i][j] = 0;
            else if (adj[i][j]) chance[i][j] = adj[i][j];
            else chance[i][j] = 0;
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                chance[i][j] = max(chance[i][j], chance[i][k] * chance[k][j]);
            }
        }
    }
    cout << 1 - chance[s][e];
    return 0;
}
