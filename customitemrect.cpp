#include "customitemrect.h"

CustomItemRect::CustomItemRect()
{
    rect = boundingRect();
    setFlag(ItemIsMovable);
    setScale(5);
    isGroup = false;
}

QRectF CustomItemRect::boundingRect() const
{
    return QRectF(0,0,75,75);
}

void CustomItemRect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::white);
    QPen pen(Qt::black, 0.5);
    painter->setPen(pen);
    painter->drawRoundRect(rect);
}

void CustomItemRect::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug()<<"Rect";
}

void CustomItemRect::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* e )
{
        isGroup = !isGroup;
        qDebug()<<"doubleclick: isGroupped: "<< isGroup;

        customItemGroup->setHandlesChildEvents(isGroup);
}

void CustomItemRect::setGroup(QGraphicsItemGroup *group)
{
    customItemGroup = group;
}
