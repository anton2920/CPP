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
    void on_pushButton_pics_clicked();

    void on_pushButton_nums_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void onTimerTimeout();

private:
    Ui::MainWindow *ui;
    QVector<QVector<QString>> *v;

    int mode = 0;
    int correct = 0;

    void getNext();
    QString getPicture(int index);
    int random(int l, int r); /* [l, r] */

    std::pair<QObject *, int> getRandomRadio();
    bool checkRbtn();

    inline void init_and_start_timer();
    QTimer *timer;
    std::time_t secs;
    const std::time_t init_time = 30;
};
#endif // MAINWINDOW_H
