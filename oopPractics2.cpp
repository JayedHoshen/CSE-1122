#include <bits/stdc++.h>
using namespace std;

class person {
    int weight;
public:
    person(int x ) {
        weight = x;
    }

    void printValue() {
        cout << "Weight is " << weight << endl;
    }

    void operator++() {
        ++weight;
    }
    void operator++(int) {
        weight++;
    }
};

int main()
{
    person jon(0);

    ++jon;

    jon++;

    jon.printValue();

    return 0;
}

/* 
#include <bits/stdc++.h>
using namespace std;

class A {
    int weight;
public:
    A(int x = 0) {
        weight = x;
    }

    void printValue() {
        cout << "Weight is " << weight << endl;
    }

    A operator + (A w) {
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }
};

int main()
{
    int a = 34, b = 45, c = 0;
    c = a + b;

    cout << "Total " << c << endl;

    A person1(10);
    A person2(15);
    A total;

    total = person1 + person2;

    total.printValue();

    return 0;
}f

mobile project
 #include <bits/stdc++.h>
 using namespace std;

class mobile {
private:
    string name;
    int RAM;
    string processor;
    int battery;

public:
    mobile(string name_a = "NULL", int RAM_a = 0, string processor_a = "NULL", int battery_a = 0) {
        name = name_a;
        RAM = RAM_a;
        processor = processor_a;
        battery = battery_a;
    }
    mobile(mobile &mob) {
        name = mob.name;
        RAM = mob.RAM;
        processor = mob.processor;
        battery = mob.battery;
    }

    void getMobileData();
};

void mobile :: getMobileData() {
    cout << "Name: " << name << endl;
    cout << "RAM: " << RAM << endl;
    cout << "Processor: " << processor << endl;
    cout << "Battery: " << battery << endl;
}

 int main()
 {
    mobile ob1;
    mobile ob2("Symphony", 4, "Shapdragon", 4500);
    mobile ob3(ob2);

    ob1.getMobileData();
    ob2.getMobileData();
    ob3.getMobileData();

    return 0;
 }
*/