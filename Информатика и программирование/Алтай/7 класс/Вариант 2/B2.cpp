#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> r, l, b;
    int n, m;
    while (cin >> n >> m) {
        if (n == 1) {
            if (l.count(m) != 0) {
                l.erase(l.find(m));
                b.insert(m);
            } else {
                r.insert(m);
            }
        } else {
            if (r.count(m) != 0) {
                r.erase(r.find(m));
                b.insert(m);
            } else {
                l.insert(m);
            }
        }
        if (l.size() == r.size() && r.size() == b.size()) break;
    }
    cout << r.size() << endl;
    for (auto x: r) {
        cout << x << " ";
    }
    cout << endl;
    cout << l.size() << endl;
    for (auto x: l) {
        cout << x << " ";
    }
    cout << endl;
    cout << b.size() << endl;
    for (auto x: b) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
