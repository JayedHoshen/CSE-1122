#include <iostream>
using namespace std;
// Base class representing a Shape
class Shape {
public:
    virtual void draw() = 0;
};

// Base class representing a Color
class Color {
public:
    virtual void fill() = 0;
};

// Derived class representing a ColoredShape using multiple inheritance
class ColoredShape : public Shape, public Color {
public:
    void draw() override {
        cout << "Drawing colored shape." << endl;
    }
    void fill() override {
        cout << "Filling colored shape with color." << endl;
    }
};

int main() {
    ColoredShape coloredShape;
    coloredShape.draw(); // Accessing draw() method from Shape
    coloredShape.fill(); // Accessing fill() method from Color

    return 0;
}
