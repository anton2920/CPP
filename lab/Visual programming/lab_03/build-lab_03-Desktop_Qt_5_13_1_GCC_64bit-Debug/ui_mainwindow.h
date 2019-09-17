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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickablelabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    ClickableLabel *label;
    QPushButton *factBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 383);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new ClickableLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setKerning(true);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        factBtn = new QPushButton(centralwidget);
        factBtn->setObjectName(QString::fromUtf8("factBtn"));
        QFont font1;
        font1.setPointSize(13);
        factBtn->setFont(font1);

        verticalLayout->addWidget(factBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lab_03", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        factBtn->setText(QCoreApplication::translate("MainWindow", "14!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
