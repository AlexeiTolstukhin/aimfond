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
    for (int i = 1; i < v.size(); i++) {
        for (int j = i; j > 0; j--) {
            if (v[j - 1].size() > v[j].size()) break;
            else if (v[j - 1].size() == v[j].size() && v[j - 1] > v[j]) break;
            swap(v[j - 1], v[j]);
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
