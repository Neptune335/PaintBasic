//23050111029 Medine Merve MARAL

#ifndef COLORFULPEN_H
#define COLORFULPEN_H

#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include "Pen.h"

class ColorfulPen : public Pen
{
public:
    ColorfulPen() : Pen(FL_RED) {}
    void drawLine(int x1, int x2, int y1, int y2);
};

#endif