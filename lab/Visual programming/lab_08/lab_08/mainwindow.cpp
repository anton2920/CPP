#include "mainwindow.h"
#include "ui_mainwindow.h"

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
