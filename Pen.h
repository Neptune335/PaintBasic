//23050111029 Medine Merve MARAL

#ifndef PEN_H
#define PEN_H

#include <FL/Fl.H>
#include <FL/fl_draw.H>

class Pen
{
protected:
    Fl_Color color;
    bool isBold = false;

public:
    Pen(Fl_Color color);
    bool getBold();
    void setBold(bool bold);
    Fl_Color getColor();
    void setColor(Fl_Color color);
    virtual void drawLine(int x1, int x2, int y1, int y2);
};

#endif
