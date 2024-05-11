// Source: https://www.youtube.com/watch?v=IV-K0n5P138
#include <bits/stdc++.h>
using namespace std;

class human {
    int id = 123;
    string name = "Jayed";
    friend class teacher;
};

class teacher{
    human h;
    public:
       void show() {
            cout << "friend class example\n";
            cout << "ID = " << h.id << "\n" << "Name = " << h.name << endl;
       }
};


int main()
{
    teacher t;
    t.show();

    return 0;
}
