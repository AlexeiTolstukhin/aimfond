#include <iostream>
#include <cmath>

using namespace std;

class Quadrangle {
protected:
    double a, b, c, d;
public:
    Quadrangle(double n, double m, double o, double p) : a(n), b(m), c(o), d(p) {}

    friend bool dive(const Quadrangle &q1, const Quadrangle &q2);

    double P() const {
        return a + b + c + d;
    }

    virtual double S() const = 0;
};

bool dive(const Quadrangle &q1, const Quadrangle &q2) {
    return q1.P() > q2.P();
}

bool operator==(const Quadrangle &q1, const Quadrangle &q2) {
    return q1.S() == q2.S();
}

bool operator!=(const Quadrangle &q1, const Quadrangle &q2) {
    return q1.S() != q2.S();
}

bool operator>(const Quadrangle &q1, const Quadrangle &q2) {
    return q1.S() > q2.S();
}

bool operator<(const Quadrangle &q1, const Quadrangle &q2) {
    return q1.S() < q2.S();
}

class Rectangle : public Quadrangle {
public:
    Rectangle(int m, int n) : Quadrangle(m, n, m, n) {}

    double S() const override {
        return a * b;
    }
};

class Square : public Quadrangle {
public:
    explicit Square(int m) : Quadrangle(m, m, m, m) {}

    double S() const override {
        return a * a;
    }
};

int main() {
    return 0;
}
