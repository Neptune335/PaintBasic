//23050111029 Medine Merve MARAL

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Pen.h"

class Circle : public Shape
{
public:
    // (x1, y1) is circle's center.
    // (x2, y2) any point on circle.
    Circle(Pen *pen, int x1, int x2, int y1, int y2) : Shape(pen, x1, x2, y1, y2) {}
    void draw() override;
};

#endif