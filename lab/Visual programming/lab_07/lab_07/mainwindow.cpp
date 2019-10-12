#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked() {

    /* Initializing variables */
    auto correct = true;

    /* Main part */
    ui->checkBox_F1->setStyleSheet(styleSheet());
    ui->checkBox_F2->setStyleSheet(styleSheet());
    ui->checkBox_Fara->setStyleSheet(styleSheet());
    ui->checkBox_A->setStyleSheet(styleSheet());
    ui->checkBox_N->setStyleSheet(styleSheet());
    ui->checkBox_Newt->setStyleSheet(styleSheet());
    ui->radioButton_corr->setStyleSheet(styleSheet());
    ui->radioButton_2->setStyleSheet(styleSheet());
    ui->radioButton_3->setStyleSheet(styleSheet());
    ui->radioButton_4->setStyleSheet(styleSheet());

    if (ui->checkBox_F1->isChecked()) {
        ui->checkBox_F1->setStyleSheet(" QCheckBox {background-color : red} ");
        correct = false;
    }

    if (ui->checkBox_F2->isChecked()) {
        ui->checkBox_F2->setStyleSheet(" QCheckBox {background-color : red} ");
        correct = false;
    }

    if (ui->checkBox_Fara->isChecked()) {
        ui->checkBox_Fara->setStyleSheet(" QCheckBox {background-color : red} ");
        correct = false;
    }

    if (ui->checkBox_Newt->isChecked()) {
        ui->checkBox_Newt->setStyleSheet(" QCheckBox {background-color : red} ");
        correct = false;
    }

    if (ui->radioButton_2->isChecked()) {
        ui->radioButton_2->setStyleSheet(" QRadioButton {background-color : red} ");
        correct = false;
    }

    if (ui->radioButton_3->isChecked()) {
        ui->radioButton_3->setStyleSheet(" QRadioButton {background-color : red} ");
        correct = false;
    }

    if (ui->radioButton_4->isChecked()) {
        ui->radioButton_4->setStyleSheet(" QRadioButton {background-color : red} ");
        correct = false;
    }

    if (ui->checkBox_A->isChecked()) {
        ui->checkBox_A->setStyleSheet(" QCheckBox {background-color : green} ");
    }

    if (ui->checkBox_N->isChecked()) {
        ui->checkBox_N->setStyleSheet(" QCheckBox {background-color : green} ");
    }

    if (ui->radioButton_corr->isChecked()) {
        ui->radioButton_corr->setStyleSheet(" QRadioButton {background-color : green} ");
    }

    if (correct) {
        QMessageBox::about(this, "Congrats!", "The formulas and the answer are correct!");
    } else {
        QMessageBox::critical(this, "Error!", "Something is wrong. Try harder!");
    }
}
