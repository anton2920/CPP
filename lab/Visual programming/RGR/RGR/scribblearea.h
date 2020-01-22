#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>
#include <QFontDialog>

class ScribbleArea : public QWidget
{
    Q_OBJECT
public:

    enum tool {
        PEN,
        BRUSH,
        ERASER,
        RECTANGLE,
        LINE,
        ELLIPSE,
        ROUNDEDRECT,
        TEXT
    };

    explicit ScribbleArea(QWidget *parent = nullptr);

    // Handles all events
    bool openImage(const QString &fileName);
    bool saveImage(const QString &fileName, const char *fileFormat);
    void setPenColor(const QColor &newColor);
    void setPen2ndColor(const QColor &newColor);
    void setPenWidth(int newWidth);
    void setTool(tool T);

    // Has the image been modified since last save
    bool isModified() const { return modified; }
    QColor penColor() const { return toolClr; }
    int penWidth() const { return toolW; }

    void setTextFont() {
        textFont = QFontDialog::getFont(&isFontSet, this);
    }

public slots:

    // Events to handle
    void clearImage();
    void print();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    // Updates the scribble area where we are painting
    void paintEvent(QPaintEvent *event) override;

    // Makes sure the area we are drawing on remains
    // as large as the widget
    void resizeEvent(QResizeEvent *event) override;

private:
    void drawLineTo(const QPoint &endPoint);
    void resizeImage(QImage *image, const QSize &newSize);

    // Will be marked true or false depending on if
    // we have saved after a change
    bool modified;

    // Marked true or false depending on if the user
    // is drawing
    bool scribbling;

    // Holds the current pen width & color
    tool T;
    int toolW;
    QColor currentColor;
    QColor toolClr;
    QColor tool2ndClr;

    QFont textFont;
    bool isFontSet;

    // Stores the image being drawn
    QImage image;

    // Stores the location at the current mouse event
    QPoint startPoint;
    QPoint lastPoint;
};

#endif // SCRIBBLEAREA_H
