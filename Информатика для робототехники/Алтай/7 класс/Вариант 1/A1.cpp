#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << (N / 1000) % 10 << " " << (N / 10) % 10 << endl;
    return 0;
}
