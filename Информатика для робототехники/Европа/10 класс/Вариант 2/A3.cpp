#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j + 1] > v[j]) {
                swap(v[j + 1], v[j]);
            }
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
