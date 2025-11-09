#include <iostream>
#include <cstring>
using namespace std;

class CString {
    char str[100];
public:
    void setData() {
        cout << "Enter string: ";
        cin >> str;
    }
    void showData() { cout << str << endl; }

    CString operator+(CString s) {
        CString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    bool operator==(CString s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    CString s1, s2, s3;
    s1.setData();
    s2.setData();
    s3 = s1 + s2;
    cout << "Concatenated: "; s3.showData();

    if (s1 == s2)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
    return 0;
}
