#include <iostream>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }
    if (0 < a) cout << "---" << endl;
    for (int i = a + 1; i < n; i++) {
        for (int j = 0; j < b; j++) {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }
    if (a + 1 < n) cout << "---" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = b + 1; j < m; j++) {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }
    if (0 < a) cout << "---" << endl;
    for (int i = a + 1; i < n; i++) {
        for (int j = b + 1; j < m; j++) {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }
    if (a + 1 < n) cout << "---" << endl;
    return 0;
}
