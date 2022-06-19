#include <iostream>
#include <vector>

using namespace std;

void add(vector<int> &v, int n) {
    v.push_back(n);
    for (int i = v.size() - 1; i > 0; i--) {
        if ((v[i] / 10) % 10 > (v[i - 1] / 10) % 10) {
            swap(v[i], v[i - 1]);
        }
    }
}

int main() {
    int n, t;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t < 0) {
            add(a, -t);
        } else {
            add(b, t);
        }
    }
    for (auto x: a) {
        cout << -x << " ";
    }
    for (auto x: b) {
        cout << x << " ";
    }
    return 0;
}
