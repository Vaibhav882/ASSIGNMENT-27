#include <iostream>
using namespace std;

class Numbers {
    int x, y, z;
public:
    void setData(int a, int b, int c) { x = a; y = b; z = c; }
    void showData() { cout << x << " " << y << " " << z << endl; }

    void operator-() { // Unary minus
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Numbers n;
    n.setData(3, -4, 5);
    -n;
    n.showData();
    return 0;
}
