#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bigint.h"

#include <iostream>
#include <cmath>
#include <QtMath>
#include <QClipboard>
#include <QMessageBox>

auto constexpr ERROR_MSG = "Error";

enum consts {
    MAX = 100
};

/* Global variables */
static double a = 0.0, b = 0.0, d = 0.0; /* For calculations */
static char znak = '\0'; /* For sign */
static int zap = 0; /* For decimal separator */
static double r = 0.0; /* For correct calculating */
static int lnt = 0; /* For continous calculations */
static double pamat = 0.0; /* For enabling memory */
static int pamat2 = 0; /* For memory clean-up checking */
static int shift = 0; /* For «Shift» btn */

/* The next block of variables are used for «Exp» btn and related calculations */
static int m_exp = 0, m_exp3 = 0, m_exp4 = 0, m_exp5 = 0, m_exp8 = 0, m_exp9 = 0, m_exp10 = 1, m_pamat3 = 0, m_exp11 = 0, m_exp13 = 0, m_lnt2 = 0;
static double m_exp2 = 0.0;
static std::string m_exp7 = "";

static const double nPI = 3.1415926535897932384626433832795;

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

void MainWindow::on_pushButton_1_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "1");
            } else {
                ui->label->setText("1");
            }

            if (lnt == 1) {
                ui->label->setText("1");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("1");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "1");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_2_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "2");
            } else {
                ui->label->setText("2");
            }

            if (lnt == 1) {
                ui->label->setText("2");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("2");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "2");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_3_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "3");
            } else {
                ui->label->setText("3");
            }

            if (lnt == 1) {
                ui->label->setText("3");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("3");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "3");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_4_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "4");
            } else {
                ui->label->setText("4");
            }

            if (lnt == 1) {
                ui->label->setText("4");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("4");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "4");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_5_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "5");
            } else {
                ui->label->setText("5");
            }

            if (lnt == 1) {
                ui->label->setText("5");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("5");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "5");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_6_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "6");
            } else {
                ui->label->setText("6");
            }

            if (lnt == 1) {
                ui->label->setText("6");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("6");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "6");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_7_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "7");
            } else {
                ui->label->setText("7");
            }

            if (lnt == 1) {
                ui->label->setText("7");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("7");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "7");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_8_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "8");
            } else {
                ui->label->setText("8");
            }

            if (lnt == 1) {
                ui->label->setText("8");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("8");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "8");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_9_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp3 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "9");
            } else {
                ui->label->setText("9");
            }

            if (lnt == 1) {
                ui->label->setText("9");
                lnt = 0;
            }
            if (pamat2 == 1 || m_pamat3 == 1) {
                ui->label->setText("9");
                pamat2 = 0;
                m_pamat3 = 0;
            }
        } else {
            ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
            ui->label->setText(ui->label->text() + "9");
            m_exp3 = 0;
            m_exp4 = 0;
        }
    }
}

void MainWindow::on_pushButton_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (m_exp4 != 1) {
            if (ui->label->text() != "0") {
                ui->label->setText(ui->label->text() + "0");
                if (lnt == 1) {
                    ui->label->setText("0");
                    lnt = 0;
                }
            }
        }
    }
}

void MainWindow::on_pushButton_pm_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        ui->label->setText(QString::number(ui->label->text().toDouble() * -1));
    }
}

void MainWindow::on_pushButton_dot_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (!ui->label->text().contains('.') && !zap) {
            ui->label->setText(ui->label->text() + ".");
            zap = 1;
        }
    }
}

void MainWindow::on_pushButton_clear_clicked() {

    /* Initializng variables */
    a = 0;
    b = 0;
    d = 0;
    znak = 0;
    zap = 0;
    r = 0;
    lnt = 0;
    pamat2 = 0;
    m_exp = 0;
    m_exp2 = 0;
    m_exp3 = 0;
    m_exp4 = 0;
    m_exp5 = 0;
    m_exp7 = "";
    m_exp8 = 0;
    m_exp9 = 0;
    m_exp11 = 0;
    ui->label->setText("0");
}

