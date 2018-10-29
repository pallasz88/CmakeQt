#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    explicit Enemy(QGraphicsItem * parent= nullptr);
public slots:
    void move();
};

#endif // ENEMY_H
