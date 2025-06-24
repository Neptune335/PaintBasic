//23050111029 Medine Merve MARAL

#ifndef SHAPE_H
#define SHAPE_H

#include "Pen.h"

class Shape
{
protected:
    Pen *pen;
    int x1, x2, y1, y2;

public:
    Shape(Pen *pen, int x1, int x2, int y1, int y2) : pen(pen), x1(x1), x2(x2), y1(y1), y2(y2) {}
    void setCoordinates(int x1, int x2, int y1, int y2);
    void setPen(Pen *newPen);
    virtual void draw() = 0;
};

#endif