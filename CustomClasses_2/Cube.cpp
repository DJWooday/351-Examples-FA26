//
// Created by DownT on 9/29/2026.
//

#include "Cube.h"

#include <iostream>
#include <ostream>

Cube::Cube() {
    Rectangle* r = new Rectangle();
    depth = 0;
}
Cube::Cube(Rectangle *r, float d) {
    baseRect = r;
    depth = d;
}

Cube::Cube(const Cube& c) {
    baseRect = new Rectangle(c.baseRect->width, c.baseRect->height);
    depth = c.depth;
}
Cube::~Cube() {
    std::cout << "Cube deletion" << std::endl;
    delete this->baseRect;
}

Cube& Cube::operator=(const Cube& c) {
    Rectangle* r = new Rectangle(c.baseRect->width, c.baseRect->height);
    delete baseRect;
    this->baseRect = r;
    return *this;
}

