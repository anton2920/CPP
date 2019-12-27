#include "my_frame.h"

my_frame::my_frame(QWidget* parent, Qt::WindowFlags f)
    : QFrame(parent) {

}

my_frame::~my_frame() {}

void my_frame::mousePressEvent(QMouseEvent *event) {

    /* Main part */
    emit clicked();
}

void my_frame::mouseMoveEvent(QMouseEvent *event) {

    /* Initializing variables */
    this->x = event->x();
    this->y = event->y();

    /* Main part */
    emit moved();
}

void my_frame::leaveEvent(QEvent *) {

    /* Main part */
    emit left();
}
