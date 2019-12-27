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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_pics;
    QPushButton *pushButton_nums;
    QLabel *label_2;
    QLabel *label;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_quest_1;
    QLabel *label_picnum;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(891, 651);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_pics = new QPushButton(page);
        pushButton_pics->setObjectName(QString::fromUtf8("pushButton_pics"));
        QFont font;
        font.setPointSize(18);
        pushButton_pics->setFont(font);

        horizontalLayout->addWidget(pushButton_pics);

        pushButton_nums = new QPushButton(page);
        pushButton_nums->setObjectName(QString::fromUtf8("pushButton_nums"));
        pushButton_nums->setFont(font);

        horizontalLayout->addWidget(pushButton_nums);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(72);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(17);
        label->setFont(font2);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(page_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QFont font3;
        font3.setPointSize(14);
        radioButton->setFont(font3);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(page_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font3);

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(page_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font3);

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(page_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font3);

        verticalLayout->addWidget(radioButton_4);


        gridLayout_3->addLayout(verticalLayout, 3, 0, 1, 1);

        label_quest_1 = new QLabel(page_2);
        label_quest_1->setObjectName(QString::fromUtf8("label_quest_1"));
        label_quest_1->setFont(font2);

        gridLayout_3->addWidget(label_quest_1, 0, 0, 1, 1);

        label_picnum = new QLabel(page_2);
        label_picnum->setObjectName(QString::fromUtf8("label_picnum"));
        sizePolicy.setHeightForWidth(label_picnum->sizePolicy().hasHeightForWidth());
        label_picnum->setSizePolicy(sizePolicy);
        label_picnum->setFont(font1);
        label_picnum->setStyleSheet(QString::fromUtf8(""));
        label_picnum->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_picnum, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font4;
        font4.setPointSize(16);
        pushButton->setFont(font4);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setPointSize(13);
        pushButton_2->setFont(font5);

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout_3->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 891, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ADR Quiz", nullptr));
        pushButton_pics->setText(QCoreApplication::translate("MainWindow", "Pictures", nullptr));
        pushButton_nums->setText(QCoreApplication::translate("MainWindow", "Numbers", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ADR Quiz", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Accord europ\303\251en relatif au transport international des marchandises Dangereuses par Route", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        label_quest_1->setText(QCoreApplication::translate("MainWindow", "What does this pictogram stand for?", nullptr));
        label_picnum->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
