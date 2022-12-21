//#include "./Models/orario.h"
//#include "./Models/data.h"
#include "./Models/orologio.h"
#include "./Models/timer.h"
#include "./Models/sveglia.h"


#include <iostream>
#include <stdio.h>
#include <time.h>
#include <QApplication>
//#include "./Models/callbacktimer.h"
#include <Models/cronometro.h>

#include <QMediaPlayer>
#include <QAudioOutput>
#include <QFile>






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

    /*Data d1(20, 10, 2002);
    std::cout << d1.GetAnno() << std::endl;


    CallBackTimer cBT;

    d1.Avvia(cBT);

    Sleep(500);


    while(true)
    {
            std::cout << d1.GetAnno() << std::endl;
            Sleep(1000);
    }*/

    /*Orologio o1(14, 20, 0, 15, 12, 2022, 1);

    CallBackTimer cBT;

    o1.Avvia(cBT);

    Sleep(500);


    while(true)
    {
            std::cout << o1 << std::endl;
            Sleep(1000);
    }*/

    /*
    Cronometro c1(14, 20, 0, 0);

    CallBackTimer cBT;

    c1.Avvia(cBT);

    Sleep(10);


    while(true)
    {
        std::cout << c1 << std::endl;
        Sleep(100);
    }*/

    /*
    Timer t1(00, 00, 10);

    CallBackTimer cBT;

    t1.Avvia(cBT);

    Sleep(100);


    while(true)
    {
        std::cout << t1 << std::endl;
        if(t1.HaFinito()) {
            cBT.stop();
            std::cout << "TIMER FINITO" << std::endl;
            return 0;
        }
        Sleep(1000);
    }*/

    Orario* o1 = new Orario();

    o1->ImpostaOraUTC();
    o1->ImpostaFusoOrario(1);

    CallBackTimer cBT;

    o1->Avvia(cBT);

    Sleep(500);

    Sveglia s1(12, 27, 00, o1);

    while(true)
    {
        std::cout << s1 << std::endl;
        if(s1.HaFinito()) {
            std::cout << "SUONAAAAAAA" << std::endl;
            return 0;
        }
        Sleep(1000);
    }

    return 0;
}
