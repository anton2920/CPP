/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionAbout_Qt;
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionDegrees;
    QAction *actionRadians;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_pm;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_min;
    QPushButton *pushButton_div;
    QPushButton *pushButton_recip;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_fact;
    QPushButton *pushButton_10n;
    QPushButton *pushButton_sqr;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_back;
    QPushButton *pushButton_ce;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_mr;
    QPushButton *pushButton_mp;
    QPushButton *pushButton_mmin;
    QPushButton *pushButton_shift;
    QLabel *label;
    QPushButton *pushButton_cos_2;
    QPushButton *pushButton_sqr_2;
    QPushButton *pushButton_sin_2;
    QPushButton *pushButton_sqrt_2;
    QPushButton *pushButton_tan_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 480);
        MainWindow->setMinimumSize(QSize(500, 480));
        MainWindow->setMaximumSize(QSize(500, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../Pictures/Wwalczyszyn-Android-Style-Honeycomb-Calculator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionDegrees = new QAction(MainWindow);
        actionDegrees->setObjectName(QString::fromUtf8("actionDegrees"));
        actionDegrees->setCheckable(true);
        actionDegrees->setChecked(true);
        actionRadians = new QAction(MainWindow);
        actionRadians->setObjectName(QString::fromUtf8("actionRadians"));
        actionRadians->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 390, 60, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Lato Light"));
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton_pm = new QPushButton(centralwidget);
        pushButton_pm->setObjectName(QString::fromUtf8("pushButton_pm"));
        pushButton_pm->setGeometry(QRect(80, 390, 60, 60));
        pushButton_pm->setFont(font);
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(150, 390, 60, 60));
        pushButton_dot->setFont(font);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 320, 60, 60));
        pushButton_1->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 320, 60, 60));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 320, 60, 60));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 250, 60, 60));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 250, 60, 60));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 250, 60, 60));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 180, 60, 60));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 180, 60, 60));
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(150, 180, 60, 60));
        pushButton_9->setFont(font);
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(220, 250, 60, 60));
        pushButton_mult->setFont(font);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(220, 390, 60, 60));
        pushButton_plus->setFont(font);
        pushButton_min = new QPushButton(centralwidget);
        pushButton_min->setObjectName(QString::fromUtf8("pushButton_min"));
        pushButton_min->setGeometry(QRect(220, 320, 60, 60));
        pushButton_min->setFont(font);
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(220, 180, 60, 60));
        pushButton_div->setFont(font);
        pushButton_recip = new QPushButton(centralwidget);
        pushButton_recip->setObjectName(QString::fromUtf8("pushButton_recip"));
        pushButton_recip->setGeometry(QRect(290, 180, 60, 60));
        pushButton_recip->setFont(font);
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName(QString::fromUtf8("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(290, 319, 60, 131));
        pushButton_equals->setFont(font);
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(290, 250, 60, 60));
        pushButton_percent->setFont(font);
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(360, 180, 60, 60));
        pushButton_sqrt->setFont(font);
        pushButton_fact = new QPushButton(centralwidget);
        pushButton_fact->setObjectName(QString::fromUtf8("pushButton_fact"));
        pushButton_fact->setGeometry(QRect(360, 320, 60, 60));
        pushButton_fact->setFont(font);
        pushButton_10n = new QPushButton(centralwidget);
        pushButton_10n->setObjectName(QString::fromUtf8("pushButton_10n"));
        pushButton_10n->setGeometry(QRect(360, 390, 60, 60));
        pushButton_10n->setFont(font);
        pushButton_sqr = new QPushButton(centralwidget);
        pushButton_sqr->setObjectName(QString::fromUtf8("pushButton_sqr"));
        pushButton_sqr->setGeometry(QRect(360, 250, 60, 60));
        pushButton_sqr->setFont(font);
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(430, 320, 60, 60));
        pushButton_tan->setFont(font);
        pushButton_exp = new QPushButton(centralwidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        pushButton_exp->setGeometry(QRect(430, 390, 60, 60));
        pushButton_exp->setFont(font);
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(430, 250, 60, 60));
        pushButton_cos->setFont(font);
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(430, 180, 60, 60));
        pushButton_sin->setFont(font);
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 130, 101, 41));
        pushButton_back->setFont(font);
        pushButton_ce = new QPushButton(centralwidget);
        pushButton_ce->setObjectName(QString::fromUtf8("pushButton_ce"));
        pushButton_ce->setGeometry(QRect(120, 130, 131, 41));
        pushButton_ce->setFont(font);
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(260, 130, 161, 41));
        pushButton_clear->setFont(font);
        pushButton_pi = new QPushButton(centralwidget);
        pushButton_pi->setObjectName(QString::fromUtf8("pushButton_pi"));
        pushButton_pi->setGeometry(QRect(430, 130, 60, 41));
        pushButton_pi->setFont(font);
        pushButton_mr = new QPushButton(centralwidget);
        pushButton_mr->setObjectName(QString::fromUtf8("pushButton_mr"));
        pushButton_mr->setEnabled(false);
        pushButton_mr->setGeometry(QRect(10, 80, 211, 41));
        pushButton_mr->setFont(font);
        pushButton_mp = new QPushButton(centralwidget);
        pushButton_mp->setObjectName(QString::fromUtf8("pushButton_mp"));
        pushButton_mp->setGeometry(QRect(230, 80, 91, 41));
        pushButton_mp->setFont(font);
        pushButton_mmin = new QPushButton(centralwidget);
        pushButton_mmin->setObjectName(QString::fromUtf8("pushButton_mmin"));
        pushButton_mmin->setGeometry(QRect(330, 80, 91, 41));
        pushButton_mmin->setFont(font);
        pushButton_shift = new QPushButton(centralwidget);
        pushButton_shift->setObjectName(QString::fromUtf8("pushButton_shift"));
        pushButton_shift->setGeometry(QRect(430, 80, 60, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lato Light"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        pushButton_shift->setFont(font1);
        pushButton_shift->setCheckable(true);
        pushButton_shift->setChecked(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 480, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lato Light"));
        font2.setPointSize(32);
        font2.setItalic(true);
        label->setFont(font2);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(0);
        pushButton_cos_2 = new QPushButton(centralwidget);
        pushButton_cos_2->setObjectName(QString::fromUtf8("pushButton_cos_2"));
        pushButton_cos_2->setGeometry(QRect(430, 250, 60, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lato Light"));
        font3.setPointSize(21);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_cos_2->setFont(font3);
        pushButton_sqr_2 = new QPushButton(centralwidget);
        pushButton_sqr_2->setObjectName(QString::fromUtf8("pushButton_sqr_2"));
        pushButton_sqr_2->setGeometry(QRect(360, 250, 60, 60));
        pushButton_sqr_2->setFont(font);
        pushButton_sin_2 = new QPushButton(centralwidget);
        pushButton_sin_2->setObjectName(QString::fromUtf8("pushButton_sin_2"));
        pushButton_sin_2->setGeometry(QRect(430, 180, 60, 60));
        pushButton_sin_2->setFont(font3);
        pushButton_sqrt_2 = new QPushButton(centralwidget);
        pushButton_sqrt_2->setObjectName(QString::fromUtf8("pushButton_sqrt_2"));
        pushButton_sqrt_2->setGeometry(QRect(360, 180, 60, 60));
        pushButton_sqrt_2->setFont(font);
        pushButton_tan_2 = new QPushButton(centralwidget);
        pushButton_tan_2->setObjectName(QString::fromUtf8("pushButton_tan_2"));
        pushButton_tan_2->setGeometry(QRect(430, 320, 60, 60));
        pushButton_tan_2->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        pushButton->raise();
        pushButton_pm->raise();
        pushButton_dot->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_mult->raise();
        pushButton_plus->raise();
        pushButton_min->raise();
        pushButton_div->raise();
        pushButton_recip->raise();
        pushButton_equals->raise();
        pushButton_percent->raise();
        pushButton_fact->raise();
        pushButton_10n->raise();
        pushButton_exp->raise();
        pushButton_back->raise();
        pushButton_ce->raise();
        pushButton_clear->raise();
        pushButton_pi->raise();
        pushButton_mr->raise();
        pushButton_mp->raise();
        pushButton_mmin->raise();
        pushButton_shift->raise();
        label->raise();
        pushButton_cos_2->raise();
        pushButton_sqr_2->raise();
        pushButton_sin_2->raise();
        pushButton_sqrt_2->raise();
        pushButton_tan_2->raise();
        pushButton_sin->raise();
        pushButton_sqr->raise();
        pushButton_sqrt->raise();
        pushButton_tan->raise();
        pushButton_cos->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDegrees);
        menuEdit->addAction(actionRadians);
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Rubidium", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDegrees->setText(QCoreApplication::translate("MainWindow", "Degrees", nullptr));
#if QT_CONFIG(shortcut)
        actionDegrees->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRadians->setText(QCoreApplication::translate("MainWindow", "Radians", nullptr));
#if QT_CONFIG(shortcut)
        actionRadians->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_pm->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_min->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_recip->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_fact->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        pushButton_10n->setText(QCoreApplication::translate("MainWindow", "10\342\201\277", nullptr));
        pushButton_sqr->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "Exp", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        pushButton_ce->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        pushButton_mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pushButton_mp->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        pushButton_mmin->setText(QCoreApplication::translate("MainWindow", "M\342\210\222", nullptr));
        pushButton_shift->setText(QCoreApplication::translate("MainWindow", "shift", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_cos_2->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_sqr_2->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
        pushButton_sin_2->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_sqrt_2->setText(QCoreApplication::translate("MainWindow", "\342\201\277\342\210\232", nullptr));
        pushButton_tan_2->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
