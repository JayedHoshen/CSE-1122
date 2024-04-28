/*
problem-3: Write down a class named Vector and provide appropriate constructor and 
necessary functions to make the given main function executable.

Submitted by Jayed Hoshen (DUET-CSE, id: 2204076)
*/
#include <bits/stdc++.h>
using namespace std;

class Vector {
    double x, y, z;
public:
    Vector(double x_val = 0.0, double y_val = 0.0, double z_val = 0.0){
        x = x_val;
        y = y_val;
        z = z_val;
    }

    // Overloading the input operator >>
    friend istream  &operator>>(istream &in, Vector &vec) {
        in >> vec.x >> vec.y >> vec.z;
        return in;
    }

    // Overloading the subtraction operator -
    Vector operator-(Vector &other) {
        return Vector(x - other.x, y - other.y, z - other.z);
    }

    // Overloading the multiplication operator * for dot product
    Vector operator*(Vector& other) {
        return Vector(x * other.x, y * other.y, z * other.z);
    }

    // Overloading the scalar multiplication operator * for scalar product
    Vector operator*(double scalar) {
        return Vector(x * scalar, y * scalar, z * scalar);
    }

    // Overloading the unary negation operator -
    Vector operator-() {
        return Vector(-x, -y, -z);
    }

    // Display function to output vector in the form ai + bj + ck
    void display() {
        cout << x << "i + " << y << "j + " << z << "k" << endl;
    }

    // Friend function to enable scalar multiplication when scalar is on the left
    friend Vector operator*(double scalar, Vector &vec) {
        return vec * scalar;
    }
};

int main() {
    cout << "\n==============This is Jayed Hoshen's Programm=============\n\n";

    Vector v1, v2, result, mult;

    cout << "Please Enter vector one (x y z) = ";
    cin >> v1;

    cout << "Please Enter vector two (x y z) = ";
    cin >> v2;

    result = v1 - v2;
    cout << "\nSubtraction result: ";
    result.display();

    result = v1 * v2;
    cout << "Dot product result: ";
    result.display();

    mult = 5 * v1;
    cout << "\nScalar multiplication result of (vector-one): ";
    mult.display();

    result = -v2;
    cout << "Negation result of (vector-two): ";
    result.display();

    cout << "\n=============Submitted Successfully, Thank you Sir/Mam===========\n";

    return 0;
}