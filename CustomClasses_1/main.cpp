#include <iostream>
#include "Rectangle.h"
#include "Cube.h"
#include "Sphere.h"
using namespace std;

class Line {
    float len;
    public:
    Line() : len(0) {};
    Line(float l) : len(l) {};
    Line operator+(Line rhs) {
        return Line(len + rhs.len);
    }

    Line operator-(Line rhs) {
        return Line(len - rhs.len);
    }

    friend Line operator*(Line lhs, Line rhs);

    friend ostream& operator<<(ostream& os, const Line& rhs) {
        os << "Line: " << rhs.len << " ";
    }

    Line& operator+=(Line lhs) {
        this->len = this->len + lhs.len;
        return *this;
    }
};

//Line operator/(Line lhs, Line rhs) {
//    return Line(lhs.len / rhs.len);
//}
Line operator*(Line lhs, Line rhs) {
    return Line(lhs.len * rhs.len);
}

int main() {
    Line l1(4);
    Line l2(5);
    Line l3 = l1 + l2;
    cout << l3 << endl;
    Line l4 = l1 - l2;

    //Line l5 = l1 / l2;

    int x;
    //Rectangle rect = Rectangle(5, 5);
    Rectangle rect2;
    Cube* cube = new Cube(new Rectangle(5, 7), 3);
    delete cube;
    return 0;
}
