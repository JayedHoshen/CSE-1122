#include <iostream>
using namespace std;

// Class template for a generic Pair
template<typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() {
        cout << "(" << first << ", " << second << ")" << endl;
    }
};

int main() {
    Pair<int, double> pair1(5, 3.14);
    pair1.display();

    Pair<string, char> pair2("Hello", 'W');
    pair2.display();

    return 0;
}
