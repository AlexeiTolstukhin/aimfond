#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    int t;
    cin >> t;
    while (t != 0) {
        a.push_back(t);
        cin >> t;
    }
    int maxL = 1, l = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i-1]) {
            l++;
        } else {
            maxL = max(maxL, l);
            l = 1;
        }
    }
    maxL = max(maxL, l);
    cout << maxL << endl;
    return 0;
}
