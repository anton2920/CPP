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
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_pm_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_sqrt_clicked();

    void on_pushButton_sqr_clicked();

    void on_pushButton_shift_clicked();

    void on_actionDegrees_triggered();

    void on_actionRadians_triggered();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_sin_2_clicked();

    void on_pushButton_tan_2_clicked();

    void on_pushButton_cos_2_clicked();

    void on_pushButton_pi_clicked();

    void on_pushButton_10n_clicked();

    void on_pushButton_fact_clicked();

    void on_pushButton_recip_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_ce_clicked();

    void on_pushButton_mr_clicked();

    void on_pushButton_mp_clicked();

    void on_pushButton_mmin_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_min_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_sqrt_2_clicked();

    void on_pushButton_sqr_2_clicked();

    void on_pushButton_equals_clicked();

    void on_actionQuit_triggered();

    void on_actionAbout_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_pushButton_percent_clicked();

private:
    Ui::MainWindow *ui;

    void press_btn(int num);

    void ravno2();
};
#endif // MAINWINDOW_H
