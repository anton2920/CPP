#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "clickablelabel.h"
#include "my_frame.h"
#include <QMessageBox>
#include <QTimer>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&MainWindow::on_label_timer_second));

    ui->setupUi(this);

    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);

    ui->label->setStyleSheet( " QFrame { color : red} " );
    ui->label_7->setStyleSheet( " QFrame { color : orange } " );
    ui->label_2->setStyleSheet( " QFrame { color : yellow } " );
    ui->label_6->setStyleSheet( " QFrame { color : green } " );
    ui->label_3->setStyleSheet( " QFrame { color : cyan } " );
    ui->label_5->setStyleSheet( " QFrame { color : blue } " );
    ui->label_4->setStyleSheet( " QFrame { color : purple } " );

    ui->frame->setMouseTracking(true);
    ui->label_c4->setMouseTracking(true);
    ui->label_timer->setMouseTracking(true);
    ui->label->setMouseTracking(true);
    ui->label_2->setMouseTracking(true);
    ui->label_3->setMouseTracking(true);
    ui->label_4->setMouseTracking(false);
    ui->label_5->setMouseTracking(false);
    ui->label_6->setMouseTracking(false);
    ui->label_7->setMouseTracking(false);

    connect(ui->frame, SIGNAL(moved()), this, SLOT(on_frame_moved()));
    connect(ui->frame, SIGNAL(left()), this, SLOT(on_frame_left()));

    generate_correct();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_spinBox_valueChanged(int arg1) {

    /* Main part */
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);

    switch (arg1) {
        case 1:
            ui->label->setVisible(true);
            break;
        case 2:
            ui->label->setVisible(true);
            ui->label_2->setVisible(true);
            break;
        case 3:
            ui->label->setVisible(true);
            ui->label_2->setVisible(true);
            ui->label_3->setVisible(true);
            break;
        case 4:
            ui->label->setVisible(true);
            ui->label_2->setVisible(true);
            ui->label_3->setVisible(true);
            ui->label_4->setVisible(true);
            break;
        case 5:
            ui->label->setVisible(true);
            ui->label_2->setVisible(true);
            ui->label_3->setVisible(true);
            ui->label_4->setVisible(true);
            ui->label_5->setVisible(true);
            break;
        case 6:
            ui->label->setVisible(true);
            ui->label_2->setVisible(true);
            ui->label_3->setVisible(true);
            ui->label_4->setVisible(true);
            ui->label_5->setVisible(true);
            ui->label_6->setVisible(true);
            break;
        case 7:
            ui->label->setVisible(true);
            ui->label_2->setVisible(true);
            ui->label_3->setVisible(true);
            ui->label_4->setVisible(true);
            ui->label_5->setVisible(true);
            ui->label_6->setVisible(true);
            ui->label_7->setVisible(true);
            break;
    }

    generate_correct();
}

void MainWindow::on_frame_moved() {

    /* Initializing variables */
    int val;
    auto rect = ui->label_c4->geometry();
    struct {
        int x, y;
    } cent;
    double VAL = length(rect.x(), rect.y(), rect.x() + rect.width(), rect.y() + rect.height());
    cent.x = rect.x() + rect.width() / 2;
    cent.y = rect.y() + rect.height() / 2;

    /* Main part */
    if ((ui->frame->x > rect.x() && ui->frame->x < rect.x() + rect.width()) &&
            (ui->frame->y > rect.y() && ui->frame->y < rect.y() + rect.height())) {
        val = 100;
    } else {
        try {
            val = static_cast<int>(VAL / 2 * 100 / length(ui->frame->x, ui->frame->y, cent.x, cent.y));
        } catch (...) {
            val = 0;
        }
    }
    ui->progressBar->setValue(abs(val));

    if (!timer->isActive()) {
        on_label_timer_second();
        ui->spinBox->setEnabled(false);
        timer->start(1000);
    }
}

void MainWindow::on_frame_left() {

    /* Main part */
    ui->progressBar->setValue(0);
}

void MainWindow::label_c4_timeout() {

    /* Main part */
    ui->frame->setVisible(false);
    QMessageBox::critical(this, "Whoops!", "The bomb blew up!");

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Game", "Do you want to start a new game?");
    if (reply == QMessageBox::Yes) {
        ui->frame->setVisible(true);
        timer->stop();
        on_frame_left();
        ui->label_timer->setText("10");
        ui->spinBox->setEnabled(true);
    } else {
        this->close();
    }
}

void MainWindow::generate_correct() {

    /* Main part */
    correct_wire = (rand() % (ui->spinBox->value()) + 1);
}

int MainWindow::getCorrect() {

    /* Returning value */
    return correct_wire;
}

void MainWindow::on_label_timer_second() {

    /* Initializing variables */
    int sec = ui->label_timer->text().toInt();

    /* Main part */
    if (--sec) {
        ui->label_timer->setText(QString::number(sec));
    } else {
        label_c4_timeout();
    }
}

double MainWindow::length(int x, int y, int x2, int y2) {

    /* Returning value */
    return sqrt(((x2 - x) * (x2 - x)) + ((y2 - y) * (y2 - y)));
}

void MainWindow::win_game() {

    /* Main part */
    timer->stop();
    QMessageBox::information(this, "Congratulations!", "You've successfully diasarmed the bomb!");

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Game", "Do you want to start a new game?");
    if (reply == QMessageBox::Yes) {
        on_frame_left();
        ui->label_timer->setText("10");
        ui->spinBox->setEnabled(true);
        generate_correct();
    } else {
        this->close();
    }
}

void MainWindow::on_label_c4_clicked() {

    /* Main part */
    timer->stop();
    QMessageBox::information(this, "Ugh!", "You've clicked on the bomb!");
    label_c4_timeout();
}

void MainWindow::on_label_clicked() {

    /* Main part */
    if (correct_wire == 1) {
        win_game();
    } else {
        label_c4_timeout();
    }
}

void MainWindow::on_label_2_clicked() {

    /* Main part */
    if (correct_wire == 2) {
        win_game();
    } else {
        label_c4_timeout();
    }
}

void MainWindow::on_label_3_clicked() {

    /* Main part */
    if (correct_wire == 3) {
        win_game();
    } else {
        label_c4_timeout();
    }
}

void MainWindow::on_label_4_clicked() {

    /* Main part */
    if (correct_wire == 4) {
        win_game();
    } else {
        label_c4_timeout();
    }
}

void MainWindow::on_label_5_clicked() {

    /* Main part */
    if (correct_wire == 5) {
        win_game();
    } else {
        label_c4_timeout();
    }
}

void MainWindow::on_label_6_clicked() {

    /* Main part */
    if (correct_wire == 6) {
        win_game();
    } else {
        label_c4_timeout();
    }
}

void MainWindow::on_label_7_clicked() {

    /* Main part */
    if (correct_wire == 7) {
        win_game();
    } else {
        label_c4_timeout();
    }
}
