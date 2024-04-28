#include <iostream>
using namespace std;

class Base
{
public:
    int publicData;
protected:
    int protectedData;
private:
    int privateData;
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Public data: " << publicData << endl;
        cout << "Protected data: " << protectedData << endl; // Accessible due to inheritance
        // cout << "Private data: " << privateData << endl; // Error: private member inaccessible
    }
};

int main()
{
    Derived obj;
    obj.display();
    // obj.publicData; // Accessible
    // obj.protectedData; // Error: protected member inaccessible outside the class hierarchy
    // obj.privateData; // Error: private member inaccessible
    return 0;
}
