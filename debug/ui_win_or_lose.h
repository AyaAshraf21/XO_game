/********************************************************************************
** Form generated from reading UI file 'win_or_lose.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_OR_LOSE_H
#define UI_WIN_OR_LOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_win_or_lose
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *win_or_lose)
    {
        if (win_or_lose->objectName().isEmpty())
            win_or_lose->setObjectName("win_or_lose");
        win_or_lose->resize(1049, 612);
        win_or_lose->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(win_or_lose);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 10, 1061, 591));
        label->setStyleSheet(QString::fromUtf8("font: 700 72pt \"Segoe UI\";\n"
"background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.0304972, fx:0.5, fy:0.494, stop:0.144231 rgba(0, 169, 255, 255), stop:0.447115 rgba(0, 0, 0, 255), stop:0.918269 rgba(0, 169, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(win_or_lose);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-50, 0, 1541, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));
        label_3 = new QLabel(win_or_lose);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-20, 590, 1541, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0.0432692, y2:1, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));
        pushButton = new QPushButton(win_or_lose);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 271, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Sitka\";\n"
"background-color: qlineargradient(spread:pad, x1:0.0242308, y1:0.079, x2:0, y2:0.665, stop:0.394231 rgba(70, 95, 177, 255), stop:1 rgba(62, 147, 238, 255));"));

        retranslateUi(win_or_lose);

        QMetaObject::connectSlotsByName(win_or_lose);
    } // setupUi

    void retranslateUi(QDialog *win_or_lose)
    {
        win_or_lose->setWindowTitle(QCoreApplication::translate("win_or_lose", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("win_or_lose", "Show result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win_or_lose: public Ui_win_or_lose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_OR_LOSE_H
