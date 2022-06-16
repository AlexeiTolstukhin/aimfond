#include <iostream>

using namespace std;

int main() {
    for (int n = 100000; n < 1000000; n++) {
        int s1 = n / 100000 + (n / 10000) % 10 + (n / 1000) % 10;
        int s2 = (n / 100) % 10 + (n / 10) % 10 + n % 10;
        if (s1 == s2) cout << n << endl;
    }
    return 0;
}
