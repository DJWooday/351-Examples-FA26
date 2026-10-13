//
// Created by DownT on 9/29/2026.
//

#ifndef CUSTOMCLASSES_2_RECTANGLE_H
#define CUSTOMCLASSES_2_RECTANGLE_H


class Rectangle {
public:
    float width, height;
    Rectangle(float w, float h) : width(w), height(h) {}
    Rectangle() {width = height = 0;}
    float getArea() { return width * height; }
};


#endif //CUSTOMCLASSES_2_RECTANGLE_H