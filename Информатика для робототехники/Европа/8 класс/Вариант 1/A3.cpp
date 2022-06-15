#include <iostream>
#include <cmath>

using namespace std;

double S(int n, int a) {
    return (n * a * a) / (4 * tan(M_PI / n));
}

double area(int a, int b, int c) {
    return c * S(b, a);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << area(a, b, c) << endl;
    return 0;
}
