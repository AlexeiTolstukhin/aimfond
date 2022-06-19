#include <iostream>
#include <map>

using namespace std;

bool parent(map <string, string> &t, string a, string b) {
    if (t[b] == a) return true;
    if (t[b].empty()) return false;
    return parent(t, a, t[b]);
}

int main() {
    map <string, string> a;
    int n;
    cin >> n;
    string c, p;
    for (int i = 1; i < n; i++) {
        cin >> c >> p;
        a[c] = p;
    }
    while (cin >> c >> p) {
        if (parent(a, c, p)) cout << 1 << endl;
        else if (parent(a, p, c)) cout << 2 << endl;
        else cout << 0 << endl;
    }
    return 0;
}