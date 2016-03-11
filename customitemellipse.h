#ifndef CUSTOMITEMELLIPSE_H
#define CUSTOMITEMELLIPSE_H

#include <QGraphicsItem>
#include <QPainter>

class CustomItemEllipse  : public QGraphicsItem
{
public:
    QRectF ellipse;
public:
    CustomItemEllipse();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CUSTOMITEMELLIPSE_H
