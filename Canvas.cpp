//23050111029 Medine Merve MARAL

#include "Canvas.h"

Canvas::Canvas(int X, int Y, int W, int H) : Fl_Widget(X, Y, W, H), X(X), Y(Y), W(W), H(H)
{
    normalPen = new Pen(FL_BLACK);
    colorfulPen = new ColorfulPen();
    line = new Line(normalPen, 0, 0, 0, 0);
    rectangle = new Rectangle(normalPen, 0, 0, 0, 0);
    circle = new Circle(normalPen, 0, 0, 0, 0);
    shape = line;
    pen = normalPen;
}

int Canvas::handle(int event)
{
    if (event == FL_PUSH)
    {
        if (clickCount == 0)
        {
            x1 = Fl::event_x();
            y1 = Fl::event_y();
            clickCount++;
        }
        else if (clickCount == 1)
        {
            x2 = Fl::event_x();
            y2 = Fl::event_y();
            clickCount = 0;
            if (shape != nullptr || pen != nullptr)
            {
                setShapeCoordinates();
                redraw();
            }
            x1 = 0;
            x2 = 0;
            y1 = 0;
            y2 = 0;
        }

        return 1;
    }
    else
    {
        return Fl_Widget::handle(event);
    }
}

void Canvas::draw()
{
    fl_rect(X, Y, W, H, FL_WHITE);
    shape->draw();
}

void Canvas::setShapeCoordinates()
{
    shape->setCoordinates(x1, x2, y1, y2);
}

void Canvas::shapeLine()
{
    shape = line;
}

void Canvas::shapeRectangle()
{
    shape = rectangle;
}

void Canvas::shapeCircle()
{
    shape = circle;
}

void Canvas::penPen()
{
    pen = normalPen;
    shape->setPen(pen);
}

void Canvas::penColorfulPen()
{
    pen = colorfulPen;
    shape->setPen(pen);
}

void Canvas::setBold(bool bold)
{
    pen->setBold(bold);
}

void Canvas::setColor(Fl_Color color)
{
    pen->setColor(color);
}
