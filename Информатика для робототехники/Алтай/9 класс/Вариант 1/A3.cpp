#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> w;
    int maxR = 0, r;
    int count;
    for (int i = 0; i < n; i++) {
        r = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] > r) r = a[i][j];
        }
        if (r > maxR) {
            w.clear();
            w.push_back(i);
            count = 1;
            maxR = r;
        } else if (r == maxR) {
            w.push_back(i);
            count++;
        }
    }
    cout << count << endl;
    for (auto x : w) {
        cout << x << " ";
    }
    return 0;
}
