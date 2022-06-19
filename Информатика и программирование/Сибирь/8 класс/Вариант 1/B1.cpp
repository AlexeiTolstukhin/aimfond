#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector <vector<bool>> mine(n, vector<bool>(m, false));
    vector <vector<int>> minesC(n, vector<int>(m, 0));
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        mine[x][y] = true;
        for (int p = -1; p < 2; p++) {
            for (int q = -1; q < 2; q++) {
                if (x + p < 0 || x + p >= n || y + q < 0 || y + q >= m || (p == 0 && q == 0)) continue;
                minesC[x + p][y + q]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mine[i][j]) cout << "* ";
            else cout << minesC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
