#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

#include <QMessageBox>
#include <QSet>
#include <QTimer>

#define TOSEC(expr) ((expr) * 1000)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {

    /* Main part */
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->radioButton->setChecked(true);

    v = new QVector<QVector<QString>>;

    QVector<QString> tmp;

    /* ADR 1 */
    tmp.push_back("ADR class 1");
    tmp.push_back("Explosive substances and articles");
    tmp.push_back("Explosives");
    tmp.push_back("Explosive goods, such as dynamite, fireworks, or ammunition");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 2.1 */
    tmp.push_back("ADR class 2.1");
    tmp.push_back("Flammable gases (e.g. butane, propane, acetylene)");
    tmp.push_back("Flammable gases, for example, acetylene or hydrogen");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 2.2 */
    tmp.push_back("ADR class 2.2");
    tmp.push_back("Non-flammable and non-toxic, likely to cause asphyxiation (e.g. nitrogen, CO2) or oxidisers (e.g. oxygen)");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 2.3 */
    tmp.push_back("ADR class 2.3");
    tmp.push_back("Toxic (e.g. Chlorine, Phosgene)");
    tmp.push_back("Poison gases");
    tmp.push_back("Poisonous gases that may cause death or serious injury if inhaled, e.g., fluorine, chlorine, hydrogen cyanide");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 3 */
    tmp.push_back("ADR class 3");
    tmp.push_back("Flammable liquids");
    tmp.push_back("Include very common, but also very dangerous fuels, such as gasoline, diesel, or kerosene");

    v->push_back(tmp);
    tmp.clear();

    /* ARD 4.1 */
    tmp.push_back("ADR class 4.1");
    tmp.push_back("Flammable solids, self-reactive substances, and solid desensitized explosives");
    tmp.push_back("Flammable solids");
    tmp.push_back("Flammable solids, easily ignited nitrocellulose, magnesium, or safety matches, among others");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 4.2 */
    tmp.push_back("ADR class 4.2");
    tmp.push_back("Substances liable to spontaneous combustion");
    tmp.push_back("Spontaneously combustibles");
    tmp.push_back("Spontaneously combustible aluminium alkyls or white phosphorus");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 4.3 */
    tmp.push_back("ADR class 4.3");
    tmp.push_back("Substances which, in contact with water, emit flammable gases");
    tmp.push_back("Dangerous when wet");
    tmp.push_back("Dangerous when wet are sodium, calcium, potassium");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 5.1 */
    tmp.push_back("ADR class 5.1");
    tmp.push_back("Oxidizing substances");
    tmp.push_back("Oxidizers");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 5.2 */
    tmp.push_back("ADR class 5.2");
    tmp.push_back("Organic peroxides");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 6.1 */
    tmp.push_back("ADR class 6.1");
    tmp.push_back("Toxic substances");
    tmp.push_back("Poison");
    tmp.push_back("Poisons, substances harmful to human health, for instance, potassium cyanide, mercuric chloride, or pesticides");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 6.2 */
    tmp.push_back("ADR class 6.2");
    tmp.push_back("Infectious substances");
    tmp.push_back("Biohazard - infectious materials, virus cultures, used needles, etc.");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 7 */
    tmp.push_back("ADR class 7");
    tmp.push_back("Radioactive material");
    tmp.push_back("Radioactive");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 8 */
    tmp.push_back("ADR class 8");
    tmp.push_back("Corrosive substances");
    tmp.push_back("Corrosive");
    tmp.push_back("Substances that can dissolve organic tissue or severely corrode certain metals");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 9 */
    tmp.push_back("ADR class 9");
    tmp.push_back("Miscellaneous dangerous substances and articles");

    v->push_back(tmp);
    tmp.clear();

    /* ADR 9A */
    tmp.push_back("ADR class 9A");
    tmp.push_back("Lithium Ion Batteries");

    v->push_back(tmp);
    tmp.clear();

    /* Other stuff */
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&MainWindow::onTimerTimeout));
}

MainWindow::~MainWindow() {

    /* Main part */
    delete v;
    delete ui;
}


void MainWindow::on_pushButton_pics_clicked() {

    /* Main part */
    ui->stackedWidget->setCurrentIndex(1);
    ui->label_picnum->setStyleSheet("");
    ui->label_picnum->setText("");
    ui->label_quest_1->setText("What does this pictogram stand for?");
    this->mode = 0;
    this->getNext();

    this->init_and_start_timer();
}

void MainWindow::on_pushButton_nums_clicked() {

    /* Main part */
    ui->stackedWidget->setCurrentIndex(1);
    ui->label_picnum->setStyleSheet("");
    ui->label_picnum->setText("");
    ui->label_quest_1->setText("What does this stand for?");
    this->mode = 1;
    this->getNext();

    this->init_and_start_timer();
}


