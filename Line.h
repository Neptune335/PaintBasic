//23050111029 Medine Merve MARAL

#ifndef LINE_H
#define LINE_H

#include "Shape.h"

class Line : public Shape
{
public:
    //a line from (x1, y1) to (x2, y2).
    Line(Pen *pen, int x1, int x2, int y1, int y2) : Shape(pen, x1, x2, y1, y2) {}
    void draw() override;
};

#endif