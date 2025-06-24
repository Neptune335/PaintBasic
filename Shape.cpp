//23050111029 Medine Merve MARAL

#include "Shape.h"

void Shape::setCoordinates(int newX1, int newX2, int newY1, int newY2)
{
    x1 = newX1;
    x2 = newX2;
    y1 = newY1;
    y2 = newY2;
}

void Shape::setPen(Pen *newPen)
{
    pen = newPen;
}
