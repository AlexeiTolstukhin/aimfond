#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n;
    map<int, vector<string>> c;
    for (int i = 0; i < n; i++) {
        cin >> t >> s;
        if (c.find(t) == c.end()) c[t] = vector<string>();
        c[t].push_back(s);
    }
    for (const auto &i: c) {
        for (const auto &j: i.second) {
            cout << i.first << " " << j << endl;
        }
    }
    return 0;
}
