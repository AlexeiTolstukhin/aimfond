#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> a;
    while (cin >> n) {
        a.push_back(n);
    }
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j]) count++;
        }
    }
    cout << count << endl;
    return 0;
}
