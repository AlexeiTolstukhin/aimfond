#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    set<int> r, l;
    map<int, int> b;
    int n, m;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cin >> m;
        if (n == 1) {
            if (l.count(m) != 0) {
                l.erase(l.find(m));
                b[m]++;
            } else {
                r.insert(m);
            }
        } else {
            if (r.count(m) != 0) {
                r.erase(r.find(m));
                b[m]++;
            } else {
                l.insert(m);
            }
        }
    }
    for (auto x: b) {
        if (x.second > 3) cout << x.first << " ";
    }
    return 0;
}
