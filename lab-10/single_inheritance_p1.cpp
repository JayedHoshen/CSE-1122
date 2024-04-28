#include <iostream>
using namespace std;

// Base class representing different types of vehicles
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

// Derived class representing a Bike
class Bike : public Vehicle
{
public:
    void ringBell()
    {
        cout << "Bike is ringing bell." << endl;
    }
};

int main()
{
    Car myCar;
    myCar.drive(); // Accessing base class method
    myCar.honk(); // Accessing derived class method

    Bike myBike;
    myBike.drive(); // Accessing base class method
    myBike.ringBell(); // Accessing derived class method

    return 0;
}