void MainWindow::on_pushButton_sqrt_clicked() {

    /* Initializing variables */
    auto val = ui->label->text().toDouble();

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (val < 0) {
            ui->label->setText(ERROR_MSG);
        } else {
            ui->label->setText(QString::number(pow(val, 0.5)));
        }
    }
}

void MainWindow::on_pushButton_sqr_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        ui->label->setText(QString::number(ui->label->text().toDouble() * ui->label->text().toDouble()));
    }
}

void MainWindow::ravno2() {

    /* Initializing variables */
    if (ui->label->text() != ERROR_MSG) {
        b = ui->label->text().toDouble();

        /* Main part */
        switch (znak) {
            case '+':
                d = a + b;
                break;
            case '-':
                d = a - b;
                break;
            case '*':
                d = a * b;
                break;
            case '/':
                if (b == 0.0) {
                    ui->label->setText(ERROR_MSG);
                } else {
                    d = a / b;
                }
                break;
            default:
                break;
        }

        ui->label->setText(QString::number(d));
    }
}

void MainWindow::on_pushButton_shift_clicked() {

    /* Main part */
    if (ui->pushButton_shift->isChecked()) {
        ui->pushButton_sin->setVisible(false);
        ui->pushButton_cos->setVisible(false);
        ui->pushButton_tan->setVisible(false);
        ui->pushButton_sqr->setVisible(false);
        ui->pushButton_sqrt->setVisible(false);

        ui->pushButton_sin_2->setVisible(true);
        ui->pushButton_cos_2->setVisible(true);
        ui->pushButton_tan_2->setVisible(true);
        ui->pushButton_sqr_2->setVisible(true);
        ui->pushButton_sqrt_2->setVisible(true);
    } else {
        ui->pushButton_sin->setVisible(true);
        ui->pushButton_cos->setVisible(true);
        ui->pushButton_tan->setVisible(true);
        ui->pushButton_sqr->setVisible(true);
        ui->pushButton_sqrt->setVisible(true);

        ui->pushButton_sin_2->setVisible(false);
        ui->pushButton_cos_2->setVisible(false);
        ui->pushButton_tan_2->setVisible(false);
        ui->pushButton_sqr_2->setVisible(false);
        ui->pushButton_sqrt_2->setVisible(false);
    }
}

void MainWindow::on_actionDegrees_triggered()
{
    ui->actionDegrees->setChecked(true);
    ui->actionRadians->setChecked(false);
}

void MainWindow::on_actionRadians_triggered()
{
    ui->actionDegrees->setChecked(false);
    ui->actionRadians->setChecked(true);
}

void MainWindow::on_pushButton_sin_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (ui->actionDegrees->isChecked()) {
            d = (ui->label->text().toDouble() * nPI) / 180.0;
        } else {
            d = ui->label->text().toDouble();
        }

        ui->label->clear();
        ui->label->setText(QString::number(sin(d)));
    }
}

void MainWindow::on_pushButton_cos_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (ui->actionDegrees->isChecked()) {
            d = (ui->label->text().toDouble() * nPI) / 180.0;
        } else {
            d = ui->label->text().toDouble();
        }

        ui->label->clear();
        ui->label->setText(QString::number(cos(d)));
    }
}

void MainWindow::on_pushButton_tan_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (ui->actionDegrees->isChecked()) {
            d = (ui->label->text().toDouble() * nPI) / 180.0;
        } else {
            d = ui->label->text().toDouble();
        }

        ui->label->clear();
        ui->label->setText(QString::number(tan(d)));
    }
}

void MainWindow::on_pushButton_sin_2_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        d = asin(ui->label->text().toDouble());
        if (ui->actionDegrees->isChecked()) {
            d = (d * 180) / nPI;
        }
        ui->label->setText(QString::number(d));
    }
}

void MainWindow::on_pushButton_tan_2_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        d = atan(ui->label->text().toDouble());
        if (ui->actionDegrees->isChecked()) {
            d = (d * 180) / nPI;
        }
        ui->label->setText(QString::number(d));
    }
}

void MainWindow::on_pushButton_cos_2_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        d = acos(ui->label->text().toDouble());
        if (ui->actionDegrees->isChecked()) {
            d = (d * 180) / nPI;
        }
        ui->label->setText(QString::number(d));
    }
}

