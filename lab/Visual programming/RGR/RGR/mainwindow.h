#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "my_frame.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class ScribbleArea;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_actionAbout_Qt_triggered();

    void on_actionAbout_Paint_triggered();

    void open();

    void save();

    void penColor();

    void penWidth();

    void on_pushButton_brush_clicked();

    void on_pushButton_pencil_clicked();

    void on_actionSet_Line_Width_triggered();

    void on_pushButton_eraser_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionTool_box_triggered();

    void on_actionColor_Box_triggered();

    void on_actionStatus_Bar_triggered();

    void on_frame_black_clicked(my_frame *frame);

    void on_frame_black_clicked_right(my_frame *frame);

    void on_pushButton_rectangle_clicked();

    void on_pushButton_line_clicked();

    void on_pushButton_ellipse_clicked();

    void on_pushButton_rounded_rectangle_clicked();

    void on_pushButton_text_clicked();

    void on_actionClear_image_triggered();

    void on_actionSet_Text_Font_triggered();

private:
    // Will check if changes have occurred since last save
    bool maybeSave();

    // Opens the Save dialog and saves
    bool saveFile(const QByteArray &fileFormat);

    // What we'll draw on
    ScribbleArea *scribbleArea;

    // The menu widgets
    QMenu *saveAsMenu;
    QMenu *fileMenu;
    QMenu *optionMenu;
    QMenu *helpMenu;

    // All the actions that can occur
    QAction *openAct;

    // Actions tied to specific file formats
    QList<QAction *> saveAsActs;
    QAction *exitAct;
    QAction *penColorAct;
    QAction *penWidthAct;
    QAction *printAct;
    QAction *clearScreenAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

    void clear_btn_selection();

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