// image: url(:/assets/1.png);
void MainWindow::getNext() {

    /* Initializing variables */
    int ind;
    QSet<int> used, used2;
    std::pair<QObject *, int> tmp;
    int correct, i;

    /* Main part */
    ind = this->random(0, this->v->size());
    if (!this->mode) {
        ui->label_picnum->setStyleSheet(getPicture(ind));
    } else {
        ui->label_picnum->setText(this->v->operator[](ind)[0]);
    }

    tmp = getRandomRadio();
    used.insert(tmp.second);
    correct = tmp.second;
    reinterpret_cast<QRadioButton *>(tmp.first)->setText(this->v->operator[](ind)[this->random(this->mode, this->v->operator[](ind).size())]);
    used2.insert(ind);

    for ( ; used.size() < 4; ) {
        do {
            i = this->random(0, this->v->size());
        } while (used2.contains(i));

        used2.insert(i);

        do {
            tmp = getRandomRadio();
        } while (used.contains(tmp.second));

        used.insert(tmp.second);
        reinterpret_cast<QRadioButton *>(tmp.first)->setText(this->v->operator[](i)[this->random(this->mode, this->v->operator[](i).size())]);
    }

    this->correct = correct;
}

QString MainWindow::getPicture(int index) {

    /* Initializing variables */
    QString style = "image: url(:/assets/";

    /* Main part */
    switch (index) {
        case 0:
            style += "1.png);";
            break;
        case 1:
            style += "2.1.png);";
            break;
        case 2:
            style += "2.2.png);";
            break;
        case 3:
            style += "2.3.png);";
            break;
        case 4:
            style += "3.png);";
            break;
        case 5:
            style += "4.1.png);";
            break;
        case 6:
            style += "4.2.png);";
            break;
        case 7:
            style += "4.3.png);";
            break;
        case 8:
            style += "5.1.png);";
            break;
        case 9:
            style += "5.2.png);";
            break;
        case 10:
            style += "6.1.png);";
            break;
        case 11:
            style += "6.2.png);";
            break;
        case 12:
            style += "7.png);";
            break;
        case 13:
            style += "8.png);";
            break;
        case 14:
            style += "9.png);";
            break;
        case 15:
            style += "9A.png);";
            break;
        default:
            break;
    }

    /* Returning value */
    return style;
}

int MainWindow::random(int l, int r) {

    /* Main part */
    --r;

    /* Returning value */
    return (std::rand() % (r - l + 1)) + l;
}

std::pair<QObject *, int> MainWindow::getRandomRadio() {

    /* Initializing variables */
    QObject *obj = nullptr;
    int r = this->random(0, 4);

    /* Main part */
    switch (r) {
        case 0:
            obj = ui->radioButton;
            break;
        case 1:
            obj = ui->radioButton_2;
            break;
        case 2:
            obj = ui->radioButton_3;
            break;
        case 3:
            obj = ui->radioButton_4;
            break;
        default:
            break;
    }

    /* Returning value */
    return std::pair<QObject *, int>(obj, r);
}

bool MainWindow::checkRbtn() {

    /* Returning value */
    return (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() || ui->radioButton_3->isChecked() || ui->radioButton_4->isChecked());
}

void MainWindow::init_and_start_timer() {

    /* Main part */
    this->secs = this->init_time;
    this->timer->start(static_cast<int>(TOSEC(1)));
    ui->statusbar->showMessage("Time remaining: " + QString::number(this->secs));
}

void MainWindow::on_pushButton_clicked() {

    /* Initializing variables */
    bool win = false;

    /* Main part */
    if (checkRbtn()) {
        this->timer->stop();
        switch (this->correct) {
            case 0:
                win = ui->radioButton->isChecked();
                break;
            case 1:
                win = ui->radioButton_2->isChecked();
                break;
            case 2:
                win = ui->radioButton_3->isChecked();
                break;
            case 3:
                win = ui->radioButton_4->isChecked();
                break;
            default:
            break;
        }

        if (win) {
//            QMessageBox::information(this, "Congrats!", "This answer is correct!");
        } else {
            QMessageBox::critical(this, "Too bad!", "Correct answer was " + QString::number(this->correct + 1));
        }

        this->getNext();

        this->timer->stop();
        this->init_and_start_timer();
    }
}

void MainWindow::on_pushButton_2_clicked() {

    /* Main part */
    ui->stackedWidget->setCurrentIndex(0);
    timer->stop();
    ui->statusbar->showMessage("");
}

void MainWindow::onTimerTimeout() {

    /* Main part */
    --secs;
    if (!secs) {
        ui->statusbar->showMessage("Time elapsed!");
        this->timer->stop();
        QMessageBox::critical(this, "Time's up!", "Correct answer was " + QString::number(this->correct + 1));
        this->getNext();
        this->init_and_start_timer();
    } else {
        ui->statusbar->showMessage("Time remaining: " + QString::number(this->secs));
    }
}
