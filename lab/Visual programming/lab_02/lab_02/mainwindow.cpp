#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowOpacity(0.5);
    this->setFixedSize(300, 300);
    this->setWindowTitle("Pavlovsky");
}

MainWindow::~MainWindow()
{
    delete ui;
}

