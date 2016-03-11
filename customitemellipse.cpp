#include "customitemellipse.h"

CustomItemEllipse::CustomItemEllipse()
{
    ellipse = boundingRect();
    setFlag(ItemIsMovable);
    setZValue(10);
}


QRectF CustomItemEllipse::boundingRect() const
{
    return QRectF(0,0,75,75);
}


void CustomItemEllipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::gray);
    QPen pen(Qt::black, 3);
    painter->setPen(pen);
    painter->drawEllipse(ellipse);
}
