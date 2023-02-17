#include "twoplayer.h"
#include "ui_twoplayer.h"
#include "play_2player.h"
#include <fstream>
#include <iostream>
#include <QMessageBox>

using namespace std;

twoplayer::twoplayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::twoplayer)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Aya Ashraf/3D Objects/QTdesigner/XO_Game/XO_Game/xo.jpg");
    ui->label_pic3 ->setPixmap(pix.scaled(400 , 300 ,Qt::KeepAspectRatio));

}

twoplayer::~twoplayer()
{
    delete ui;
}

QString twoplayer::get_name1(){
    return name1;
}

QString twoplayer::get_name2(){
    return name2;
}

void twoplayer::save_in_file(){
    fstream file;
    file.open("XO.txt");
    name1 = ui->lineEdit->text();
    name2 = ui->lineEdit_2->text();
    QString text;
    text = name1 + " " + name2;
    string newtext = text.toStdString();
    file << newtext;
    file.close();
}


void twoplayer::on_pushButton_clicked()
{
    QString word1 , word2;
    word1 = ui->lineEdit->text();
    word2 = ui->lineEdit_2->text();
    if(word1 != "" && word2 != ""){
        save_in_file();
        Play_2player play;
        play.setModal(true);
        play.exec();
    }
    else{
        QMessageBox::critical(this , "Wrong" , "you must write your name first , please try again");
    }
}

