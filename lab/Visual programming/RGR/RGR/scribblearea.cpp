#include <QtWidgets>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>

#include "scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent)
    : QWidget(parent)
{
    // Roots the widget to the top left even if resized
    setAttribute(Qt::WA_StaticContents);

    // Set defaults for the monitored variables
    modified = false;
    scribbling = false;
    toolW = 5;
    toolClr = Qt::black;
    tool2ndClr = Qt::white;
    T = tool::BRUSH;

    isFontSet = false;
}

// Used to load the image and place it in the widget
bool ScribbleArea::openImage(const QString &fileName)
{
    // Holds the image
    QImage loadedImage;

    // If the image wasn't loaded leave this function
    if (!loadedImage.load(fileName))
        return false;

    QSize newSize = loadedImage.size().expandedTo(size());
    resizeImage(&loadedImage, newSize);
    image = loadedImage;
    modified = false;
    update();
    return true;
}

// Save the current image
bool ScribbleArea::saveImage(const QString &fileName, const char *fileFormat)
{
    // Created to hold the image
    QImage visibleImage = image;
    resizeImage(&visibleImage, size());

    if (visibleImage.save(fileName, fileFormat)) {
        modified = false;
        return true;
    } else {
        return false;
    }
}

// Used to change the pen color
void ScribbleArea::setPenColor(const QColor &newColor)
{
    toolClr = newColor;
}

void ScribbleArea::setPen2ndColor(const QColor &newColor) {

    /* Initializing variables */
    this->tool2ndClr = newColor;
}

// Used to change the pen width
void ScribbleArea::setPenWidth(int newWidth)
{
    toolW = newWidth;
}

void ScribbleArea::setTool(ScribbleArea::tool T) {

    /* Initializing variables */
    this->T = T;
}

// Color the image area with white
void ScribbleArea::clearImage()
{
    image.fill(qRgb(255, 255, 255));
    modified = true;
    update();
}

// If a mouse button is pressed check if it was the
// left button and if so store the current position
// Set that we are currently drawing
void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    if (event->button() != Qt::MiddleButton) {
//        startPoint = event->pos();
        lastPoint = event->pos();

        if (this->T == tool::PEN || this->T == tool::BRUSH || this->T == tool::ERASER) {
            scribbling = true;
        } else if (this->T == tool::TEXT) {
            drawLineTo(lastPoint);
        } else {
            scribbling = false;
        }
        if (event->button() == Qt::LeftButton) {
            currentColor = this->toolClr;
        } else if (event->button() == Qt::RightButton) {
            currentColor = this->tool2ndClr;
        }
    }
}

// When the mouse moves if the left button is clicked
// we call the drawline function which draws a line
// from the last position to the current
void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & (Qt::LeftButton | Qt::RightButton)) && scribbling)
        drawLineTo(event->pos());
}

// If the button is released we set variables to stop drawing
void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton || event->button() == Qt::RightButton) {
        drawLineTo(event->pos());
        scribbling = false;
    }
}

// QPainter provides functions to draw on the widget
// The QPaintEvent is sent to widgets that need to
// update themselves
void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    // Returns the rectangle that needs to be updated
    QRect dirtyRect = event->rect();

    // Draws the rectangle where the image needs to
    // be updated
    painter.drawImage(dirtyRect, image, dirtyRect);
}

// Resize the image to slightly larger then the main window
// to cut down on the need to resize the image
void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    if (width() > image.width() || height() > image.height()) {
        int newWidth = qMax(width() + 128, image.width());
        int newHeight = qMax(height() + 128, image.height());
        resizeImage(&image, QSize(newWidth, newHeight));
        update();
    }
    QWidget::resizeEvent(event);
}

void ScribbleArea::drawLineTo(const QPoint &endPoint)
{
    // Used to draw on the widget
    QPainter painter(&image);

    // Set the current settings for the pen
    switch (T) {
        case PEN:
            painter.setBrush(QBrush(currentColor, Qt::SolidPattern));
            painter.drawLine(lastPoint, endPoint);
            break;
        case BRUSH:
            painter.setPen(QPen(currentColor, toolW, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            painter.drawLine(lastPoint, endPoint);
            break;
        case ERASER:
            painter.setPen(QPen(Qt::white, toolW, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            painter.drawLine(lastPoint, endPoint);
            break;
        case RECTANGLE:
            painter.setPen(QPen(currentColor, toolW, Qt::SolidLine, Qt::SquareCap, Qt::RoundJoin));
            painter.drawRect(QRect(lastPoint, endPoint));
            break;
        case LINE:
            painter.setPen(QPen(currentColor, toolW, Qt::SolidLine, Qt::FlatCap, Qt::RoundJoin));
            painter.drawLine(lastPoint, endPoint);
            break;
        case ELLIPSE:
            painter.setPen(QPen(currentColor, toolW, Qt::SolidLine, Qt::FlatCap, Qt::RoundJoin));
            painter.drawEllipse(QRect(lastPoint, endPoint));
            break;
        case ROUNDEDRECT:
            painter.setPen(QPen(currentColor, toolW, Qt::SolidLine, Qt::SquareCap, Qt::RoundJoin));
            painter.drawRoundedRect(QRect(lastPoint, endPoint), 4, 4);
            break;
        case TEXT:
            if (!isFontSet) {
                setTextFont();
            }
            painter.setPen(currentColor);
            QString text = QInputDialog::getText(this, "Paint text tool", "Enter your text: ");
            painter.setFont(textFont);
            painter.drawText(endPoint, text);
            update(QRect(QPoint(0, 0), QPoint(this->image.size().width(), this->image.size().height())));
            break;
    }

    // Set that the image hasn't been saved
    modified = true;

    int rad = (toolW / 2) + 2;

    // Call to update the rectangular space where we drew
    update(QRect(lastPoint, endPoint).normalized()
                                     .adjusted(-rad, -rad, +rad, +rad));

    // Update the last position where we left off drawing
    lastPoint = endPoint;
}

// When the app is resized create a new image using
// the changes made to the image
void ScribbleArea::resizeImage(QImage *image, const QSize &newSize)
{
    // Check if we need to redraw the image
    if (image->size() == newSize)
        return;

    // Create a new image to display and fill it with white
    QImage newImage(newSize, QImage::Format_RGB32);
    newImage.fill(qRgb(255, 255, 255));

    // Draw the image
    QPainter painter(&newImage);
    painter.drawImage(QPoint(0, 0), *image);
    *image = newImage;
}

// Print the image
void ScribbleArea::print()
{
    // Check for print dialog availability
#if QT_CONFIG(printdialog)

    // Can be used to print
    QPrinter printer(QPrinter::HighResolution);

    // Open printer dialog and print if asked
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Accepted) {
        QPainter painter(&printer);
        QRect rect = painter.viewport();
        QSize size = image.size();
        size.scale(rect.size(), Qt::KeepAspectRatio);
        painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
        painter.setWindow(image.rect());
        painter.drawImage(0, 0, image);
    }
#endif // QT_CONFIG(printdialog)
}
