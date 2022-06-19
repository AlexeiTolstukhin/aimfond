#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector<int>> a(n, vector<int>(m));
    int c = 1;
    for (int j = 0; j < m; j += 2) {
        for (int i = 0; i < n; i++) {
            a[i][j] = c;
            c++;
        }
        if (j + 1 >= m) continue;
        for (int i = n - 1; i >= 0; i--) {
            a[i][j + 1] = c;
            c++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
