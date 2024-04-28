#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0)
        throw "Division by zero error"; // Throw an exception if denominator is zero
    return a / b;
}

int main() {
    double numerator, denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        double result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    } catch (const char* error) { // Catch block to handle exceptions
        cerr << "Exception caught: " << error << endl;
    }

    return 0;
}
