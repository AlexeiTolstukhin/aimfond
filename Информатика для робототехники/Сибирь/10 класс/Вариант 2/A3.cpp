#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && v[j - 1] > v[j]; j--) {
            swap(v[j - 1], v[j]);
        }
    }
}

int main() {
    vector<int> a;
    int t;
    while (cin >> t) {
        a.push_back(t);
    }
    sort(a);
    for (auto x: a) {
        cout << x << " ";
    }
    return 0;
}

