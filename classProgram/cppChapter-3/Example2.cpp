// This program has an error-
#include <iostream>
using namespace std;

class myClass {
    int a, b;
    public:
        void set(int i, int j) {
            a = i;
            b = j;
        }
        void show() {
            cout << a << ' ' << b << "\n";
        }
};

/*
    This class is similar to myClass but uses a different class name and
    thus appears as a different type to the compiler.
*/
class yourClass {
    int a, b;
    public:
        void set(int i, int j) {
            a = i;
            b = j;
        }
        void show() {
            cout << a << ' ' << b << "\n";
        }
};

int main()
{
    myClass o1;
    yourClass o2;

    o1.set(10, 4);
    o2 = o1; // error object not of same type

    o1.show();
    o2.show();

    return 0;
}