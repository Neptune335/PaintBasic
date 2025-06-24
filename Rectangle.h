//23050111029 Medine Merve MARAL

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
    //(x1, y1) is upper left corner.
    //(x2, y2) is lower right corner.
    Rectangle(Pen *pen, int x1, int x2, int y1, int y2) : Shape(pen, x1, x2, y1, y2) {}
    void draw() override;
};

#endif