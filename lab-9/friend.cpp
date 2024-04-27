#include <bits/stdc++.h>
using namespace std;

class Complex {
    double real;
    double imaginary;
    public:
        Complex(double r = 0, double i = 0) {
            real = r;
            imaginary = i;
        }

    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imaginary << "i";
    }
};

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main() {
    double a1, a2, b1, b2;

    cout << "Enter first real and imaginary number = ";
    cin >> a1 >> a2;

    cout << "Enter second real and imaginary number = ";
    cin >> b1 >> b2;


    Complex c1(a1, a2);
    Complex c2(b1, b2);

    Complex sum = c1 + c2;

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}

