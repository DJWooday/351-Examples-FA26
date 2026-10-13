//
// Created by DownT on 9/29/2026.
//

#ifndef CUSTOMCLASSES_1_RECTANGLE_H
#define CUSTOMCLASSES_1_RECTANGLE_H


class Rectangle {
public:
    float width, height;

    Rectangle(float w, float h) : width(w), height(h) {};
    Rectangle() : width(5), height(5) {};

    void PrintRect();
};


#endif //CUSTOMCLASSES_1_RECTANGLE_H