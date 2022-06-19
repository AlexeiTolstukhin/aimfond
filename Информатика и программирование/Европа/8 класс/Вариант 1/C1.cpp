#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int> &a1, const pair<int, int> &a2) {
    if (a1.first == a2.first) return a1.second < a2.second;
    return a1.first > a2.first;
}

int main() {
    int n;
    cin >> n;
    vector <pair<int, int>> a(n, {0, 0});
    for (int i = 0; i < n; i++) {
        char s;
        for (int j = 0; j < n; j++) {
            cin >> s;
            if (i == j) continue;
            a[i] = {a[i].first + (int) (s - '0'), i + 1};
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (auto x: a) {
        cout << x.second << endl;
    }
    return 0;
}
