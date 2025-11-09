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

    Matrix operator+(Matrix m) {
        Matrix temp;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        return temp;
    }
};

int main() {
    Matrix m1, m2, m3;
    cout << "Enter Matrix 1:\n";
    m1.input();
    cout << "Enter Matrix 2:\n";
    m2.input();
    m3 = m1 + m2;
    cout << "Resultant Matrix:\n";
    m3.display();
    return 0;
}
