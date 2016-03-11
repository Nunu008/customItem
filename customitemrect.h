#ifndef CUSTOMITEMRECT_H
#define CUSTOMITEMRECT_H

#include <QGraphicsItem>
#include <QPainter>

class CustomItemRect : public QGraphicsItem
{
public:
    QRectF rect;

public:
    CustomItemRect();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CUSTOMITEMRECT_H
