#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    a[0][0] = 1;
    int i = 0, j = 0, h = n, v = n;
    while (true) {
        if (h <= 1) break;
        for (int c = 0; c < h; c++) {
            a[i][j] = 1;
            j++;
        }
        j--;
        if (i != 0) h -= 2;
        for (int c = 0; c < v; c++) {
            a[i][j] = 1;
            i++;
        }
        i--;
        v -= 2;
        for (int c = 0; c < h; c++) {
            a[i][j] = 1;
            j--;
        }
        j++;
        h -= 2;
        for (int c = 0; c < v; c++) {
            a[i][j] = 1;
            i--;
        }
        i++;
        v -= 2;
    }
    for (int p = 0; p < n; p++) {
        for (int q = 0; q < n; q++) {
            cout << a[p][q] << " ";
        }
        cout << endl;
    }
    return 0;
}
