//23050111029 Medine Merve MARAL

#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include "Pen.h"
#include "ColorfulPen.h"

void ColorfulPen::drawLine(int x1, int x2, int y1, int y2)
{
    Pen::drawLine(x1, x2, y1, y2);
    // change color:
    if (getColor() == FL_RED)
        setColor(FL_GREEN);
    else if (getColor() == FL_GREEN)
        setColor(FL_BLUE);
    else if (getColor() == FL_BLUE)
        setColor(FL_RED);
}