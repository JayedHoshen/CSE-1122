#include <iostream>
using namespace std;

// Base class representing a Vehicle
class Vehicle
{
public:
    void drive()
    {
        cout << "Vehicle is being driven." << endl;
    }
};

// Derived class representing a Car
class Car : public Vehicle
{
public:
    void honk()
    {
        cout << "Car is honking." << endl;
    }
};

// Further derived class representing a SportsCar
class SportsCar : public Car
{
public:
    void accelerate()
    {
        cout << "Sports car is accelerating." << endl;
    }
};

int main()
{
    SportsCar mySportsCar;
    mySportsCar.drive(); // Accessing drive() method from Vehicle
    mySportsCar.honk(); // Accessing honk() method from Car
    mySportsCar.accelerate(); // Accessing accelerate() method from SportsCar

    return 0;
}
