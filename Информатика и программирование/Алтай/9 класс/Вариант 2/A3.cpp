#include <iostream>
#include <map>
#include <vector>

using namespace std;

int childs(map <string, vector<string>> &a, const string &cur) {
    auto curc = *a.find(cur);
    int count = 0;
    for (auto &x: curc.second) {
        count += 1 + childs(a, x);
    }
    return count;
}

int main() {
    map <string, vector<string>> a;
    int n;
    cin >> n;
    string c, p;
    for (int i = 1; i < n; i++) {
        cin >> c >> p;
        if (a.find(p) == a.end()) a[p] = vector<string>();
        if (a.find(c) == a.end()) a[c] = vector<string>();
        a[p].push_back(c);
    }
    for (auto &x: a) cout << x.first << " " << childs(a, x.first) << endl;

    return 0;
}