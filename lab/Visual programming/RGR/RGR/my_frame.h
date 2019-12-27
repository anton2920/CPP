#ifndef MY_FRAME_H
#define MY_FRAME_H

#include <QWidget>
#include <QFrame>
#include <QMouseEvent>
#include <Qt>

class my_frame : public QFrame {
    Q_OBJECT

public:
    explicit my_frame(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~my_frame();

    int x, y;

signals:
    void clicked();
    void moved();
    void left();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void leaveEvent(QEvent *);
};

#endif // MY_FRAME_H
