/*
Problem-1: Overload the operator + for adding the timings (hr, min, sec) of two clocks

Submitted by Jayed Hoshen (DUET-CSE, id: 2204076)
*/

#include <bits/stdc++.h>
using namespace std;

class Clock {
    int hours, minutes, seconds;
public:
    Clock(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() {
        cout << "(H:M:S) = ";
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Overloading the + operator to add two clocks
    Clock operator+(Clock &obj) {
        int totalHours = hours + obj.hours;
        int totalMinutes = minutes + obj.minutes;
        int totalSeconds = seconds + obj.seconds;

        if (totalSeconds >= 60) {
            totalMinutes += totalSeconds / 60;
            totalSeconds %= 60;
        }

        if (totalMinutes >= 60) {
            totalHours += totalMinutes / 60;
            totalMinutes %= 60;
        }

        return Clock(totalHours, totalMinutes, totalSeconds);
    }
};

int main() {
    cout << "\n==============This is Jayed Hoshen's Programm=============\n\n";

    int h1, h2, m1, m2, s1, s2;

    cout << "Please enter first hour = "; cin >> h1;
    cout << "Please enter first minute = "; cin >> m1;
    cout << "Please enter first second = "; cin >> s1;

    cout << "\nPlease enter second hour = "; cin >> h2;
    cout << "Please enter second minute = "; cin >> m2;
    cout << "Please enter second second = "; cin >> s2;

    Clock clock1(h1, m1, s1);
    Clock clock2(h2, m2, s2);

    cout << "\nYour First Clock is ";
    clock1.display();

    cout << "Your Second Clock is ";
    clock2.display();

    Clock sum = clock1 + clock2;

    cout << "\nSum of two Clocks ";
    sum.display();

    cout << "\n=============Submitted Successfully, Thank you Sir/Mam===========\n";

    return 0;
}
