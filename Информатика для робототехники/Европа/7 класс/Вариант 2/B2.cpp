#include <iostream>

using namespace std;

int main() {
    string s;
    int i, j;
    cin >> s >> i >> j;
    i--;
    j--;
    string a;
    for (int p = 0; p < s.size(); p++) {
        if (p < i || p > j) {
            a.push_back(s[p]);
        } else {
            a.push_back(s[j+i-p]);
        }
    }
    cout << a << endl;
    return 0;
}
