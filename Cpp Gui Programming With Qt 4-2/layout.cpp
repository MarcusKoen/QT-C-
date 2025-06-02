/* Qt has three main layout manager
classes:QHBoxLayout lays out widgets horizontally from left to right (right to left for
some cultures).
• QVBoxLayout lays out widgets vertically from top to bottom.
• QGridLayout lays out widgets in a grid.*/

#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>

int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window -> setWindowTitle("Enter your age");

    QSpinBox *spinbox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);

    spinbox -> setRange(0,130);
    slider -> setRange(0,130);

    QObject::connect(spinbox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinbox, SLOT(setValue(int)));
    spinbox -> setValue(35);

    QHBoxLayout *layout = new QHBoxLayout;
    layout -> addWidget(spinbox);
    layout -> addWidget(slider);
    window -> setLayout(layout);

     window -> show();
     return app.exec();
 }

