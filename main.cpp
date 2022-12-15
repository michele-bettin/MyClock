#include "Models/orario.h"

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <QApplication>
#include "./Models/callbacktimer.h"
#include <Models/data.h>

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    ClockViewer w;
    w.show();
    return a.exec();*/

    /*Orario o1;

    o1.ImpostaOraUTC();
    o1.ImpostaFusoOrario(1);

    CallBackTimer cBT;

    o1.Avvia(cBT);

    Sleep(500);


    while(true)
    {
            std::cout << o1 << std::endl;
            Sleep(1000);
    }*/

    Data d1(20, 10, 2002);
    std::cout << d1.GetAnno() << std::endl;


    aCallBackTimer cBT;

    d1.Avvia(cBT);

    Sleep(500);


    while(true)
    {
            std::cout << d1.GetAnno() << std::endl;
            Sleep(1000);
    }







    return 0;
}
