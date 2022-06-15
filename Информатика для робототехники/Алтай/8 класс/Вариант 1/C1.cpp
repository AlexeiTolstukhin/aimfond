#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    string a;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (i < n/2) {
            a.push_back('(');
            a.push_back(s[i]);
        } else if (n % 2 == 1 && i == n/2) {
            a.push_back('(');
            a.push_back(s[i]);
            a.push_back(')');
        } else {
            a.push_back(s[i]);
            a.push_back(')');
        }
    }
    cout << a << endl;
    return 0;
}
