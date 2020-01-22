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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "my_frame.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRepeat;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClear_Selection;
    QAction *actionSelect_All;
    QAction *actionTool_box;
    QAction *actionColor_Box;
    QAction *actionText_Toolbar;
    QAction *actionAbout_Paint;
    QAction *actionAbout_Qt;
    QAction *actionStatus_Bar;
    QAction *actionSet_Line_Width;
    QAction *actionClear_image;
    QAction *actionSet_Text_Font;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame_toolbox;
    QPushButton *pushButton_line;
    QPushButton *pushButton_ellipse;
    QPushButton *pushButton_eraser;
    QPushButton *pushButton_curve;
    QPushButton *pushButton_brush;
    QPushButton *pushButton_polygon;
    QPushButton *pushButton_select;
    QPushButton *pushButton_airbrush;
    QPushButton *pushButton_magnifier;
    QPushButton *pushButton_pencil;
    QPushButton *pushButton_rectangle;
    QPushButton *pushButton_rounded_rectangle;
    QPushButton *pushButton_fill_with_clr;
    QPushButton *pushButton_text;
    QPushButton *pushButton_pick_clr;
    QPushButton *pushButton_free_form;
    QGridLayout *gridLayout;
    QFrame *frame_color;
    QFrame *frame_chosen_colors;
    my_frame *frame_main_color;
    my_frame *frame_2nd_color;
    my_frame *frame_black;
    my_frame *frame_white;
    my_frame *frame_gray;
    my_frame *frame_d_gray;
    my_frame *frame_red;
    my_frame *frame_d_red;
    my_frame *frame_yellow;
    my_frame *frame_d_yellow;
    my_frame *frame_blue;
    my_frame *frame_d_blue_2;
    my_frame *frame_d_pink;
    my_frame *frame_green;
    my_frame *frame_pink;
    my_frame *frame_d_green;
    my_frame *frame_d_blue;
    my_frame *frame_blue_2;
    my_frame *frame_green_2;
    my_frame *frame_d_blue_3;
    my_frame *frame_d_blue_4;
    my_frame *frame_yellow_2;
    my_frame *frame_blue_4;
    my_frame *frame_d_yellow_2;
    my_frame *frame_d_green_2;
    my_frame *frame_blue_3;
    my_frame *frame_d_orange;
    my_frame *frame_orange;
    my_frame *frame_d_pink_2;
    my_frame *frame_pink_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 664);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRepeat = new QAction(MainWindow);
        actionRepeat->setObjectName(QString::fromUtf8("actionRepeat"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionClear_Selection = new QAction(MainWindow);
        actionClear_Selection->setObjectName(QString::fromUtf8("actionClear_Selection"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionTool_box = new QAction(MainWindow);
        actionTool_box->setObjectName(QString::fromUtf8("actionTool_box"));
        actionTool_box->setCheckable(true);
        actionTool_box->setChecked(true);
        actionColor_Box = new QAction(MainWindow);
        actionColor_Box->setObjectName(QString::fromUtf8("actionColor_Box"));
        actionColor_Box->setCheckable(true);
        actionColor_Box->setChecked(true);
        actionText_Toolbar = new QAction(MainWindow);
        actionText_Toolbar->setObjectName(QString::fromUtf8("actionText_Toolbar"));
        actionText_Toolbar->setCheckable(true);
        actionText_Toolbar->setChecked(true);
        actionText_Toolbar->setEnabled(false);
        actionAbout_Paint = new QAction(MainWindow);
        actionAbout_Paint->setObjectName(QString::fromUtf8("actionAbout_Paint"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionStatus_Bar = new QAction(MainWindow);
        actionStatus_Bar->setObjectName(QString::fromUtf8("actionStatus_Bar"));
        actionStatus_Bar->setCheckable(true);
        actionStatus_Bar->setChecked(true);
        actionSet_Line_Width = new QAction(MainWindow);
        actionSet_Line_Width->setObjectName(QString::fromUtf8("actionSet_Line_Width"));
        actionClear_image = new QAction(MainWindow);
        actionClear_image->setObjectName(QString::fromUtf8("actionClear_image"));
        actionSet_Text_Font = new QAction(MainWindow);
        actionSet_Text_Font->setObjectName(QString::fromUtf8("actionSet_Text_Font"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_toolbox = new QFrame(centralwidget);
        frame_toolbox->setObjectName(QString::fromUtf8("frame_toolbox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_toolbox->sizePolicy().hasHeightForWidth());
        frame_toolbox->setSizePolicy(sizePolicy);
        frame_toolbox->setMinimumSize(QSize(81, 255));
        frame_toolbox->setStyleSheet(QString::fromUtf8(""));
        frame_toolbox->setFrameShape(QFrame::WinPanel);
        frame_toolbox->setFrameShadow(QFrame::Sunken);
        frame_toolbox->setLineWidth(1);
        frame_toolbox->setMidLineWidth(0);
        pushButton_line = new QPushButton(frame_toolbox);
        pushButton_line->setObjectName(QString::fromUtf8("pushButton_line"));
        pushButton_line->setGeometry(QRect(12, 160, 25, 25));
        pushButton_line->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pics/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_line->setIcon(icon);
        pushButton_line->setIconSize(QSize(18, 18));
        pushButton_line->setCheckable(true);
        pushButton_ellipse = new QPushButton(frame_toolbox);
        pushButton_ellipse->setObjectName(QString::fromUtf8("pushButton_ellipse"));
        pushButton_ellipse->setGeometry(QRect(12, 220, 25, 25));
        pushButton_ellipse->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pics/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ellipse->setIcon(icon1);
        pushButton_ellipse->setIconSize(QSize(18, 18));
        pushButton_ellipse->setCheckable(true);
        pushButton_eraser = new QPushButton(frame_toolbox);
        pushButton_eraser->setObjectName(QString::fromUtf8("pushButton_eraser"));
        pushButton_eraser->setGeometry(QRect(12, 40, 25, 25));
        pushButton_eraser->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pics/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eraser->setIcon(icon2);
        pushButton_eraser->setIconSize(QSize(18, 18));
        pushButton_eraser->setCheckable(true);
        pushButton_curve = new QPushButton(frame_toolbox);
        pushButton_curve->setObjectName(QString::fromUtf8("pushButton_curve"));
        pushButton_curve->setEnabled(false);
        pushButton_curve->setGeometry(QRect(42, 160, 25, 25));
        pushButton_curve->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pics/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_curve->setIcon(icon3);
        pushButton_curve->setIconSize(QSize(18, 18));
        pushButton_curve->setCheckable(true);
        pushButton_brush = new QPushButton(frame_toolbox);
        pushButton_brush->setObjectName(QString::fromUtf8("pushButton_brush"));
        pushButton_brush->setGeometry(QRect(42, 100, 25, 25));
        pushButton_brush->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pics/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_brush->setIcon(icon4);
        pushButton_brush->setIconSize(QSize(18, 18));
        pushButton_brush->setCheckable(true);
        pushButton_brush->setChecked(true);
        pushButton_polygon = new QPushButton(frame_toolbox);
        pushButton_polygon->setObjectName(QString::fromUtf8("pushButton_polygon"));
        pushButton_polygon->setEnabled(false);
        pushButton_polygon->setGeometry(QRect(42, 190, 25, 25));
        pushButton_polygon->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pics/10.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_polygon->setIcon(icon5);
        pushButton_polygon->setIconSize(QSize(18, 18));
        pushButton_polygon->setCheckable(true);
        pushButton_select = new QPushButton(frame_toolbox);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setEnabled(false);
        pushButton_select->setGeometry(QRect(42, 10, 25, 25));
        pushButton_select->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pics/16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_select->setIcon(icon6);
        pushButton_select->setIconSize(QSize(18, 18));
        pushButton_select->setCheckable(true);
        pushButton_airbrush = new QPushButton(frame_toolbox);
        pushButton_airbrush->setObjectName(QString::fromUtf8("pushButton_airbrush"));
        pushButton_airbrush->setEnabled(false);
        pushButton_airbrush->setGeometry(QRect(12, 130, 25, 25));
        pushButton_airbrush->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pics/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_airbrush->setIcon(icon7);
        pushButton_airbrush->setIconSize(QSize(18, 18));
        pushButton_airbrush->setCheckable(true);
        pushButton_magnifier = new QPushButton(frame_toolbox);
        pushButton_magnifier->setObjectName(QString::fromUtf8("pushButton_magnifier"));
        pushButton_magnifier->setEnabled(false);
        pushButton_magnifier->setGeometry(QRect(42, 70, 25, 25));
        pushButton_magnifier->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pics/14.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_magnifier->setIcon(icon8);
        pushButton_magnifier->setIconSize(QSize(18, 18));
        pushButton_magnifier->setCheckable(true);
        pushButton_pencil = new QPushButton(frame_toolbox);
        pushButton_pencil->setObjectName(QString::fromUtf8("pushButton_pencil"));
        pushButton_pencil->setGeometry(QRect(12, 100, 25, 25));
        pushButton_pencil->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/pics/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pencil->setIcon(icon9);
        pushButton_pencil->setIconSize(QSize(18, 18));
        pushButton_pencil->setCheckable(true);
        pushButton_rectangle = new QPushButton(frame_toolbox);
        pushButton_rectangle->setObjectName(QString::fromUtf8("pushButton_rectangle"));
        pushButton_rectangle->setGeometry(QRect(12, 190, 25, 25));
        pushButton_rectangle->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/pics/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_rectangle->setIcon(icon10);
        pushButton_rectangle->setIconSize(QSize(18, 18));
        pushButton_rectangle->setCheckable(true);
        pushButton_rounded_rectangle = new QPushButton(frame_toolbox);
        pushButton_rounded_rectangle->setObjectName(QString::fromUtf8("pushButton_rounded_rectangle"));
        pushButton_rounded_rectangle->setGeometry(QRect(42, 220, 25, 25));
        pushButton_rounded_rectangle->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/pics/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_rounded_rectangle->setIcon(icon11);
        pushButton_rounded_rectangle->setIconSize(QSize(18, 18));
        pushButton_rounded_rectangle->setCheckable(true);
        pushButton_fill_with_clr = new QPushButton(frame_toolbox);
        pushButton_fill_with_clr->setObjectName(QString::fromUtf8("pushButton_fill_with_clr"));
        pushButton_fill_with_clr->setEnabled(false);
        pushButton_fill_with_clr->setGeometry(QRect(42, 40, 25, 25));
        pushButton_fill_with_clr->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/pics/15.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fill_with_clr->setIcon(icon12);
        pushButton_fill_with_clr->setIconSize(QSize(18, 18));
        pushButton_fill_with_clr->setCheckable(true);
        pushButton_text = new QPushButton(frame_toolbox);
        pushButton_text->setObjectName(QString::fromUtf8("pushButton_text"));
        pushButton_text->setEnabled(true);
        pushButton_text->setGeometry(QRect(42, 130, 25, 25));
        pushButton_text->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/pics/12.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_text->setIcon(icon13);
        pushButton_text->setIconSize(QSize(18, 18));
        pushButton_text->setCheckable(true);
        pushButton_pick_clr = new QPushButton(frame_toolbox);
        pushButton_pick_clr->setObjectName(QString::fromUtf8("pushButton_pick_clr"));
        pushButton_pick_clr->setEnabled(false);
        pushButton_pick_clr->setGeometry(QRect(12, 70, 25, 25));
        pushButton_pick_clr->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/pics/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pick_clr->setIcon(icon14);
        pushButton_pick_clr->setIconSize(QSize(18, 18));
        pushButton_pick_clr->setCheckable(true);
        pushButton_free_form = new QPushButton(frame_toolbox);
        pushButton_free_form->setObjectName(QString::fromUtf8("pushButton_free_form"));
        pushButton_free_form->setEnabled(false);
        pushButton_free_form->setGeometry(QRect(12, 10, 25, 25));
        pushButton_free_form->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/pics/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_free_form->setIcon(icon15);
        pushButton_free_form->setIconSize(QSize(18, 18));
        pushButton_free_form->setCheckable(true);

        gridLayout_2->addWidget(frame_toolbox, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        frame_color = new QFrame(centralwidget);
        frame_color->setObjectName(QString::fromUtf8("frame_color"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_color->sizePolicy().hasHeightForWidth());
        frame_color->setSizePolicy(sizePolicy1);
        frame_color->setMinimumSize(QSize(347, 61));
        frame_color->setStyleSheet(QString::fromUtf8(""));
        frame_color->setFrameShape(QFrame::WinPanel);
        frame_color->setFrameShadow(QFrame::Sunken);
        frame_chosen_colors = new QFrame(frame_color);
        frame_chosen_colors->setObjectName(QString::fromUtf8("frame_chosen_colors"));
        frame_chosen_colors->setGeometry(QRect(10, 10, 39, 39));
        frame_chosen_colors->setFrameShape(QFrame::WinPanel);
        frame_chosen_colors->setFrameShadow(QFrame::Raised);
        frame_main_color = new my_frame(frame_chosen_colors);
        frame_main_color->setObjectName(QString::fromUtf8("frame_main_color"));
        frame_main_color->setGeometry(QRect(6, 6, 16, 16));
        frame_main_color->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame_main_color->setFrameShape(QFrame::WinPanel);
        frame_main_color->setFrameShadow(QFrame::Sunken);
        frame_2nd_color = new my_frame(frame_chosen_colors);
        frame_2nd_color->setObjectName(QString::fromUtf8("frame_2nd_color"));
        frame_2nd_color->setGeometry(QRect(16, 16, 16, 16));
        frame_2nd_color->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2nd_color->setFrameShape(QFrame::WinPanel);
        frame_2nd_color->setFrameShadow(QFrame::Sunken);
        frame_2nd_color->raise();
        frame_main_color->raise();
        frame_black = new my_frame(frame_color);
        frame_black->setObjectName(QString::fromUtf8("frame_black"));
        frame_black->setGeometry(QRect(60, 10, 17, 17));
        frame_black->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame_black->setFrameShape(QFrame::WinPanel);
        frame_black->setFrameShadow(QFrame::Sunken);
        frame_white = new my_frame(frame_color);
        frame_white->setObjectName(QString::fromUtf8("frame_white"));
        frame_white->setGeometry(QRect(60, 31, 17, 17));
        frame_white->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_white->setFrameShape(QFrame::WinPanel);
        frame_white->setFrameShadow(QFrame::Sunken);
        frame_gray = new my_frame(frame_color);
        frame_gray->setObjectName(QString::fromUtf8("frame_gray"));
        frame_gray->setGeometry(QRect(80, 31, 17, 17));
        frame_gray->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_gray->setFrameShape(QFrame::WinPanel);
        frame_gray->setFrameShadow(QFrame::Sunken);
        frame_d_gray = new my_frame(frame_color);
        frame_d_gray->setObjectName(QString::fromUtf8("frame_d_gray"));
        frame_d_gray->setGeometry(QRect(80, 10, 17, 17));
        frame_d_gray->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_d_gray->setFrameShape(QFrame::WinPanel);
        frame_d_gray->setFrameShadow(QFrame::Sunken);
        frame_red = new my_frame(frame_color);
        frame_red->setObjectName(QString::fromUtf8("frame_red"));
        frame_red->setGeometry(QRect(100, 31, 17, 17));
        frame_red->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        frame_red->setFrameShape(QFrame::WinPanel);
        frame_red->setFrameShadow(QFrame::Sunken);
        frame_d_red = new my_frame(frame_color);
        frame_d_red->setObjectName(QString::fromUtf8("frame_d_red"));
        frame_d_red->setGeometry(QRect(100, 10, 17, 17));
        frame_d_red->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 0, 0);"));
        frame_d_red->setFrameShape(QFrame::WinPanel);
        frame_d_red->setFrameShadow(QFrame::Sunken);
        frame_yellow = new my_frame(frame_color);
        frame_yellow->setObjectName(QString::fromUtf8("frame_yellow"));
        frame_yellow->setGeometry(QRect(120, 31, 17, 17));
        frame_yellow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        frame_yellow->setFrameShape(QFrame::WinPanel);
        frame_yellow->setFrameShadow(QFrame::Sunken);
        frame_d_yellow = new my_frame(frame_color);
        frame_d_yellow->setObjectName(QString::fromUtf8("frame_d_yellow"));
        frame_d_yellow->setGeometry(QRect(120, 10, 17, 17));
        frame_d_yellow->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 0);"));
        frame_d_yellow->setFrameShape(QFrame::WinPanel);
        frame_d_yellow->setFrameShadow(QFrame::Sunken);
        frame_blue = new my_frame(frame_color);
        frame_blue->setObjectName(QString::fromUtf8("frame_blue"));
        frame_blue->setGeometry(QRect(160, 31, 17, 17));
        frame_blue->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        frame_blue->setFrameShape(QFrame::WinPanel);
        frame_blue->setFrameShadow(QFrame::Sunken);
        frame_d_blue_2 = new my_frame(frame_color);
        frame_d_blue_2->setObjectName(QString::fromUtf8("frame_d_blue_2"));
        frame_d_blue_2->setGeometry(QRect(180, 10, 17, 17));
        frame_d_blue_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 128);"));
        frame_d_blue_2->setFrameShape(QFrame::WinPanel);
        frame_d_blue_2->setFrameShadow(QFrame::Sunken);
        frame_d_pink = new my_frame(frame_color);
        frame_d_pink->setObjectName(QString::fromUtf8("frame_d_pink"));
        frame_d_pink->setGeometry(QRect(200, 10, 17, 17));
        frame_d_pink->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 0, 128);"));
        frame_d_pink->setFrameShape(QFrame::WinPanel);
        frame_d_pink->setFrameShadow(QFrame::Sunken);
        frame_green = new my_frame(frame_color);
        frame_green->setObjectName(QString::fromUtf8("frame_green"));
        frame_green->setGeometry(QRect(140, 31, 17, 17));
        frame_green->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        frame_green->setFrameShape(QFrame::WinPanel);
        frame_green->setFrameShadow(QFrame::Sunken);
        frame_pink = new my_frame(frame_color);
        frame_pink->setObjectName(QString::fromUtf8("frame_pink"));
        frame_pink->setGeometry(QRect(200, 31, 17, 17));
        frame_pink->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        frame_pink->setFrameShape(QFrame::WinPanel);
        frame_pink->setFrameShadow(QFrame::Sunken);
        frame_d_green = new my_frame(frame_color);
        frame_d_green->setObjectName(QString::fromUtf8("frame_d_green"));
        frame_d_green->setGeometry(QRect(140, 10, 17, 17));
        frame_d_green->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 0);"));
        frame_d_green->setFrameShape(QFrame::WinPanel);
        frame_d_green->setFrameShadow(QFrame::Sunken);
        frame_d_blue = new my_frame(frame_color);
        frame_d_blue->setObjectName(QString::fromUtf8("frame_d_blue"));
        frame_d_blue->setGeometry(QRect(160, 10, 17, 17));
        frame_d_blue->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 128);"));
        frame_d_blue->setFrameShape(QFrame::WinPanel);
        frame_d_blue->setFrameShadow(QFrame::Sunken);
        frame_blue_2 = new my_frame(frame_color);
        frame_blue_2->setObjectName(QString::fromUtf8("frame_blue_2"));
        frame_blue_2->setGeometry(QRect(180, 31, 17, 17));
        frame_blue_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        frame_blue_2->setFrameShape(QFrame::WinPanel);
        frame_blue_2->setFrameShadow(QFrame::Sunken);
        frame_green_2 = new my_frame(frame_color);
        frame_green_2->setObjectName(QString::fromUtf8("frame_green_2"));
        frame_green_2->setGeometry(QRect(240, 31, 17, 17));
        frame_green_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 128);"));
        frame_green_2->setFrameShape(QFrame::WinPanel);
        frame_green_2->setFrameShadow(QFrame::Sunken);
        frame_d_blue_3 = new my_frame(frame_color);
        frame_d_blue_3->setObjectName(QString::fromUtf8("frame_d_blue_3"));
        frame_d_blue_3->setGeometry(QRect(260, 10, 17, 17));
        frame_d_blue_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 255);"));
        frame_d_blue_3->setFrameShape(QFrame::WinPanel);
        frame_d_blue_3->setFrameShadow(QFrame::Sunken);
        frame_d_blue_4 = new my_frame(frame_color);
        frame_d_blue_4->setObjectName(QString::fromUtf8("frame_d_blue_4"));
        frame_d_blue_4->setGeometry(QRect(280, 10, 17, 17));
        frame_d_blue_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 64, 128);"));
        frame_d_blue_4->setFrameShape(QFrame::WinPanel);
        frame_d_blue_4->setFrameShadow(QFrame::Sunken);
        frame_yellow_2 = new my_frame(frame_color);
        frame_yellow_2->setObjectName(QString::fromUtf8("frame_yellow_2"));
        frame_yellow_2->setGeometry(QRect(220, 31, 17, 17));
        frame_yellow_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 128);"));
        frame_yellow_2->setFrameShape(QFrame::WinPanel);
        frame_yellow_2->setFrameShadow(QFrame::Sunken);
        frame_blue_4 = new my_frame(frame_color);
        frame_blue_4->setObjectName(QString::fromUtf8("frame_blue_4"));
        frame_blue_4->setGeometry(QRect(280, 31, 17, 17));
        frame_blue_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 255);"));
        frame_blue_4->setFrameShape(QFrame::WinPanel);
        frame_blue_4->setFrameShadow(QFrame::Sunken);
        frame_d_yellow_2 = new my_frame(frame_color);
        frame_d_yellow_2->setObjectName(QString::fromUtf8("frame_d_yellow_2"));
        frame_d_yellow_2->setGeometry(QRect(220, 10, 17, 17));
        frame_d_yellow_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 64);"));
        frame_d_yellow_2->setFrameShape(QFrame::WinPanel);
        frame_d_yellow_2->setFrameShadow(QFrame::Sunken);
        frame_d_green_2 = new my_frame(frame_color);
        frame_d_green_2->setObjectName(QString::fromUtf8("frame_d_green_2"));
        frame_d_green_2->setGeometry(QRect(240, 10, 17, 17));
        frame_d_green_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 64, 64);"));
        frame_d_green_2->setFrameShape(QFrame::WinPanel);
        frame_d_green_2->setFrameShadow(QFrame::Sunken);
        frame_blue_3 = new my_frame(frame_color);
        frame_blue_3->setObjectName(QString::fromUtf8("frame_blue_3"));
        frame_blue_3->setGeometry(QRect(260, 31, 17, 17));
        frame_blue_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 255, 255);"));
        frame_blue_3->setFrameShape(QFrame::WinPanel);
        frame_blue_3->setFrameShadow(QFrame::Sunken);
        frame_d_orange = new my_frame(frame_color);
        frame_d_orange->setObjectName(QString::fromUtf8("frame_d_orange"));
        frame_d_orange->setGeometry(QRect(320, 10, 17, 17));
        frame_d_orange->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 64, 0);"));
        frame_d_orange->setFrameShape(QFrame::WinPanel);
        frame_d_orange->setFrameShadow(QFrame::Sunken);
        frame_orange = new my_frame(frame_color);
        frame_orange->setObjectName(QString::fromUtf8("frame_orange"));
        frame_orange->setGeometry(QRect(320, 31, 17, 17));
        frame_orange->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 128, 64);"));
        frame_orange->setFrameShape(QFrame::WinPanel);
        frame_orange->setFrameShadow(QFrame::Sunken);
        frame_d_pink_2 = new my_frame(frame_color);
        frame_d_pink_2->setObjectName(QString::fromUtf8("frame_d_pink_2"));
        frame_d_pink_2->setGeometry(QRect(300, 10, 17, 17));
        frame_d_pink_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 0, 255);"));
        frame_d_pink_2->setFrameShape(QFrame::WinPanel);
        frame_d_pink_2->setFrameShadow(QFrame::Sunken);
        frame_pink_2 = new my_frame(frame_color);
        frame_pink_2->setObjectName(QString::fromUtf8("frame_pink_2"));
        frame_pink_2->setGeometry(QRect(300, 31, 17, 17));
        frame_pink_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 128);"));
        frame_pink_2->setFrameShape(QFrame::WinPanel);
        frame_pink_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(frame_color, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClear_image);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSet_Line_Width);
        menuEdit->addAction(actionSet_Text_Font);
        menuView->addAction(actionTool_box);
        menuView->addAction(actionColor_Box);
        menuView->addAction(actionStatus_Bar);
        menuView->addAction(actionText_Toolbar);
        menuHelp->addAction(actionAbout_Paint);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Paint", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open\342\200\246", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As\342\200\246", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRepeat->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
