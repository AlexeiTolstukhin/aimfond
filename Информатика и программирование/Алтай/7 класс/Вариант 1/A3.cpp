#include <iostream>

using namespace std;

int s(int n) {
    int t = n;
    int s = 0;
    while (t > 0) {
        s += t % 10;
        t /= 10;
    }
    return s;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = s(a);
    int s2 = s(b);
    int s3 = s(c);
    int m = min(s1, min(s2, s3));
    if (s1 == m) cout << a;
    else if (s2 == m) cout << b;
    else cout << c;
    return 0;
}
