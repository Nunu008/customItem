#ifndef CUSTOMITEMRECT_H
#define CUSTOMITEMRECT_H

#include <QGraphicsItem>
#include <QPainter>
#include <QDebug>

class CustomItemRect : public QGraphicsItem
{
public:
    QRectF rect;
    QGraphicsItemGroup *customItemGroup;
    bool isGroup;

public:
    CustomItemRect();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* e );
    void setGroup(QGraphicsItemGroup *group);
};

#endif // CUSTOMITEMRECT_H
