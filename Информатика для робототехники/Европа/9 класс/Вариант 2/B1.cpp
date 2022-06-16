#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    string a;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if ((i == n / 2 && s.size() % 2 != 0) || s[i] != s[n-1-i]) a.push_back(s[i]);
    }
    cout << a;
    return 0;
}
