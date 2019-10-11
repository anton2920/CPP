#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_info_clicked();

    void on_pushButton_none_clicked();

    void on_pushButton_quest_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_wrning_clicked();

    void on_pushButton_font_clicked();

    void on_pushButton_clr_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
