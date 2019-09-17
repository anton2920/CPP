#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "bigint.h"

enum dim {
    size = 10
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->centralwidget->setStyleSheet("QWidget {background-color : white; font : 30pt \"Noto Sans\";}");
    ui->label->setStyleSheet("QLabel {background-color : gray; color : orange}");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_label_clicked()
{
    /* Initializing variables */
    Dodecahedron::Bigint number;

    /* Main part */
    number = ui->label->text().toLongLong();
    ui->label->setText(QString::fromStdString(Dodecahedron::to_string(number + 1)));
}

void MainWindow::on_factBtn_clicked()
{
    /* Initializing variables */
    Dodecahedron::Bigint fact;

    /* Main part */
    fact = Dodecahedron::factorial(14);

    ui->label->setText(QString::fromStdString(Dodecahedron::to_string(fact)));
}

