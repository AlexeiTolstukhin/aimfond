#include <iostream>
#include <vector>

using namespace std;

class MagicalCreature {
private:
    string name;
public:
    explicit MagicalCreature(string a) : name(a) {}

    string getName() {
        return name;
    }

    virtual int getC1() = 0;

    virtual int getC2() = 0;

    virtual string getType() = 0;
};

class Gnome : public MagicalCreature {
private:
    int age, wisdom;
public:
    Gnome(string a, int n, int m) : MagicalCreature(a), age(n), wisdom(m) {}

    int getC1() override {
        return age;
    }

    int getC2() override {
        return wisdom;
    }

    string getType() override {
        return "gnome";
    }
};

class Ork : public MagicalCreature {
private:
    int force, ugliness;
public:
    Ork(string a, int n, int m) : MagicalCreature(a), force(n), ugliness(m) {}

    int getC1() override {
        return force;
    }

    int getC2() override {
        return ugliness;
    }

    string getType() override {
        return "ork";
    }
};

class Queue {
private:
    vector<MagicalCreature *> q;
public:
    Queue() = default;

    void add(string type, string a, int n, int m) {
        if (type == "Gnome") {
            auto g = new Gnome(a, n, m);
            q.push_back(g);
        } else if (type == "Ork") {
            auto o = new Ork(a, n, m);
            q.push_back(o);
        }
        track();
        sort();
    }

    void sort() {
        bool flag = false;
        for (int i = 0; i < q.size() - 1; i++) {
            if (q[i]->getType() == "gnome" && q[i + 1]->getType() == "gnome") {
                if (q[i]->getC1() < q[i + 1]->getC1()) {
                    swap(q[i], q[i + 1]);
                    flag = true;
                } else if (q[i]->getC1() == q[i + 1]->getC1() && q[i]->getC2() < q[i + 1]->getC2()) {
                    swap(q[i], q[i + 1]);
                    flag = true;
                }
            } else if (q[i]->getType() == "ork" && q[i + 1]->getType() == "ork") {
                if (q[i]->getC1() < q[i + 1]->getC1()) {
                    swap(q[i], q[i + 1]);
                    flag = true;
                } else if (q[i]->getC1() == q[i + 1]->getC1() && q[i]->getC2() > q[i + 1]->getC2()) {
                    swap(q[i], q[i + 1]);
                    flag = true;
                }
            }
        }
        if (flag) sort();
    }

    void track() {
        for (int i = q.size() - 2; i >= 1; i--) {
            if (q[i]->getType() == "ork" && q[i + 1]->getType() == "ork" && q[i - 1]->getType() == "gnome") {
                int count = 0;
                for (int j = i - 1; j >= 0; j--) {
                    if (q[j]->getType() == "ork") break;
                    count++;
                }
                if (count <= 1) {
                    swap(q[i - 1], q[i + 1]);
                    track();
                    return;
                }
            }
        }
        for (int i = q.size() - 3; i >= 1; i--) {
            if (q[i]->getType() == "gnome" && q[i + 1]->getType() == "gnome" && q[i + 2]->getType() == "gnome" && q[i - 1]->getType() == "ork") {
                swap(q[i - 1], q[i + 2]);
                if (i - 2 >= 0 && q[i - 2]->getType() == "ork") {
                    swap(q[i - 2], q[i + 1]);
                }
                track();
                return;
            }
        }
    }

    void invite() {
        if (q.empty()) return;
        q.erase(q.begin());
        if (q.empty()) return;
        q.erase(q.begin());
        track();
        sort();
    }

    void print() {
        for (auto c: q) {
            cout << c->getName() << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue A;
    string s, a;
    int n, m;
    cin >> s;
    while (s != "End") {
        if (s == "Gnome" || s == "Ork") {
            cin >> a >> n >> m;
            A.add(s, a, n, m);
        } else if (s == "Invitation") {
            A.invite();
        } else if (s == "Queue") {
            A.print();
        }
        cin >> s;
    }
    return 0;
}
