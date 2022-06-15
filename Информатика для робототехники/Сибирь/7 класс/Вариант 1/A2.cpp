#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int s = n * (100 * a + b);
    cout << s / 100 << " " << s % 100 << endl;
    return 0;
}
