#include <iostream>
#include <map>

using namespace std;

int height(map <string, string> &a, const string &cur) {
    auto curp = *a.find(cur);
    if (curp.second == "*") {
        return 0;
    }
    return height(a, curp.second) + 1;
}

int main() {
    map <string, string> a;
    int n;
    cin >> n;
    string c, p;
    for (int i = 1; i < n; i++) {
        cin >> c >> p;
        a[c] = p;
        if (a.find(p) == a.end()) a[p] = "*";
    }

    for (auto &x: a) cout << x.first << " " << height(a, x.first) << endl;

    return 0;
}