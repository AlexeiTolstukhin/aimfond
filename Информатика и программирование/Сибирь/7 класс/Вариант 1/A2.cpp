#include <iostream>

using namespace std;

int main() {
    for (int n = 10000; n < 100000; n++) {
        bool c1 = (n % 10 == (n / 100) % 10 && n % 10 == n / 10000);
        bool c2 = ((n / 10) % 10 == (n / 1000) % 10);
        if ((c1 && !c2) || (!c1 && c2)) cout << n << endl;
    }
    return 0;
}
