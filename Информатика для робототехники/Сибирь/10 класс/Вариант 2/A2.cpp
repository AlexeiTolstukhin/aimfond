#include <iostream>
#include <vector>

using namespace std;

void f(int pos, long long sum, int n, int m, vector<int> & cur, vector<int> & res, vector<int> &a) {
    if (pos == m) {
        if (sum == n) {
            if (res.empty() || cur.size() < res.size()) {
                res = cur;
            }
            return;
        }
        return;
    }
    f(pos + 1, sum, n, m, cur, res, a);
    cur.push_back(a[pos]);
    f(pos + 1, sum + a[pos], n, m, cur, res, a);
    cur.push_back(a[pos]);
    f(pos + 1, sum + a[pos] * 2, n, m, cur, res, a);
    cur.pop_back();
    cur.pop_back();
}
int main() {
    int n, m;
    long long s = 0;
    vector<int> cur, res;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        s += a[i] * 2;
    }
    if (s < n) {
        cout << -1 << endl;
        return 0;
    }
    f(0, 0, n, m, cur, res, a);
    if (res.empty()) {
        cout << 0 << endl;
        return 0;
    }
    cout << res.size() << endl;
    for (auto ans : res) cout << ans << " ";
    return 0;
}