#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet: public QObject,public QGraphicsPixmapItem {
    Q_OBJECT
public:
    explicit Bullet(QGraphicsItem * parent= nullptr);
public slots:
    void move();
};

#endif // BULLET_H
