/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineFN;
    QLabel *label_3;
    QLineEdit *lineLN;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QFrame *line;
    QLabel *label_4;
    QLineEdit *lineFaculty;
    QLabel *label_5;
    QLineEdit *lineGroup;
    QLabel *label_6;
    QSpinBox *spinBox;
    QFrame *line_2;
    QLabel *label_9;
    QLineEdit *linePnone;
    QLabel *label_10;
    QLineEdit *lineEmail;
    QLabel *label_11;
    QLineEdit *lineAddress;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(316, 508);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setLineWidth(3);
        label->setMidLineWidth(4);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineFN = new QLineEdit(centralwidget);
        lineFN->setObjectName(QString::fromUtf8("lineFN"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineFN);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineLN = new QLineEdit(centralwidget);
        lineLN->setObjectName(QString::fromUtf8("lineLN"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineLN);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setValue(19);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumDateTime(QDateTime(QDate(2019, 9, 16), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(1900, 1, 1), QTime(0, 0, 0)));
        dateEdit->setDate(QDate(2000, 5, 19));

        formLayout->setWidget(3, QFormLayout::FieldRole, dateEdit);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(4, QFormLayout::FieldRole, line);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        lineFaculty = new QLineEdit(centralwidget);
        lineFaculty->setObjectName(QString::fromUtf8("lineFaculty"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineFaculty);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        lineGroup = new QLineEdit(centralwidget);
        lineGroup->setObjectName(QString::fromUtf8("lineGroup"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineGroup);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1929);
        spinBox->setMaximum(2019);
        spinBox->setValue(2018);

        formLayout->setWidget(7, QFormLayout::FieldRole, spinBox);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setLineWidth(0);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(8, QFormLayout::FieldRole, line_2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(12);
        label_9->setFont(font2);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        linePnone = new QLineEdit(centralwidget);
        linePnone->setObjectName(QString::fromUtf8("linePnone"));

        formLayout->setWidget(9, QFormLayout::FieldRole, linePnone);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_10);

        lineEmail = new QLineEdit(centralwidget);
        lineEmail->setObjectName(QString::fromUtf8("lineEmail"));

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEmail);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_11);

        lineAddress = new QLineEdit(centralwidget);
        lineAddress->setObjectName(QString::fromUtf8("lineAddress"));

        formLayout->setWidget(11, QFormLayout::FieldRole, lineAddress);


        verticalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 316, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lab_04", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Sign up form", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Date of bitrh", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Faculty", nullptr));
        lineFaculty->setInputMask(QCoreApplication::translate("MainWindow", "AAAa", nullptr));
        lineFaculty->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Group", nullptr));
        lineGroup->setInputMask(QCoreApplication::translate("MainWindow", "99-AAAa", nullptr));
        lineGroup->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Adm. year", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        linePnone->setInputMask(QCoreApplication::translate("MainWindow", "#00 00000(999)-999-99-99", nullptr));
        linePnone->setText(QCoreApplication::translate("MainWindow", " ()---", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        lineEmail->setInputMask(QString());
        lineEmail->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
