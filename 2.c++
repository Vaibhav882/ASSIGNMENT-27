#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void setData(int a) { x = a; }
    void showData() { cout << "x = " << x << endl; }

    Number operator++() { // Pre-increment
        Number temp;
        temp.x = ++x;
        return temp;
    }

    Number operator--() { // Pre-decrement
        Number temp;
        temp.x = --x;
        return temp;
    }
};

int main() {
    Number n1, n2;
    n1.setData(10);

    n2 = ++n1;
    n2.showData();

    n2 = --n1;
    n2.showData();

    return 0;
}
