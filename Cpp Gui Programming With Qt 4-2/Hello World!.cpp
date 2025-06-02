//Defines QT classes used. Every Qt class there is a header file with the same name and capitalization
//as the class that contains that definition.
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
 {
   //Creates a QApplication object to manage application-wide resources
   //The QApplication constructor requires argc and argc because Qt supports a few CLI args of its own
     QApplication app(argc, argv); 

    //Creates a QLabel widget . A widget is a visual element in a user intergace
    //Most applications use a QMainWindow or a QDialog as the
    //application window, but Qt is so flexible that any widget can be a window. In
    //this example, the QLabel widget is the application window.
     QLabel *label = new QLabel("Hello Qt!");
   //Widgets are always created hidden
     label->show();
     
     return app.exec();
 }

