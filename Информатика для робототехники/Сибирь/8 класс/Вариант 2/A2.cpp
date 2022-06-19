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
    int maxL = 2, l = 2;
    for (int i = 2; i < a.size(); i++) {
        if ((a[i] > a[i - 1] && a[i - 1] > a[i - 2]) || (a[i] < a[i - 1] && a[i - 1] < a[i - 2])) {
            l++;
        } else {
            maxL = max(maxL, l);
            l = 2;
        }
    }
    maxL = max(maxL, l);
    cout << maxL << endl;
    return 0;
}
