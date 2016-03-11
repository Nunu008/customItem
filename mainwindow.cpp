#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    group = scene->createItemGroup(scene->selectedItems());
    group->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);


    CustomItemEllipse *ellipse1 = new CustomItemEllipse();
    scene->addItem(ellipse1);
    group->addToGroup(ellipse1);

    CustomItemEllipse *ellipse2 = new CustomItemEllipse();
    ellipse2->setPos(mapToParent(QPoint(300,0)));
    scene->addItem(ellipse2);
    group->addToGroup(ellipse2);

    CustomItemEllipse *ellipse3 = new CustomItemEllipse();
    ellipse3->setPos(mapToParent(QPoint(0,300)));
    scene->addItem(ellipse3);
    group->addToGroup(ellipse3);

    CustomItemRect *rect       = new CustomItemRect();
    scene->addItem(rect);
    group->addToGroup(rect);
}

MainWindow::~MainWindow()
{
    delete ui;
}
