#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>

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
    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    enum consts {
        RECORDS = 11,
        VALUE = 1,
        START_VALUE = 0
    };

    QVector<QString> checkCheck();
};
#endif // MAINWINDOW_H
