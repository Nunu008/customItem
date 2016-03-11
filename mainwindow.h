#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "customitemellipse.h"
#include "customitemrect.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *e);
private:
    Ui::MainWindow *ui;
    QGraphicsScene     *scene;
    QGraphicsItemGroup *group;
    bool isGroupped;

};

#endif // MAINWINDOW_H
