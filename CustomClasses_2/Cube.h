//
// Created by DownT on 9/29/2026.
//

#ifndef CUSTOMCLASSES_2_CUBE_H
#define CUSTOMCLASSES_2_CUBE_H
#include "Rectangle.h"

class Cube {
    Rectangle* baseRect;
    float depth;
public:
    Cube();
    Cube(Rectangle* r, float d);
    Cube(const Cube&);
    ~Cube();

    Cube& operator=(const Cube&);
};


#endif //CUSTOMCLASSES_2_CUBE_H