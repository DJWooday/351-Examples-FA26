//
// Created by DownT on 9/29/2026.
//

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(float w, float h) {
    width = w;
    height = h;
}
void Rectangle::PrintRect() {
    std::cout << width << " " << height << std::endl;
}


