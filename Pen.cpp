//23050111029 Medine Merve MARAL

#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include "Pen.h"

Pen::Pen(Fl_Color color)
{
    Pen::color = color;
}

bool Pen::getBold()
{
    return isBold;
}

void Pen::setBold(bool bold)
{
    isBold = bold;
}

Fl_Color Pen::getColor()
{
    return color;
}

void Pen::setColor(Fl_Color newColor)
{
    color = newColor;
}

void Pen::drawLine(int x1, int x2, int y1, int y2)
{
    int thickness;
    if (Pen::isBold == true)
        thickness = 3;
    else
        thickness = 1;
    fl_color(color);
    fl_line_style(FL_SOLID, thickness);
    fl_line(x1, y1, x2, y2);
}