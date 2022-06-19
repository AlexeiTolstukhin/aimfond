#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    int t = 1;
    while (t != 0) {
        cin >> t;
        a.push_back(t);
    }
    int count = 0;
    for (int i = 1; i < a.size() - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
