#include <iostream>

using namespace std;

int main() {
    for (int n = 100; n < 1000; n++) {
        int s = 0;
        int t = n;
        while (t > 0) {
            s += t % 10;
            t /= 10;
        }
        if (n % s == 0) {
            cout << n << endl;
        }
    }
    return 0;
}
