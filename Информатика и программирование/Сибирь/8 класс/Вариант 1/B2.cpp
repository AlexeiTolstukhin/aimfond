#include <iostream>
#include <vector>

using namespace std;

bool operator>(const string &a, const string &b) {
    for (int i = 0; i < a.size(); i++) {
        if (tolower(a[i]) > tolower(b[i])) return true;
        else if (tolower(a[i]) < tolower(b[i])) return false;
    }
    return false;
}

bool operator<(const string &a, const string &b) {
    for (int i = 0; i < a.size(); i++) {
        if (tolower(a[i]) > tolower(b[i])) return false;
        else if (tolower(a[i]) < tolower(b[i])) return true;
    }
    return false;
}

void sort(vector <string> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1 - i; j++) {
            if (v[j].size() > v[j + 1].size()) {
                swap(v[j], v[j + 1]);
            } else if (v[j].size() == v[j + 1].size()) {
                if (v[j] > v[j + 1]) {
                    swap(v[j], v[j + 1]);
                }
            }
        }
        for (int j = v.size() - 2 - i; j > 0; j--) {
            if (v[j].size() < v[j - 1].size()) {
                swap(v[j], v[j - 1]);
            } else if (v[j].size() == v[j - 1].size()) {
                if (v[j] < v[j - 1]) {
                    swap(v[j], v[j - 1]);
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector <string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a);
    for (auto x: a) {
        cout << x << " ";
    }
    return 0;
}
