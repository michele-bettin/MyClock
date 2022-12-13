#include "Models/orario.h"
#include "clockviewer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    ClockViewer w;
    w.show();
    return a.exec();*/

    Orario o1(12, 30, 12);
    Orario o2(15, 12, 11);

    std::cout << o1 << std::endl;
}
