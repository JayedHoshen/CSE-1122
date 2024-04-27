#include <bits/stdc++.h>
using namespace std;

class MyString {
    string str;
    public:
        MyString(){}
        MyString(const string& s) : str(s) {}

    MyString operator+(const MyString& ob) {
        MyString result;
        result.str = str + ob.str;
        return result;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    string s1, s2;

    cout << "Enter first string = ";
    cin >> s1;

    cout << "Enter second string = ";
    cin >> s2;

    MyString str1(s1);
    MyString str2(s2);

    MyString out = str1 + str2;

    cout << "\"" << s1 << " \" + \"" << s2 << "\" = ";
    out.display();

    return 0;
}
