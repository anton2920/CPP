#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void moved();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_label_clicked();

    void on_frame_moved();

    void on_frame_left();

    void on_label_timer_second();

    void on_label_c4_clicked();

    void on_label_2_clicked();

    void on_label_3_clicked();

    void on_label_4_clicked();

    void on_label_5_clicked();

    void on_label_6_clicked();

    void on_label_7_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    double length(int x, int y, int x2, int y2);

    void win_game();
    void label_c4_timeout();

    int correct_wire;
    void generate_correct();
    int getCorrect();

    void handle_wire(int wire);
};

#endif // MAINWINDOW_H
