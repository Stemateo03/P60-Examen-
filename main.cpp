
//Steven Calapaqui 1726349648

#include "juego.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
