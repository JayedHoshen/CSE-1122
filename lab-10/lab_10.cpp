/*
 Problem-1: Show the implementation of template class library for swap function

 Submitted by Jayed Hoshen (DUET-CSE, id: 2204076)
*/

#include <iostream>
using namespace std;

template <typename T>
class Swap {
public:
    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    cout << "\n==============This is Jayed Hoshen's Programm=============\n\n";

    int x, y;
    cout << "Enter two integer numbers separated by space: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Creating instance of Swap class for integer type
    Swap<int> intSwap;
    intSwap.swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Example usage with doubles
    double m, n;
    cout << "\nEnter two double numbers  separated by space: ";
    cin >> m >> n;
    cout << "Before swap: m = " << m << ", n = " << n << endl;

    // Creating instance of Swap class for double type
    Swap<double> doubleSwap;
    doubleSwap.swap(m, n);

    cout << "After swap: m = " << m << ", n = " << n << endl;

    cout << "\n=============Submitted Successfully, Thank you Sir/Mam===========\n";

    return 0;
}
