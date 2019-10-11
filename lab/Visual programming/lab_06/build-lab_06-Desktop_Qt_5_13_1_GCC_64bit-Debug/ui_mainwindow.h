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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_font;
    QPushButton *pushButton_clr;
    QPushButton *pushButton_info;
    QPushButton *pushButton_none;
    QPushButton *pushButton_quest;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_wrning;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(272, 510);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setPointSize(7);
        textEdit->setFont(font);
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_font = new QPushButton(frame);
        pushButton_font->setObjectName(QString::fromUtf8("pushButton_font"));

        horizontalLayout->addWidget(pushButton_font);

        pushButton_clr = new QPushButton(frame);
        pushButton_clr->setObjectName(QString::fromUtf8("pushButton_clr"));

        horizontalLayout->addWidget(pushButton_clr);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);

        pushButton_info = new QPushButton(centralwidget);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));

        verticalLayout->addWidget(pushButton_info);

        pushButton_none = new QPushButton(centralwidget);
        pushButton_none->setObjectName(QString::fromUtf8("pushButton_none"));

        verticalLayout->addWidget(pushButton_none);

        pushButton_quest = new QPushButton(centralwidget);
        pushButton_quest->setObjectName(QString::fromUtf8("pushButton_quest"));

        verticalLayout->addWidget(pushButton_quest);

        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));

        verticalLayout->addWidget(pushButton_stop);

        pushButton_wrning = new QPushButton(centralwidget);
        pushButton_wrning->setObjectName(QString::fromUtf8("pushButton_wrning"));

        verticalLayout->addWidget(pushButton_wrning);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 272, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lab_06", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:7pt; font-weight:400; font-style:normal;\">\n"
"<h1 style=\" margin-top:0px; margin-bottom:4px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:130%;\"><a name=\"firstHeading\"></a><span style=\" font-family:'Linux Libertine','Georgia','Times','serif'; font-size:14pt; font-weight:600; color:#ffffff;\">T</span><span style=\" font-family:'Linux Libertine','Georgia','Times','serif'; font-size:14pt; font-weight:600; color:#ffffff;\">he quick brown fox jumps over the lazy dog</span></h1></body></html>", nullptr));
        pushButton_font->setText(QCoreApplication::translate("MainWindow", "Change font", nullptr));
        pushButton_clr->setText(QCoreApplication::translate("MainWindow", "Change colour", nullptr));
        pushButton_info->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        pushButton_none->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        pushButton_quest->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_wrning->setText(QCoreApplication::translate("MainWindow", "Warning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
