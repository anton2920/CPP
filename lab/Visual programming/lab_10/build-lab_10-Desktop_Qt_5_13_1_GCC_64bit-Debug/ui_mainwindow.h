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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickablelabel.h>
#include <my_frame.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QProgressBar *progressBar;
    my_frame *frame;
    QHBoxLayout *horizontalLayout;
    ClickableLabel *label_c4;
    QVBoxLayout *verticalLayout;
    ClickableLabel *label;
    ClickableLabel *label_2;
    ClickableLabel *label_3;
    ClickableLabel *label_4;
    ClickableLabel *label_5;
    ClickableLabel *label_6;
    ClickableLabel *label_7;
    QLabel *label_timer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(616, 292);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(7);
        spinBox->setValue(3);

        gridLayout->addWidget(spinBox, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 0, 1, 1, 1);

        frame = new my_frame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_c4 = new ClickableLabel(frame);
        label_c4->setObjectName(QString::fromUtf8("label_c4"));
        QFont font;
        font.setPointSize(20);
        label_c4->setFont(font);
        label_c4->setFrameShape(QFrame::Panel);
        label_c4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_c4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new ClickableLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(1);
        label->setFont(font1);
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(3);

        verticalLayout->addWidget(label);

        label_2 = new ClickableLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setLineWidth(3);

        verticalLayout->addWidget(label_2);

        label_3 = new ClickableLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);
        label_3->setLineWidth(3);

        verticalLayout->addWidget(label_3);

        label_4 = new ClickableLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Box);
        label_4->setLineWidth(3);

        verticalLayout->addWidget(label_4);

        label_5 = new ClickableLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::Box);
        label_5->setLineWidth(3);

        verticalLayout->addWidget(label_5);

        label_6 = new ClickableLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);
        label_6->setLineWidth(3);
        label_6->setMidLineWidth(0);

        verticalLayout->addWidget(label_6);

        label_7 = new ClickableLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);
        label_7->setLineWidth(3);

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        label_timer = new QLabel(frame);
        label_timer->setObjectName(QString::fromUtf8("label_timer"));
        label_timer->setFont(font);
        label_timer->setFrameShape(QFrame::Box);
        label_timer->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_timer);


        gridLayout->addWidget(frame, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lab_10", nullptr));
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        label_c4->setText(QCoreApplication::translate("MainWindow", "C4", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_timer->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
