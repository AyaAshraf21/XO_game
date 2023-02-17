/********************************************************************************
** Form generated from reading UI file 'computerplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERPLAYER_H
#define UI_COMPUTERPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_computerPlayer
{
public:
    QLabel *label_pic3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *computerPlayer)
    {
        if (computerPlayer->objectName().isEmpty())
            computerPlayer->setObjectName("computerPlayer");
        computerPlayer->resize(1264, 685);
        computerPlayer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_pic3 = new QLabel(computerPlayer);
        label_pic3->setObjectName("label_pic3");
        label_pic3->setGeometry(QRect(0, 20, 451, 281));
        label_pic3->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(computerPlayer);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 450, 181, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";\n"
"border:2px solid  qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"border-radius: 20px;"));
        lineEdit = new QLineEdit(computerPlayer);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(610, 450, 291, 31));
        label_5 = new QLabel(computerPlayer);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 310, 671, 331));
        label_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(226, 226, 226, 255), stop:0.966346 rgba(255, 255, 255, 255));\n"
"\n"
"border:2px solid  lightgray;\n"
"border-radius: 20px;"));
        pushButton = new QPushButton(computerPlayer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 570, 301, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";\n"
"border:2px solid  qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));\n"
"border-radius: 20px;"));
        label_2 = new QLabel(computerPlayer);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 300, 381, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"border:2px solidqlineargradient(spread:pad, x1:0, y1:0, x2:0.00961538, y2:0, stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 20px;\n"
"color: rgb(70, 95, 177);"));
        label_3 = new QLabel(computerPlayer);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-70, 670, 1541, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));
        label_4 = new QLabel(computerPlayer);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-30, 0, 1541, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));
        label_5->raise();
        label_pic3->raise();
        label->raise();
        lineEdit->raise();
        pushButton->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(computerPlayer);

        QMetaObject::connectSlotsByName(computerPlayer);
    } // setupUi

    void retranslateUi(QDialog *computerPlayer)
    {
        computerPlayer->setWindowTitle(QCoreApplication::translate("computerPlayer", "Dialog", nullptr));
        label_pic3->setText(QString());
        label->setText(QCoreApplication::translate("computerPlayer", "   Player   ( O )", nullptr));
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("computerPlayer", "Play", nullptr));
        label_2->setText(QCoreApplication::translate("computerPlayer", "          Player VS Computer", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class computerPlayer: public Ui_computerPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERPLAYER_H
