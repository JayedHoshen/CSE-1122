// This fragment contains an error
#include <iostream>
using namespace std;

class myClass {
    // private to myclass
    int a;
    public:
        void set_a(int num);
        int get_a();
};

void myClass::set_a(int num) {
    a = num;
}

int myClass::get_a() {
    return a;
}

int main() 
{
    myClass ob1, ob2;

    ob1.a = 10; // ERROR! cannot access private member
    ob2.a = 99;

    cout << ob1.get_a() << "\n";
    cout << ob2.get_a() << "\n";

    return 0;
}