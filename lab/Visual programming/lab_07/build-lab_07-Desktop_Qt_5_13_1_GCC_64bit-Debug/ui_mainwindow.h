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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_Fara;
    QCheckBox *checkBox_A;
    QCheckBox *checkBox_F2;
    QCheckBox *checkBox_F1;
    QCheckBox *checkBox_N;
    QCheckBox *checkBox_Newt;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_corr;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(759, 440);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Box);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox_Fara = new QCheckBox(groupBox);
        checkBox_Fara->setObjectName(QString::fromUtf8("checkBox_Fara"));

        gridLayout->addWidget(checkBox_Fara, 0, 2, 1, 1);

        checkBox_A = new QCheckBox(groupBox);
        checkBox_A->setObjectName(QString::fromUtf8("checkBox_A"));

        gridLayout->addWidget(checkBox_A, 0, 0, 1, 1);

        checkBox_F2 = new QCheckBox(groupBox);
        checkBox_F2->setObjectName(QString::fromUtf8("checkBox_F2"));
        checkBox_F2->setEnabled(true);
        checkBox_F2->setTristate(false);

        gridLayout->addWidget(checkBox_F2, 0, 1, 1, 1);

        checkBox_F1 = new QCheckBox(groupBox);
        checkBox_F1->setObjectName(QString::fromUtf8("checkBox_F1"));

        gridLayout->addWidget(checkBox_F1, 3, 0, 1, 1);

        checkBox_N = new QCheckBox(groupBox);
        checkBox_N->setObjectName(QString::fromUtf8("checkBox_N"));

        gridLayout->addWidget(checkBox_N, 3, 1, 1, 1);

        checkBox_Newt = new QCheckBox(groupBox);
        checkBox_Newt->setObjectName(QString::fromUtf8("checkBox_Newt"));

        gridLayout->addWidget(checkBox_Newt, 3, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 0, 2, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_2->addWidget(radioButton_4, 2, 2, 1, 1);

        radioButton_corr = new QRadioButton(groupBox_2);
        radioButton_corr->setObjectName(QString::fromUtf8("radioButton_corr"));

        gridLayout_2->addWidget(radioButton_corr, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 759, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lab_07", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "What's the tractor's power, if while he moving at the speed 3.6 km/h, his traction force is 60,000 N", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Formulas", nullptr));
        checkBox_Fara->setText(QCoreApplication::translate("MainWindow", "\342\210\256E\302\240\342\213\205 dl = -d\320\244 / dt", nullptr));
        checkBox_A->setText(QCoreApplication::translate("MainWindow", "A = F \342\213\205\302\240S", nullptr));
        checkBox_F2->setText(QCoreApplication::translate("MainWindow", "\320\244 = \342\210\221q\341\265\242 / \316\265o", nullptr));
        checkBox_F1->setText(QCoreApplication::translate("MainWindow", "\320\244 = \342\210\256E \342\213\205 ds", nullptr));
        checkBox_N->setText(QCoreApplication::translate("MainWindow", "N = F \342\213\205 v", nullptr));
        checkBox_Newt->setText(QCoreApplication::translate("MainWindow", "\342\210\221F = ma", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "N = 60 W", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "N = 60 kV", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "A = 60 kJ", nullptr));
        radioButton_corr->setText(QCoreApplication::translate("MainWindow", "N = 60 kW", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
