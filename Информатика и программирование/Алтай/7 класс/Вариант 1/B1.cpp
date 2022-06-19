#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
    }
    for (const auto & x : a) {
        cout << x.first << " " << double(x.second)/n << endl;
    }
    return 0;
}
