#include <iostream>
#include <queue>

using namespace std;

class Card {
private:
    string d, s;
public:
    Card(string a, string b) : d(a), s(b) {}

    int getD() const {
        if (d[0] == 'J') return 11;
        if (d[0] == 'Q') return 12;
        if (d[0] == 'K') return 13;
        if (d[0] == 'T') return 14;
        return stoi(d);
    }

    int getS() const {
        if (s == "hearts") return 4;
        if (s == "diamonds") return 3;
        if (s == "peaks") return 2;
        if (s == "clubs") return 1;
        return -1;
    }
};

bool operator>(const Card &c1, const Card &c2) {
    if (c1.getD() == c2.getD()) {
        return (c1.getS() == 1 && c2.getS() == 4) || (c1.getS() > c2.getS());
    }
    return c1.getD() > c2.getD();
}

bool operator<(const Card &c1, const Card &c2) {
    if (c1.getD() == c2.getD()) {
        return (c1.getS() == 4 && c2.getS() == 1) || (c1.getS() < c2.getS());
    }
    return c1.getD() < c2.getD();
}

pair<string, int> game(queue <Card> &v1, queue <Card> &v2, int n = 0) {
    if (v1.empty()) {
        return {"second", n};
    }
    if (v2.empty()) {
        return {"first", n};
    }
    if (n > 1e6) {
        return {"botva", n};
    }
    n++;
    Card c1 = v1.front();
    Card c2 = v2.front();
    v1.pop();
    v2.pop();
    if (c1 > c2) {
        v1.push(c1);
        v1.push(c2);
    } else {
        v2.push(c2);
        v2.push(c1);
    }
    return game(v1, v2, n);
}

int main() {
    Card dQ("Q", "diamonds");
    Card h10("10", "hearts");
    Card pJ("J", "peaks");
    Card p10("10", "peaks");
    queue <Card> p1;
    p1.push(h10);
    p1.push(dQ);
    queue <Card> p2;
    p2.push(p10);
    p2.push(pJ);
    pair<string, int> res = game(p1, p2);
    if (res.first == "botva") cout << res.first;
    cout << res.first << " " << res.second;
    return 0;
}