#if QT_CONFIG(shortcut)
        actionRepeat->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionClear_Selection->setText(QCoreApplication::translate("MainWindow", "Clear Selection", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionTool_box->setText(QCoreApplication::translate("MainWindow", "Tool Box", nullptr));
#if QT_CONFIG(shortcut)
        actionTool_box->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor_Box->setText(QCoreApplication::translate("MainWindow", "Color Box", nullptr));
#if QT_CONFIG(shortcut)
        actionColor_Box->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionText_Toolbar->setText(QCoreApplication::translate("MainWindow", "Text Toolbar", nullptr));
        actionAbout_Paint->setText(QCoreApplication::translate("MainWindow", "About Paint", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionStatus_Bar->setText(QCoreApplication::translate("MainWindow", "Status Bar", nullptr));
        actionSet_Line_Width->setText(QCoreApplication::translate("MainWindow", "Set Line Width", nullptr));
        actionClear_image->setText(QCoreApplication::translate("MainWindow", "Clear Image", nullptr));
#if QT_CONFIG(shortcut)
        actionClear_image->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSet_Text_Font->setText(QCoreApplication::translate("MainWindow", "Set Text Font", nullptr));
        pushButton_line->setText(QString());
        pushButton_ellipse->setText(QString());
        pushButton_eraser->setText(QString());
        pushButton_curve->setText(QString());
        pushButton_brush->setText(QString());
        pushButton_polygon->setText(QString());
        pushButton_select->setText(QString());
        pushButton_airbrush->setText(QString());
        pushButton_magnifier->setText(QString());
        pushButton_pencil->setText(QString());
        pushButton_rectangle->setText(QString());
        pushButton_rounded_rectangle->setText(QString());
        pushButton_fill_with_clr->setText(QString());
        pushButton_text->setText(QString());
        pushButton_pick_clr->setText(QString());
        pushButton_free_form->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
