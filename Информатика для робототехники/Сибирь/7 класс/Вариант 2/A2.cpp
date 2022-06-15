#include <iostream>

using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int t1 = h1 * 60 * 60 + m1 * 60 + s1;
    int t2 = h2 * 60 * 60 + m2 * 60 + s2;
    cout << t2 - t1 << endl;
    return 0;
}
