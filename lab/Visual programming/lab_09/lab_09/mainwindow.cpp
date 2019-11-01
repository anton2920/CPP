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


void MainWindow::on_spinBox_valueChanged(int arg1) {

    /* Initializing variables */

    /* Main part */
    ui->comboBox->clear();
    if (ui->spinBox->specialValueText() == ui->spinBox->prefix() + "FIT") {
        ui->spinBox->setSpecialValueText(ui->spinBox->prefix() + "FEE");
        ui->comboBox->addItem("GP");
        ui->comboBox->addItem("EE");
    } else if (ui->spinBox->specialValueText() == ui->spinBox->prefix() + "FEE") {
        ui->spinBox->setSpecialValueText(ui->spinBox->prefix() + "MTF");
        ui->comboBox->addItem("PEaS");
        ui->comboBox->addItem("SoEaC");
    } else if (ui->spinBox->specialValueText() == ui->spinBox->prefix() + "MTF") {
        ui->spinBox->setSpecialValueText(ui->spinBox->prefix() + "FIT");
        ui->comboBox->addItem("CSaS");
        ui->comboBox->addItem("CTS");
        ui->comboBox->addItem("FM");
    }

    ui->spinBox->setValue(0);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1) {

    /* Main part */
    ui->listWidget->clear();
    if (arg1 == "CSaS") {
        ui->listWidget->addItem("Programming");
        ui->listWidget->addItem("OOP");
        ui->listWidget->addItem("Visual Programming");
        ui->listWidget->addItem("Structures and Algotirhms of Data processing");
        ui->listWidget->addItem("Calculus");
    } else if (arg1 == "CTS") {
        ui->listWidget->addItem("Information technologies");
        ui->listWidget->addItem("Physics");
        ui->listWidget->addItem("Phylosophy");
        ui->listWidget->addItem("Basics of WEB techs");
        ui->listWidget->addItem("Computer geometry and graphics");
    } else if (arg1 == "FM") {
        ui->listWidget->addItem("Calculus");
        ui->listWidget->addItem("Algebra and geometry");
        ui->listWidget->addItem("Computational math");
    } else if (arg1 == "GP") {
        ui->listWidget->addItem("Physics");
    } else if (arg1 == "EE") {
        ui->listWidget->addItem("Further mathematics");
        ui->listWidget->addItem("Physics");
        ui->listWidget->addItem("Radio and electonic components");
        ui->listWidget->addItem("Basics of circuits theory");
    } else if (arg1 == "PEaS") {
        ui->listWidget->addItem("Physical education");
    } else if (arg1 == "SoEaC") {
        ui->listWidget->addItem("Safety of Existance");
        ui->listWidget->addItem("Chemistry");
    }
}
