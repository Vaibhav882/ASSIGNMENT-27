#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    friend istream& operator>>(istream &in, Time &t);
    friend ostream& operator<<(ostream &out, Time &t);
    bool operator==(Time t) {
        return (h == t.h && m == t.m && s == t.s);
    }
};

istream& operator>>(istream &in, Time &t) {
    cout << "Enter time (hr min sec): ";
    in >> t.h >> t.m >> t.s;
    return in;
}

ostream& operator<<(ostream &out, Time &t) {
    out << t.h << " hr " << t.m << " min " << t.s << " sec";
    return out;
}

int main() {
    Time t1, t2;
    cin >> t1 >> t2;
    cout << "Time 1: " << t1 << endl;
    cout << "Time 2: " << t2 << endl;
    if (t1 == t2)
        cout << "Times are same." << endl;
    else
        cout << "Times are different." << endl;
    return 0;
}
