#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> & v) {
    int n = v.size();
    int m, p;
    for (int i = 0; i < n; i++) {
        m = v[i];
        p = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < m) {
                m = v[j];
                p = j;
            }
        }
        swap(v[i], v[p]);
    }
}

int main() {
    vector<int> a;
    int t;
    while (cin >> t) {
        a.push_back(t);
    }
    sort(a);
    for (auto x : a) {
        cout << x << " ";
    }
    return 0;
}

