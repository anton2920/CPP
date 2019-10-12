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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_b_u;
    QLabel *label_2;
    QLineEdit *lineEdit_s_u;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_b_e;
    QLabel *label_4;
    QLineEdit *lineEdit_s_e;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_b_g;
    QLabel *label_6;
    QLineEdit *lineEdit_s_g;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_b_c;
    QLabel *label_8;
    QLineEdit *lineEdit_s_c;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_u;
    QRadioButton *radioButton_e;
    QRadioButton *radioButton_g;
    QRadioButton *radioButton_c;
    QCheckBox *checkBox_b;
    QCheckBox *checkBox_s;
    QSpinBox *spinBox;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QLabel *label_ans;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(513, 331);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_b_u = new QLineEdit(groupBox);
        lineEdit_b_u->setObjectName(QString::fromUtf8("lineEdit_b_u"));
        lineEdit_b_u->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_b_u);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_s_u = new QLineEdit(groupBox);
        lineEdit_s_u->setObjectName(QString::fromUtf8("lineEdit_s_u"));
        lineEdit_s_u->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_s_u);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_b_e = new QLineEdit(groupBox_2);
        lineEdit_b_e->setObjectName(QString::fromUtf8("lineEdit_b_e"));
        lineEdit_b_e->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_b_e);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEdit_s_e = new QLineEdit(groupBox_2);
        lineEdit_s_e->setObjectName(QString::fromUtf8("lineEdit_s_e"));
        lineEdit_s_e->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_s_e);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        lineEdit_b_g = new QLineEdit(groupBox_3);
        lineEdit_b_g->setObjectName(QString::fromUtf8("lineEdit_b_g"));
        lineEdit_b_g->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_b_g);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        lineEdit_s_g = new QLineEdit(groupBox_3);
        lineEdit_s_g->setObjectName(QString::fromUtf8("lineEdit_s_g"));
        lineEdit_s_g->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_s_g);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        formLayout_4 = new QFormLayout(groupBox_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_b_c = new QLineEdit(groupBox_4);
        lineEdit_b_c->setObjectName(QString::fromUtf8("lineEdit_b_c"));
        lineEdit_b_c->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_b_c);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_s_c = new QLineEdit(groupBox_4);
        lineEdit_s_c->setObjectName(QString::fromUtf8("lineEdit_s_c"));
        lineEdit_s_c->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_s_c);


        gridLayout_2->addWidget(groupBox_4, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(frame);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_u = new QRadioButton(groupBox_5);
        radioButton_u->setObjectName(QString::fromUtf8("radioButton_u"));
        radioButton_u->setFont(font);

        verticalLayout->addWidget(radioButton_u);

        radioButton_e = new QRadioButton(groupBox_5);
        radioButton_e->setObjectName(QString::fromUtf8("radioButton_e"));
        radioButton_e->setFont(font);

        verticalLayout->addWidget(radioButton_e);

        radioButton_g = new QRadioButton(groupBox_5);
        radioButton_g->setObjectName(QString::fromUtf8("radioButton_g"));
        radioButton_g->setFont(font);

        verticalLayout->addWidget(radioButton_g);

        radioButton_c = new QRadioButton(groupBox_5);
        radioButton_c->setObjectName(QString::fromUtf8("radioButton_c"));
        radioButton_c->setFont(font);

        verticalLayout->addWidget(radioButton_c);


        verticalLayout_2->addWidget(groupBox_5);

        checkBox_b = new QCheckBox(frame);
        checkBox_b->setObjectName(QString::fromUtf8("checkBox_b"));
        checkBox_b->setFont(font);

        verticalLayout_2->addWidget(checkBox_b);

        checkBox_s = new QCheckBox(frame);
        checkBox_s->setObjectName(QString::fromUtf8("checkBox_s"));
        checkBox_s->setFont(font);

        verticalLayout_2->addWidget(checkBox_s);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFont(font);
        spinBox->setMinimum(1);
        spinBox->setMaximum(1000000);
        spinBox->setSingleStep(1);

        verticalLayout_2->addWidget(spinBox);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_ans = new QLabel(frame_2);
        label_ans->setObjectName(QString::fromUtf8("label_ans"));
        label_ans->setFrameShape(QFrame::StyledPanel);
        label_ans->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_ans, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lab_08", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "USD", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
        lineEdit_b_u->setText(QCoreApplication::translate("MainWindow", "62.65", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sell", nullptr));
        lineEdit_s_u->setText(QCoreApplication::translate("MainWindow", "65.77", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "EUR", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
        lineEdit_b_e->setText(QCoreApplication::translate("MainWindow", "69.12", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Sell", nullptr));
        lineEdit_s_e->setText(QCoreApplication::translate("MainWindow", "72.61", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "GBP", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
        lineEdit_b_g->setText(QCoreApplication::translate("MainWindow", "77.09", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Sell", nullptr));
        lineEdit_s_g->setText(QCoreApplication::translate("MainWindow", "85.41", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "CNY", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
        lineEdit_b_c->setText(QCoreApplication::translate("MainWindow", "8.2", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Sell", nullptr));
        lineEdit_s_c->setText(QCoreApplication::translate("MainWindow", "9.918", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Data", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Choose currency", nullptr));
        radioButton_u->setText(QCoreApplication::translate("MainWindow", "USD", nullptr));
        radioButton_e->setText(QCoreApplication::translate("MainWindow", "EUR", nullptr));
        radioButton_g->setText(QCoreApplication::translate("MainWindow", "GBP", nullptr));
        radioButton_c->setText(QCoreApplication::translate("MainWindow", "CNY", nullptr));
        checkBox_b->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
        checkBox_s->setText(QCoreApplication::translate("MainWindow", "Sell", nullptr));
        label_ans->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calcucale", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Calculations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
