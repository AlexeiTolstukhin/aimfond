#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> a;
    int n;
    cin >> n;
    string t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
    }
    for (const auto &x: a) {
        cout << x.first << endl;
        if (x.second > 3) {
            for (int i = 0; i < x.second / 3; i++) cout << "5 ";
        } else {
            cout << x.second + 2 << " ";
        }
        cout << endl;
    }
    return 0;
}