void MainWindow::on_pushButton_pi_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        ui->label->setText(QString::number(nPI));
    }
}

void MainWindow::on_pushButton_10n_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        ui->label->setText(QString::number(pow(10, ui->label->text().toDouble())));
    }
}

void MainWindow::on_pushButton_fact_clicked() {

    /* Initializing variables */
    Dodecahedron::Bigint num;

    /* Main part */
    num = Dodecahedron::factorial(ui->label->text().toInt());

    ui->label->setText(QString::fromStdString(Dodecahedron::to_string(num)));
}

void MainWindow::on_pushButton_recip_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (ui->label->text().toDouble() == 0.0) {
            ui->label->setText(ERROR_MSG);
        } else {
            ui->label->setText(QString::number(1.0 / ui->label->text().toDouble()));
        }
    }
}

void MainWindow::on_pushButton_back_clicked() {

    /* Main part */
    if (ui->label->text().endsWith("E+1") || ui->label->text().endsWith("E-1") || ui->label->text().endsWith("E+2") || ui->label->text().endsWith("E-2") ||
            ui->label->text().endsWith("E+3") || ui->label->text().endsWith("E-3") || ui->label->text().endsWith("E+4") || ui->label->text().endsWith("E-4") ||
            ui->label->text().endsWith("E+5") || ui->label->text().endsWith("E-5") || ui->label->text().endsWith("E+6") || ui->label->text().endsWith("E-6") ||
            ui->label->text().endsWith("E+7") || ui->label->text().endsWith("E-7") || ui->label->text().endsWith("E+8") || ui->label->text().endsWith("E-8") ||
            ui->label->text().endsWith("E+9") || ui->label->text().endsWith("E-9")) {
        ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
        ui->label->setText(ui->label->text() + "0");
        m_exp3 = 1;
    } else {
        if (!ui->label->text().endsWith("E+0" && !ui->label->text().endsWith("E-0"))) {
            if (pamat2 != 1) {
                if (ui->label->text().length() == 1) {
                    ui->label->setText("0");
                    m_exp3 = 0;
                } else if (zap == 1 && ui->label->text().endsWith(".")) {
                    ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
                    zap = 0;
                } else {
                    ui->label->setText(ui->label->text().left(ui->label->text().length() - 1));
                }
            }
        } else {
            ui->label->setText(QString::number(m_exp2));
            m_exp = 0;
            m_exp9 = 0;
        }
    }
}
void MainWindow::on_pushButton_ce_clicked() {

    /* Main part */
    ui->label->setText("0");
    zap = 0;
    r = 0;
    /* m_exp = 0;
     * m_exp3 = 0;
     * m_exp9 = 0;
     */
}

void MainWindow::on_pushButton_mr_clicked() {

    /* Main part */
    if (pamat != 0.0) {
        if (pamat2 != 1) {
            ui->label->setText(QString::number(pamat));
            pamat2 = 1;
            m_exp3 = 0;
            m_exp4 = 0;
            m_exp = 0;
            m_exp5 = 0;
        } else {
            pamat = 0;
            ui->pushButton_mr->setEnabled(false);
        }
    }
}

void MainWindow::on_pushButton_mp_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (ui->label->text().toDouble() != 0.0) {
            pamat += ui->label->text().toDouble();
            m_pamat3 = 1;
            ui->pushButton_mr->setEnabled(true);
        }
    }
}

void MainWindow::on_pushButton_mmin_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (ui->label->text().toDouble() != 0.0) {
            pamat -= ui->label->text().toDouble();
            m_pamat3 = 1;
            ui->pushButton_mr->setEnabled(true);
        }
    }
}

void MainWindow::on_pushButton_plus_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (a == 0.0) {
            a = ui->label->text().toDouble();
            ui->label->setText("0");
            znak = '+';
            zap = 0;
            r = 0;
            m_exp = 0;
        } else if (lnt == 1) {
            ravno2();
            a = ui->label->text().toDouble();
            lnt = 1;
            m_exp = 0;
            zap = 0;
        }

        if (znak != '\0') {
            znak = '+';
        }
    }
}

