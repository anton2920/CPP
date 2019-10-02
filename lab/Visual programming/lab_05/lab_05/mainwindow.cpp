#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <cmath>
#include <QtMath>

enum consts {
    MAX = 100
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("1");
    } else {
        ui->label->setText(ui->label->text() + "1");
    }
}

void MainWindow::on_pushButton_2_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("2");
    } else {
        ui->label->setText(ui->label->text() + "2");
    }
}

void MainWindow::on_pushButton_3_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("3");
    } else {
        ui->label->setText(ui->label->text() + "3");
    }
}

void MainWindow::on_pushButton_4_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("4");
    } else {
        ui->label->setText(ui->label->text() + "4");
    }
}

void MainWindow::on_pushButton_5_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("5");
    } else {
        ui->label->setText(ui->label->text() + "5");
    }
}

void MainWindow::on_pushButton_6_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("6");
    } else {
        ui->label->setText(ui->label->text() + "6");
    }
}

void MainWindow::on_pushButton_7_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("7");
    } else {
        ui->label->setText(ui->label->text() + "7");
    }
}

void MainWindow::on_pushButton_8_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("8");
    } else {
        ui->label->setText(ui->label->text() + "8");
    }
}

void MainWindow::on_pushButton_9_clicked() {

    /* Main part */
    if (ui->label->text() == "0") {
        ui->label->setText("9");
    } else {
        ui->label->setText(ui->label->text() + "9");
    }
}

void MainWindow::on_pushButton_clicked() {

    /* Main part */
    if (ui->label->text() != "0") {
        ui->label->setText(ui->label->text() + "0");
    }
}

void MainWindow::on_pushButton_pm_clicked() {

    /* Initializing variables */
    double num;
    QString text;

    /* Main part */
    num = ui->label->text().toDouble();
    text.sprintf("%e", -num);
    ui->label->setText(text);
}

void MainWindow::on_pushButton_dot_clicked() {

    /* Main part */
    if (!ui->label->text().contains('.')) {
        ui->label->setText(ui->label->text() + ".");
    }
}

void MainWindow::on_pushButton_clear_clicked() {

    /* Main part */
    ui->label->setText("0");
}

void MainWindow::on_pushButton_sqrt_clicked() {

    /* Initializing variables */
    QString text;

    /* Main part */
    if (ui->label->text() != "Error") {
        if (ui->label->text() != "0" && !ui->label->text().contains('-')) {
            text.sprintf("%e", std::sqrt(ui->label->text().toDouble()));
            ui->label->setText(text);
        } else if (ui->label->text().contains('-')) {
            ui->label->setText("Error");
        }
    }
}

void MainWindow::on_pushButton_sqr_clicked() {

    /* Initializing variables */
    QString text;

    /* Main part */
    if (!ui->label->text().contains('.')) {
        text.sprintf("%ld", ui->label->text().toLong() * ui->label->text().toLong());
        ui->label->setText(text);
    } else if (ui->label->text() != "0") {
        text.sprintf("%e", ui->label->text().toDouble() * ui->label->text().toDouble());
        ui->label->setText(text);
    }
}
