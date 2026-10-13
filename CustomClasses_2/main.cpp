#include <iostream>

#include "Rectangle.h"
#include "Cube.h"
using namespace std;

class Line {
public:
    float len;
    Line() {
        len = 0;
    }
    explicit Line(float len) : len(len) {}
    Line operator+(const Line& rhs) {
        cout << "Line 1's len" << len << endl;
        return Line(len + rhs.len);
    }

    Line operator*(const Line& rhs) {
        cout << "gabagoody";
        return Line(0);
    }
    Line operator-(Line rhs) {
        return Line(abs(this->len - rhs.len));
    }
    Line operator*(float rhs) {
        return Line(len * rhs);
    }
    float operator+(float rhs) {
        return len + rhs;
    }
    float operator[](int i) {
        return len;
    }

    friend ostream& operator<<(ostream& os, Line& rhs) {
        os << "Line: " << rhs.len << " ";
        return os;
    }
};

int main() {
    Rectangle r = Rectangle(3, 4);
    std::cout << r.getArea() << endl;
    //Rectangle rect(1,2);
    Rectangle rect2;
    Rectangle rect3{};

    Cube* cube = new Cube(new Rectangle(3, 4), 6);
    Cube* otherCube = new Cube();
    otherCube = cube;

    Line l1 = Line(5);
    Line l2 = Line(9);
    Line l3 = l1 + l2;
    //Line l4 = l2 + 4.0; Can't work cause explicit constructor
    Line l4 = l2 * 12;
    l1.operator+(l2);

    cout << l3;
    return 0;
}
