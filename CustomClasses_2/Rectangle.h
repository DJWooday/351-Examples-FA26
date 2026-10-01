//
// Created by DownT on 9/29/2026.
//

#ifndef CUSTOMCLASSES_2_RECTANGLE_H
#define CUSTOMCLASSES_2_RECTANGLE_H


class Rectangle {
float width, height;
    public:
    Rectangle(float w, float h) : width(w), height(h) {}
    float getArea() { return width * height; }
};


#endif //CUSTOMCLASSES_2_RECTANGLE_H