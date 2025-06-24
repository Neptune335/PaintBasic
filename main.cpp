//23050111029 Medine Merve MARAL

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include "Pen.h"
#include "ColorfulPen.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Canvas.h"

void lineButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->shapeLine();
}

void rectangleButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->shapeRectangle();
}

void circleButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->shapeCircle();
}

void penButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->penPen();
}

void colorfulPenButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->penColorfulPen();
}

void redButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->setColor(FL_RED);
}

void greenButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->setColor(FL_GREEN);
}

void blueButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->setColor(FL_BLUE);
}

void blackButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->setColor(FL_BLACK);
}

void boldButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->setBold(true);
}
void fineButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->setBold(false);
}

void drawButton_callback(Fl_Widget *widget, void *data)
{
    Canvas *canvas = static_cast<Canvas *>(data);
    canvas->draw();
}

int main()
{
    Fl_Window *window = new Fl_Window(800, 800, "Paint-Basic");
    Canvas *canvas = new Canvas(20, 220, 760, 560);

    Fl_Box *shapeTitle = new Fl_Box(15, 10, 100, 40, "Select Shape:");
    shapeTitle->labelsize(18);
    shapeTitle->labelcolor(FL_BLUE);
    shapeTitle->labelfont(FL_ALIGN_BOTTOM_RIGHT);
    Fl_Button *lineButton = new Fl_Button(10, 60, 100, 40, "Line");
    lineButton->callback(lineButton_callback, canvas);
    Fl_Button *rectangleButton = new Fl_Button(10, 110, 100, 40, "Rectangle");
    rectangleButton->callback(rectangleButton_callback, canvas);
    Fl_Button *circleButton = new Fl_Button(10, 160, 100, 40, "Circle");
    circleButton->callback(circleButton_callback, canvas);

    Fl_Box *penTitle = new Fl_Box(185, 10, 100, 40, "Select Pen:");
    penTitle->labelsize(18);
    penTitle->labelcolor(FL_BLUE);
    penTitle->labelfont(FL_ALIGN_BOTTOM_RIGHT);
    Fl_Button *penButton = new Fl_Button(180, 60, 100, 40, "Normal Pen");
    penButton->callback(penButton_callback, canvas);
    Fl_Button *colorfulPenButton = new Fl_Button(180, 110, 100, 40, "Colorful Pen");
    colorfulPenButton->callback(colorfulPenButton_callback, canvas);

    Fl_Box *colorTitle = new Fl_Box(345, 10, 120, 40, "Normal Pen Color:");
    colorTitle->labelsize(16);
    colorTitle->labelcolor(FL_BLUE);
    colorTitle->labelfont(FL_ALIGN_BOTTOM_RIGHT);
    Fl_Button *redButton = new Fl_Button(340, 60, 40, 40);
    redButton->callback(redButton_callback, canvas);
    Fl_Button *greenButton = new Fl_Button(390, 60, 40, 40);
    greenButton->callback(greenButton_callback, canvas);
    Fl_Button *blueButton = new Fl_Button(440, 60, 40, 40);
    blueButton->callback(blueButton_callback, canvas);
    Fl_Button *blackButton = new Fl_Button(490, 60, 40, 40);
    blackButton->callback(blackButton_callback, canvas);
    redButton->color(FL_RED);
    greenButton->color(FL_GREEN);
    blueButton->color(FL_BLUE);
    blackButton->color(FL_BLACK);

    Fl_Box *boldTitle = new Fl_Box(315, 120, 120, 40, "Line Type:");
    boldTitle->labelsize(16);
    boldTitle->labelcolor(FL_BLUE);
    boldTitle->labelfont(FL_ALIGN_BOTTOM_RIGHT);
    Fl_Button *fineButton = new Fl_Button(340, 160, 40, 40, "fine");
    fineButton->callback(fineButton_callback, canvas);
    Fl_Button *boldButton = new Fl_Button(390, 160, 40, 40, "bold");
    boldButton->callback(boldButton_callback, canvas);

    window->end();
    window->show();

    return Fl::run();
}