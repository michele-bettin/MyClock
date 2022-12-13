#ifndef CLOCKVIEWER_H
#define CLOCKVIEWER_H

#include <QWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QVBoxLayout>
#include <QHBoxLayout>


class ClockViewer : public QWidget
{
    Q_OBJECT
public:
    explicit ClockViewer(QWidget *parent = nullptr);

signals:

};

#endif // CLOCKVIEWER_H
