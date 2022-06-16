#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = (n / 10) % 10, b = (n / 1000) % 10, c = n / 100000;
    int s = a + b + c;
    int d = 2 * max(a, max(b, c)) - s;
    cout << s * d << endl;
    return 0;
}
