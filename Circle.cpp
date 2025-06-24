//23050111029 Medine Merve MARAL

#include <cmath>
#include "Circle.h"

void Circle::draw()
{
    int radius = round(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
    int bound_x1 = x1 - radius;
    int bound_x2 = x1 + radius;
    int bound_y1 = y1 - radius;
    int bound_y2 = y1 + radius;

    for (int j = bound_y1; j <= bound_y2; j++)
    {
        for (int i = bound_x1; i <= bound_x2; i++)
        {
            if (round(sqrt(pow(x1 - i, 2) + pow(y1 - j, 2))) == radius)
            {
                pen->drawLine(i, i + 1, j, j + 1);
            }
        }
    }
}