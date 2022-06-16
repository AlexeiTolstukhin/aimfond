#include <iostream>

using namespace std;

int main() {
    for (int n = 100; n < 1000; n++) {
        int s = (n / 100) + (n / 10) % 10 + n % 10;
        if (n % s == 0) cout << n << endl;
    }
    return 0;
}
