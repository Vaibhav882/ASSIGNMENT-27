#include <iostream>
#include <cstring>
using namespace std;

class mystring {
    char str[100];
public:
    void setData() {
        cout << "Enter string: ";
        cin.getline(str, 100);
    }

    void showData() { cout << str << endl; }

    void operator!() {
        for(int i=0; str[i]; i++) {
            if(isupper(str[i]))
                str[i] = tolower(str[i]);
            else if(islower(str[i]))
                str[i] = toupper(str[i]);
        }
    }
};

int main() {
    mystring s;
    s.setData();
    cout << "Original: ";
    s.showData();
    !s;
    cout << "After case change: ";
    s.showData();
    return 0;
}
