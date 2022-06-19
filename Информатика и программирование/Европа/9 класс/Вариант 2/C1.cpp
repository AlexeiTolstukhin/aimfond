#include <iostream>

using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    friend Point operator+(const Point &p1, const Point &p2);

    friend Point operator-(const Point &p1, const Point &p2);

    friend Point operator*(const Point &p1, const Point &p2);

    friend bool operator==(const Point &p1, const Point &p2);

    friend ostream &operator<<(ostream &out, const Point &p);
};

Point operator+(const Point &p1, const Point &p2) {
    return {p1.x + p2.x, p1.y + p2.y};
}

Point operator-(const Point &p1, const Point &p2) {
    return {p1.x - p2.x, p1.y - p2.y};
}

Point operator*(const Point &p1, const Point &p2) {
    return {p1.x * p2.x, p1.y * p2.y};
}

bool operator==(const Point &p1, const Point &p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

ostream &operator<<(ostream &out, const Point &p) {
    out << '(' << p.x << ", " << p.y << ')';
    return out;
}

int main() {
    return 0;
}
