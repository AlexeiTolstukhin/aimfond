#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + b + c;
    int maxn = max(a, max(b, c));
    int minn = min(a, min(b, c));
    int m = s - maxn - minn;
    cout << maxn - m << " " << m - minn << endl;
    return 0;
}
