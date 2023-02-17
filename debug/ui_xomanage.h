/********************************************************************************
** Form generated from reading UI file 'xomanage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XOMANAGE_H
#define UI_XOMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XOmanage
{
public:
    QWidget *centralwidget;
    QLabel *label_pic;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_pic2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *XOmanage)
    {
        if (XOmanage->objectName().isEmpty())
            XOmanage->setObjectName("XOmanage");
        XOmanage->resize(1333, 769);
        XOmanage->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.976, y1:1, x2:0.980769, y2:1, stop:0 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(XOmanage);
        centralwidget->setObjectName("centralwidget");
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(-10, 20, 661, 351));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 460, 461, 71));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"font: 700 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border:2px solid  qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"border-radius: 20px;\n"
"\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 590, 461, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"font: 700 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border:2px solid  qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"border-radius: 20px\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1541, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));
        label_pic2 = new QLabel(centralwidget);
        label_pic2->setObjectName("label_pic2");
        label_pic2->setGeometry(QRect(890, 320, 431, 371));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, 700, 1561, 20));
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));
        XOmanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(XOmanage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1333, 26));
        XOmanage->setMenuBar(menubar);
        statusbar = new QStatusBar(XOmanage);
        statusbar->setObjectName("statusbar");
        XOmanage->setStatusBar(statusbar);

        retranslateUi(XOmanage);

        QMetaObject::connectSlotsByName(XOmanage);
    } // setupUi

    void retranslateUi(QMainWindow *XOmanage)
    {
        XOmanage->setWindowTitle(QCoreApplication::translate("XOmanage", "XOmanage", nullptr));
        label_pic->setText(QString());
        pushButton->setText(QCoreApplication::translate("XOmanage", "Two players", nullptr));
        pushButton_2->setText(QCoreApplication::translate("XOmanage", "Play with computer", nullptr));
        label->setText(QString());
        label_pic2->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class XOmanage: public Ui_XOmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XOMANAGE_H
