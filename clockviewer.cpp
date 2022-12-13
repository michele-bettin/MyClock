#include "clockviewer.h"

ClockViewer::ClockViewer(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout* mainLayout = new QVBoxLayout;

    // Aggiungere la barra dei menù
    QMenuBar* menuBar = new QMenuBar(this);

    QMenu* home = new QMenu("Home", menuBar);
    QMenu* cronometro = new QMenu("Cronometro", menuBar);
    QMenu* timer = new QMenu("Timer", menuBar);
    QMenu* sveglia = new QMenu("Sveglia", menuBar);
    QMenu* impostazioni = new QMenu("Impostazioni", menuBar);

    menuBar->addMenu(home);
    menuBar->addMenu(cronometro);
    menuBar->addMenu(timer);
    menuBar->addMenu(sveglia);
    menuBar->addMenu(impostazioni);

    mainLayout->addWidget(menuBar);













    setLayout(mainLayout);
}
