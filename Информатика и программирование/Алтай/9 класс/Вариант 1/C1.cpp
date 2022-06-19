#include <iostream>

using namespace std;

class Fraction {
private:
    int a, b;
public:
    Fraction(int n, int m) : a(n), b(m) {};

    friend Fraction operator+(const Fraction &f1, const Fraction &f2);

    friend Fraction operator-(const Fraction &f1, const Fraction &f2);

    friend Fraction operator*(const Fraction &f1, const Fraction &f2);

    friend Fraction operator/(const Fraction &f1, const Fraction &f2);

    friend ostream &operator<<(ostream &out, const Fraction &f);
};

Fraction operator+(const Fraction &f1, const Fraction &f2) {
    return {f1.a * f2.b + f2.a * f1.b, f1.b * f2.b};
}

Fraction operator-(const Fraction &f1, const Fraction &f2) {
    return {f1.a * f2.b - f2.a * f1.b, f1.b * f2.b};
}

Fraction operator*(const Fraction &f1, const Fraction &f2) {
    return {f1.a * f2.a, f1.b * f2.b};
}

Fraction operator/(const Fraction &f1, const Fraction &f2) {
    return {f1.a * f2.b, f1.b * f2.a};
}

ostream &operator<<(ostream &out, const Fraction &f) {
    out << f.a << '/' << f.b;
    return out;
}

int main() {
    return 0;
}
