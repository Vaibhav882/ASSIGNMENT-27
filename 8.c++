#include <iostream>
using namespace std;

class Matrix {
    int a[3][3];
public:
    void input() {
        cout << "Enter 3x3 matrix elements:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin >> a[i][j];
    }

    void display() {
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    void operator-() {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                a[i][j] = -a[i][j];
    }
};

int main() {
    Matrix m;
    m.input();
    cout << "Original Matrix:\n";
    m.display();
    -m;
    cout << "Negated Matrix:\n";
    m.display();
    return 0;
}
