//23050111029 Medine Merve MARAL

#include "Rectangle.h"

void Rectangle::draw()
{
    int weight = x2 - x1;
    int height = y2 - y1;
    pen->drawLine(x1, x1 + weight, y1, y1);
    pen->drawLine(x1 + weight, x1 + weight, y1, y1 + height);
    pen->drawLine(x1 + weight, x1, y1 + height, y1 + height);
    pen->drawLine(x1, x1, y1 + height, y1);
}