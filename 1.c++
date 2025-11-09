#include <iostream>
using namespace std;

class Complex {
    int a, b; // a = real, b = imaginary
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    void showData() {
        cout << a << " + " << b << "i" << endl;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }

    Complex operator*(Complex c) {
        Complex temp;
        temp.a = a * c.a - b * c.b;
        temp.b = a * c.b + b * c.a;
        return temp;
    }

    bool operator==(Complex c) {
        return (a == c.a && b == c.b);
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(1, 2);

    c3 = c1 + c2;
    cout << "Addition: "; c3.showData();

    c3 = c1 - c2;
    cout << "Subtraction: "; c3.showData();

    c3 = c1 * c2;
    cout << "Multiplication: "; c3.showData();

    if (c1 == c2)
        cout << "Both are Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}
