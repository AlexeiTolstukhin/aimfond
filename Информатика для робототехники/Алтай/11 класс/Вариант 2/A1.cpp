#include <iostream>

using namespace std;

int main() {
    int u, v, x ,y;
    cin >> u >> v >> x >> y;
    if (abs(u-x) <= 1 && abs(v-y) <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
