#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int t = N * 45;
    if (N % 2 == 0) {
        t += (N / 2) * 5 + (N / 2 - 1) * 15;
    } else {
        t += (N / 2) * 20;
    }
    cout << 9 + t / 60 << " " << t % 60 << endl;
    return 0;
}
