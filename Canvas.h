//23050111029 Medine Merve MARAL

#ifndef CANVAS_H
#define CANVAS_H

#include <FL/Fl_Widget.H>
#include "Pen.h"
#include "ColorfulPen.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"

class Canvas : public Fl_Widget
{
protected:
    int x1, x2, y1, y2; //shape's coordinate values
    int X, Y, W, H;
    int clickCount = 0;

    //default objects, they are created when canvas is created:
    Pen *normalPen;
    ColorfulPen *colorfulPen;
    Line *line;
    Rectangle *rectangle;
    Circle *circle;

    //selected pen and shape by user:
    Shape *shape = line;
    Pen *pen = normalPen;

public:
    Canvas(int X, int Y, int W, int H);
    int handle(int event) override;//get clicks
    void draw() override;//uses shape's draw method
    void setShapeCoordinates();//set shape's coordinates as clicks coordinates

    //these methods for shape selection:
    void shapeLine();
    void shapeRectangle();
    void shapeCircle();

    //these methods for pen selection:
    void penPen();
    void penColorfulPen();
    void setColor(Fl_Color color);
    void setBold(bool bold);
};

#endif