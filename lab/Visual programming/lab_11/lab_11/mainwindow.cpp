#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_listWidget_currentTextChanged(const QString &currentText) {

    /* Main part */
    if (currentText == "Der Ring des Nibelungen") {
        ui->textBrowser->setText("WWV 86, is a cycle of four German-language epic music dramas composed by Richard Wagner. The works are based loosely on characters from the Norse sagas and the Nibelungenlied. The composer termed the cycle a \"Bühnenfestspiel\" (stage festival play), structured in three days preceded by a Vorabend (\"preliminary evening\"). It is often referred to as the Ring cycle, Wagner's Ring, or simply The Ring.");
    } else if (currentText == "Symphony No. 9 (Dvořák)") {
        ui->textBrowser->setText("The Symphony No. 9 in E minor, \"From the New World\", Op. 95, B. 178 (Czech: Symfonie č. 9 e moll „Z nového světa“), popularly known as the New World Symphony, was composed by Antonín Dvořák in 1893 while he was the director of the National Conservatory of Music of America from 1892 to 1895. It has been described as one of the most popular of all symphonies.");
    }
}
