#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <cstring>
#include <QMessageBox>
#include <regex>

bool containDigit(const char *);
bool checkEmail(const char *);

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


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_clicked() {

    /* Initializing variables */
    bool check[7] = {true, true, false, true, true, true, true};
    QString str = "Error in:";

    /* Main part */
    check[0] = containDigit(ui->lineFN->text().toLocal8Bit().data()) || (ui->lineFN->text() == ""); /* First name */
    check[1] = containDigit(ui->lineLN->text().toLocal8Bit().data()) || (ui->lineLN->text() == ""); /* Last name */

    check[2] = checkEmail(ui->lineEmail->text().toLocal8Bit().data()); /* Email */

    check[3] = ui->lineFaculty->hasAcceptableInput(); /* Faculty */

    check[4] = ui->lineGroup->hasAcceptableInput(); /* Group */

    check[5] = ui->linePnone->hasAcceptableInput(); /* Phone */

    if (ui->lineAddress->text() == "") {
        check[6] = false; /* Address */
    }


    if (check[0] || check[1] || !check[2] || !check[3] || !check[4] || !check[5] || !check[6]) {
        QMessageBox::critical(this, "Aw, shit!", "Some fields contain inappropriate data!", QMessageBox::Yes);
        if (check[0]) {
            str += " First name (digits) ";
        }
        if (check[1]) {
            str += " Last name (digits) ";
        }
        if (!check[2]) {
            str += " Email";
        }
        if (!check[3]) {
            str +=" Faculty ";
        }
        if (!check[4]) {
            str +=" Group ";
        }
        if (!check[5]) {
            str +=" Phone ";
        }
        if (!check[6]) {
            str +=" Address (empty) ";
        }
        ui->statusbar->showMessage(str, 4000);
    } else {
        QMessageBox::information(this, "Oh, yes", "Signed up successfully!", QMessageBox::Apply);
        ui->statusbar->showMessage("Success", 4000);
    }

}

bool containDigit(const char *str) {

    /* Main part */
    for (std::size_t i = 0; i < std::strlen(str); ++i) {
        if (isdigit(*(str + i))) {
            return true;
        }
    }

    /* Returning value */
    return false;
}

bool checkEmail(const char *str) {

    /* Main part */
    const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    /* Returning value */
    return std::regex_match(str, pattern);
}
