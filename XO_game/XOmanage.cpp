#include "XOmanage.h"
#include "ui_XOmanage.h"
#include "twoplayer.h"
#include "computerplayer.h"
#include <QPixmap>

XOmanage::XOmanage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::XOmanage)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Aya Ashraf/3D Objects/QTdesigner/XO_Game/XO_Game/xo.jpg");
    ui->label_pic ->setPixmap(pix.scaled(500 , 400 ,Qt::KeepAspectRatio));

    QPixmap pix2 ("C:/Users/Aya Ashraf/3D Objects/QTdesigner/XO_Game/XO_Game/xo2.png");
    ui->label_pic2->setPixmap(pix2.scaled(400, 350 , Qt::KeepAspectRatio));

}

XOmanage::~XOmanage()
{
    delete ui;
}


void XOmanage::on_pushButton_clicked()
{
    twoplayer two;
    two.setModal(true);
    two.exec();

}


void XOmanage::on_pushButton_2_clicked()
{
    computerPlayer computer;
    computer.setModal(true);
    computer.exec();

}

