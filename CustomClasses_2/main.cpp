#include <iostream>

#include "Rectangle.h"
#include "Cube.h"
using namespace std;

int main() {
    Rectangle r = Rectangle(3, 4);
    std::cout << r.getArea() << endl;
    return 0;
}
