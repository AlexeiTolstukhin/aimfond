#include <iostream>

using namespace std;

int main() {
    for (int n = 100000; n < 1000000; n++) {
        int a = n / 100000 + (n / 10000) % 10 + (n / 1000) % 10;
        int b = (n / 100) % 10 + (n / 10) % 10 + n % 10;
        if (a == b) cout << n << endl;
    }
    return 0;
}
