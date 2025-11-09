#include <iostream>
using namespace std;

class fraction {
    long numerator;
    long denominator;
public:
    fraction(long n=0, long d=1) {
        numerator = n;
        denominator = d;
    }

    friend istream& operator>>(istream &in, fraction &f);
    friend ostream& operator<<(ostream &out, fraction &f);

    // Pre-increment
    fraction operator++() {
        ++numerator;
        ++denominator;
        return *this;
    }

    // Post-increment
    fraction operator++(int) {
        fraction temp = *this;
        numerator++;
        denominator++;
        return temp;
    }
};

istream& operator>>(istream &in, fraction &f) {
    cout << "Enter numerator and denominator: ";
    in >> f.numerator >> f.denominator;
    return in;
}

ostream& operator<<(ostream &out, fraction &f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

int main() {
    fraction f1;
    cin >> f1;
    cout << "Before increment: " << f1 << endl;
    ++f1;
    cout << "After pre-increment: " << f1 << endl;
    f1++;
    cout << "After post-increment: " << f1 << endl;
    return 0;
}