void MainWindow::on_pushButton_min_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (a == 0.0) {
            a = ui->label->text().toDouble();
            ui->label->setText("0");
            znak = '-';
            zap = 0;
            r = 0;
            m_exp = 0;
        } else if (lnt == 1) {
            ravno2();
            a = ui->label->text().toDouble();
            lnt = 1;
            m_exp = 0;
            zap = 0;
        }

        if (znak != '\0') {
            znak = '-';
        }
    }
}

void MainWindow::on_pushButton_mult_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (a == 0.0) {
            a = ui->label->text().toDouble();
            ui->label->setText("0");
            znak = '*';
            zap = 0;
            r = 0;
            m_exp = 0;
        } else if (lnt == 1) {
            ravno2();
            a = ui->label->text().toDouble();
            lnt = 1;
            m_exp = 0;
            zap = 0;
        }

        if (znak != '\0') {
            znak = '*';
        }
    }
}

void MainWindow::on_pushButton_div_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (a == 0.0) {
            a = ui->label->text().toDouble();
            ui->label->setText("0");
            znak = '/';
            zap = 0;
            r = 0;
            m_exp = 0;
        } else if (lnt == 1) {
            ravno2();
            a = ui->label->text().toDouble();
            lnt = 1;
            m_exp = 0;
            zap = 0;
        }

        if (znak != '\0') {
            znak = '/';
        }
    }
}

void MainWindow::on_pushButton_sqrt_2_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        a = ui->label->text().toDouble();
        ui->label->setText("0");
        znak = 's';
        zap = 0;
        r = 0;
        m_exp = 0;
        if (znak != '\0') {
            znak = 's';
        }
    }
}

void MainWindow::on_pushButton_sqr_2_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        a = ui->label->text().toDouble();
        ui->label->setText("0");
        znak = '^';
        zap = 0;
        r = 0;
        m_exp = 0;
        if (znak != '\0') {
            znak = '^';
        }
    }
}

void MainWindow::on_pushButton_equals_clicked() {

    /* Main part */
    if (ui->label->text() != ERROR_MSG) {
        if (r == 0.0) {
            b = ui->label->text().toDouble();
            switch (znak) {
                case '+':
                    d = a + b;
                    break;
                case '-':
                    d = a - b;
                    break;
                case '*':
                    d = a * b;
                    break;
                case '/':
                    if (b != 0.0) {
                        d = a / b;
                    } else {
                        ui->label->setText(ERROR_MSG);
                        return;
                    }
                    break;
                case '^':
                    d = pow(a, b);
                    break;
                case 's':
                    if (static_cast<int>(b) != 0 && (a >= 0)) {
                        d = pow(a, 1 / b);
                    } else {
                        ui->label->setText(ERROR_MSG);
                        return;
                    }
                    break;
            }
            if (m_exp != 0) {
                d = ui->label->text().toDouble();
            }
            ui->label->setText(QString::number(d));
            r = b;
            a = 0.0;
        } else {
            a = ui->label->text().toDouble();
            b = r;
            switch (znak) {
                case '+':
                    d = a + b;
                    break;
                case '-':
                    d = a - b;
                    break;
                case '*':
                    d = a * b;
                    break;
                case '/':
                    if (b != 0.0) {
                        d = a / b;
                    } else {
                        ui->label->setText(ERROR_MSG);
                        return;
                    }
                    break;
                default:
                    break;
            }
            ui->label->setText(QString::number(d));
            a = 0.0;
        }
    }
}

void MainWindow::on_actionQuit_triggered() {

    /* Main part */
    this->close();
}

void MainWindow::on_actionAbout_triggered() {

    /* Main part */
    QMessageBox::about(this, "About", "This is simple calculator for lab_05 (Visual Programming)");
}

void MainWindow::on_actionAbout_Qt_triggered() {

    /* Main part */
    QMessageBox::aboutQt(this, "About Qt");
}

void MainWindow::on_actionCopy_triggered() {

    /* Initializing variables */
    QClipboard *clip = QGuiApplication::clipboard();

    /* Main part */
    clip->setText(ui->label->text());
}

void MainWindow::on_actionPaste_triggered() {

    /* Initializing variables */
    QClipboard *clip = QGuiApplication::clipboard();

    /* Main part */
    ui->label->setText(clip->text());
}
