#ifndef CUSTOMITEMELLIPSE_H
#define CUSTOMITEMELLIPSE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QDebug>

class CustomItemEllipse  : public QGraphicsItem
{
public:
    QRectF ellipse;
public:
    CustomItemEllipse();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // CUSTOMITEMELLIPSE_H
