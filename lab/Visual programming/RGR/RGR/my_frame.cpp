#include "my_frame.h"

#include <iostream>
#include <cstring>

my_frame::my_frame(QWidget* parent, Qt::WindowFlags f)
    : QFrame(parent) {

}

my_frame::~my_frame() {}

QColor &my_frame::getColor() {

    /* Returning value */
    return this->color;
}

void my_frame::setColor() {

    /* Initialiizing variables */
    QString style = this->styleSheet();

    /* Main part */
    this->color = parseColor(style);
}

void my_frame::mousePressEvent(QMouseEvent *event) {

    /* Main part */
    if (event->button() == Qt::LeftButton) {
        emit clicked(this);
    } else if (event->button() == Qt::RightButton) {
        emit clicked_right(this);
    }
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

QColor my_frame::parseColor(QString &color) {

    /* Initializing variables */
    int r, g, b;

    /* Main part */
    std::sscanf(reinterpret_cast<const char *>(color.toLocal8Bit().data()) + 22, "%d, %d, %d", &r, &g, &b);

    /* Returning value */
    return QColor(r, g, b);
}
