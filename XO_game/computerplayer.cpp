#include "computerplayer.h"
#include "ui_computerplayer.h"
#include "play_vscomputer.h"
#include <fstream>
#include <QMessageBox>

computerPlayer::computerPlayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::computerPlayer)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Aya Ashraf/3D Objects/QTdesigner/XO_Game/XO_Game/xo.jpg");
    ui->label_pic3 ->setPixmap(pix.scaled(400 , 300 ,Qt::KeepAspectRatio));
}

computerPlayer::~computerPlayer()
{
    delete ui;
}

void computerPlayer::save_in_file(){
    fstream file;
    file.open("XO2.txt");
    name = ui->lineEdit->text();
    string text = name.toStdString();
    file<<text;
    file.close();
}

void computerPlayer::on_pushButton_clicked()
{
    QString word1 ;
    word1 = ui->lineEdit->text();
    if(word1 != ""){
        save_in_file();
        play_VScomputer computer;
        computer.setModal(true);
        computer.exec();
    }
    else{
        QMessageBox::critical(this , "Wrong" , "you must write your name first , please try again");

    }

}

