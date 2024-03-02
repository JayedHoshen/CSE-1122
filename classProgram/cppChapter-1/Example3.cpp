#include <iostream>
using namespace std;

class myClass {
    public:
        // now a is public
        int a;
        // and there is no need for set_a() or get_a()
};

int main()
{
    myClass ob1, ob2;

    // here a is accessed directly
    ob1.a = 10;
    ob2.a = 99;

    cout << ob1.a << endl;
    cout << ob2.a << endl;

    return 0;
}