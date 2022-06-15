#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c;
    string t;
public:
    Triangle(double n, double m, double o) : a(n), b(m), c(o) {
        type();
    }

    string type() {
        if (t.empty()) {
            if (max(a, max(b, c)) == a) {
                if (b*b + c*c == a*a) t = "прямоугольный";
                else if (b*b + c*c > a*a) t = "остроугольный";
                else t = "тупоугольный";
            } else if (max(a, max(b, c)) == b) {
                if (a*a + c*c == b*b) t = "прямоугольный";
                else if (a*a + c*c > b*b) t = "остроугольный";
                else t = "тупоугольный";
            } else {
                if (b*b + a*a == c*c) t = "прямоугольный";
                else if (b*b + a*a > c*c) t = "остроугольный";
                else t = "тупоугольный";
            }
        }
        return t;
    }

    double S() const {
        double p = (a+b+c) / 2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
};

bool operator == (const Triangle& t1, const Triangle& t2)
{
    return t1.S() == t2.S();
}

bool operator != (const Triangle& t1, const Triangle& t2)
{
    return t1.S() != t2.S();
}

bool operator > (const Triangle& t1, const Triangle& t2)
{
    return t1.S() > t2.S();
}

bool operator < (const Triangle& t1, const Triangle& t2)
{
    return t1.S() < t2.S();
}

class Isosceles : public Triangle {
public:
    Isosceles(int m, int n) : Triangle(m, m, n) {}
};

class Equilateral : public Triangle {
public:
    explicit Equilateral(int m) : Triangle(m, m, m) {}
};

int main() {
    return 0;
}
