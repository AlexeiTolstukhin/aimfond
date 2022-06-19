#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> a;
    for (auto x: s) {
        if (x == '{' || x == '[' || x == '(') {
            a.push(x);
        } else if (x == '}') {
            if (a.top() != '{') {
                cout << "NO";
                return 0;
            } else {
                a.pop();
            }
        } else if (x == ']') {
            if (a.top() != '[') {
                cout << "NO";
                return 0;
            } else {
                a.pop();
            }
        } else if (x == ')') {
            if (a.top() != '(') {
                cout << "NO";
                return 0;
            } else {
                a.pop();
            }
        }
    }
    if (a.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}
