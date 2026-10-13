//
// Created by DownT on 9/29/2026.
//
#ifndef CUSTOMCLASSES_1_CUBE_H
#define CUSTOMCLASSES_1_CUBE_H

#include <iostream>
#include <ostream>

#include "Rectangle.h"

class Cube {
    Rectangle* baseRect;
    float depth;
    public:
    Cube() : baseRect(nullptr), depth(0) {};
    Cube(Rectangle* r, float d) : baseRect(r), depth(d) {};
    ~Cube() {
        delete this->baseRect;
        std::cout << "Goodby old friend o7" << std::endl;
    }

    Cube(const Cube& existing) {
        this->baseRect = new Rectangle(existing.baseRect->width, existing.baseRect->height);
    }

    Cube& operator=(const Cube& rhs) {
        Rectangle* r = new Rectangle(rhs.baseRect->width, rhs.baseRect->height);
        delete this->baseRect;
        this->baseRect = r;
        return *this;
    }
};


#endif //CUSTOMCLASSES_1_CUBE_H