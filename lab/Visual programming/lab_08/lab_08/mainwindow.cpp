#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {

    delete ui;
}


void MainWindow::on_pushButton_clicked() {

    /* Initializing variables */
    QString text = "";

    /* Main part */
    if (check_f()) {
        if (ui->radioButton_u->isChecked()) {
            if (ui->checkBox_b->isChecked()) {
                text += "Buying " + QString::number(ui->spinBox->value()) + " USD will cost " +
                        QString::number(ui->lineEdit_b_u->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }
            if (ui->checkBox_s->isChecked()) {
                text += "Selling " + QString::number(ui->spinBox->value()) + " USD will сost " +
                        QString::number(ui->lineEdit_s_u->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }

            if (!ui->checkBox_b->isChecked() && !ui->checkBox_s->isChecked()) {
                ui->label_ans->setText("");
            }
        } else if (ui->radioButton_e->isChecked()) {
            if (ui->checkBox_b->isChecked()) {
                text += "Buying " + QString::number(ui->spinBox->value()) + " EUR will cost " +
                        QString::number(ui->lineEdit_b_e->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }
            if (ui->checkBox_s->isChecked()) {
                text += "Selling " + QString::number(ui->spinBox->value()) + " EUR will сost " +
                        QString::number(ui->lineEdit_s_e->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }

            if (!ui->checkBox_b->isChecked() && !ui->checkBox_s->isChecked()) {
                ui->label_ans->setText("");
            }
        } else if (ui->radioButton_g->isChecked()) {
            if (ui->checkBox_b->isChecked()) {
                text += "Buying " + QString::number(ui->spinBox->value()) + " GBP will cost " +
                        QString::number(ui->lineEdit_b_g->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }
            if (ui->checkBox_s->isChecked()) {
                text += "Selling " + QString::number(ui->spinBox->value()) + " GBP will сost " +
                        QString::number(ui->lineEdit_s_g->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }

            if (!ui->checkBox_b->isChecked() && !ui->checkBox_s->isChecked()) {
                ui->label_ans->setText("");
            }
        } else if (ui->radioButton_c->isChecked()) {
            if (ui->checkBox_b->isChecked()) {
                text += "Buying " + QString::number(ui->spinBox->value()) + " CNY will cost " +
                        QString::number(ui->lineEdit_b_c->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }
            if (ui->checkBox_s->isChecked()) {
                text += "Selling " + QString::number(ui->spinBox->value()) + " CNY will сost " +
                        QString::number(ui->lineEdit_s_c->text().toDouble() * static_cast<double>(ui->spinBox->value())) + "\n";
                ui->label_ans->setText(text);
            }

            if (!ui->checkBox_b->isChecked() && !ui->checkBox_s->isChecked()) {
                ui->label_ans->setText("");
            }
        } else {
            ui->label_ans->setText("");
        }
    }
}

bool MainWindow::check_l(const QString &str) {

    /* Initializing variables */
    int cnt = 0;

    /* Main part */
    for (std::size_t i = 0; i < str.length(); ++i) {
        if (!isdigit(str.toLocal8Bit().data()[i]) && str.toLocal8Bit().data()[i] != '.') {
            return false;
        } else if (str.toLocal8Bit().data()[i] != '.') {
            ++cnt;
        }
    }

    if (cnt == 1) {
        return true;
    }
}

bool MainWindow::check_f() {

    /* Main part */
    if (check_l(ui->lineEdit_b_c->text()) && check_l(ui->lineEdit_b_e->text()) && check_l(ui->lineEdit_b_g->text()) &&
            check_l(ui->lineEdit_b_u->text()) && check_l(ui->lineEdit_s_c->text()) && check_l(ui->lineEdit_s_e->text()) &&
            check_l(ui->lineEdit_s_g->text()) && check_l(ui->lineEdit_s_u->text())) {
        return true;
    } else {
        QMessageBox::critical(this, "Error!", "Error!");
        return false;
    }
}
