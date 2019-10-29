#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QColorDialog>
#include <QFontDialog>

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

void MainWindow::on_pushButton_info_clicked() {

    /* Main part */
    QMessageBox::information(this, "Information", "Some kind of information", QMessageBox::Abort | QMessageBox::Retry | QMessageBox::Ignore, QMessageBox::Abort);
}

void MainWindow::on_pushButton_none_clicked() {

    /* Initializing variables */
    QMessageBox bx(QMessageBox::NoIcon, "None", "Some kind of nothing", QMessageBox::Ok | QMessageBox::Cancel, this, Qt::Dialog);

    /* Main part */
    bx.exec();

}

void MainWindow::on_pushButton_quest_clicked() {

    /* Main part */
    QMessageBox::question(this, "Question", "Some kind of question", QMessageBox::Retry | QMessageBox::Cancel, QMessageBox::Retry);
}

void MainWindow::on_pushButton_stop_clicked() {

    /* Main part */
    QMessageBox::critical(this, "Stop", "Some kind of critical", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

void MainWindow::on_pushButton_wrning_clicked() {

    /* Main part */
    QMessageBox::warning(this, "Warning", "Some kind of warning", QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel, QMessageBox::Yes);
}

void MainWindow::on_pushButton_font_clicked() {

    /* Initializing variables */
    QFontDialog fd;

    /* Main part */
    fd.setOptions(QFontDialog::FontDialogOption::ScalableFonts |
                  QFontDialog::FontDialogOption::NonScalableFonts |
                  QFontDialog::FontDialogOption::MonospacedFonts |
                  QFontDialog::FontDialogOption::ProportionalFonts);
    ui->textEdit->setFont(fd.getFont(nullptr, ui->textEdit->font()));
}

void MainWindow::on_pushButton_clr_clicked() {

    /* Initializing variables */
    QColorDialog cd;

    /* Main part */
    cd.setOptions(QColorDialog::ShowAlphaChannel);
    ui->textEdit->setTextColor(cd.getColor());
}
