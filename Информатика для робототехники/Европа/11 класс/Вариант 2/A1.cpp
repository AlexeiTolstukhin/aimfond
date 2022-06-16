#include <iostream>

using namespace std;

int main() {
    int u, v, x, y;
    cin >> u >> v >> x >> y;
    if (u + v == x + y || u - v == x - y) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
