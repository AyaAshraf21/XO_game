#include "play_2player.h"
#include "ui_play_2player.h"
#include "twoplayer.h"
#include "xoplayer.h"
#include <vector>
#include <QMessageBox>
#include "xoproject.h"
#include <fstream>
#include "win_or_lose.h"

Play_2player::Play_2player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Play_2player)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Aya Ashraf/3D Objects/QTdesigner/XO_Game/XO_Game/xo.jpg");
    ui->label_pic3 ->setPixmap(pix.scaled(400 , 300 ,Qt::KeepAspectRatio));
    save_in_vector();
    ui->label_7->setText(QString::fromStdString(names[0]));
    ui->label_8->setText(QString::fromStdString(names[1]));
    ui->label_12->setText(QString::fromStdString(names[0]));
    ui->label_14->setText(QString::fromStdString(names[1]));
}

Play_2player::~Play_2player()
{
    delete ui;
}



void Play_2player::save_in_vector(){
    ifstream file;
    string word;
    file.open("XO.txt");
    while(file >> word){
        names.push_back(word);
    }
    file.close();
}



void Play_2player::on_pushButton_clicked()
{

    string text;

    if(!check){
        symbol = "X";
        text = names[1] + " turn";
        ui->label_15->setText(QString::fromStdString(text));
        check = !check;
    }
    else{
        symbol = "O";
        text = names[0] + " turn";
        ui->label_15->setText(QString::fromStdString(text));
        check = !check;
    }

}



void Play_2player::player_status(QString status){
    win_or_lose stat;
    fstream file;
    file.open("XO.txt" , ios::out);
    file<<status.toStdString();
    file.close();
    stat.setModal(true);
    stat.exec();
}


void Play_2player::clear_file(){
    string text = "";
    fstream file;
    file.open("XO.txt", ios::out);
    file << text;
    file.close();
}

void Play_2player::on_pushButton_11_clicked()
{
    XOproject pro;

    if(vec[0][0] == "f"){
        on_pushButton_clicked();
        ui->pushButton_11->setText(symbol);
        vec[0][0] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }

}



void Play_2player::on_pushButton_7_clicked()
{
    XOproject pro;

    if(vec[0][1] == "f"){
        on_pushButton_clicked();
        ui->pushButton_7->setText(symbol);
        vec[0][1] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }

}


void Play_2player::on_pushButton_10_clicked()
{
    XOproject pro;

    if(vec[0][2] == "f"){
        on_pushButton_clicked();
        ui->pushButton_10->setText(symbol);
        vec[0][2] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}


void Play_2player::on_pushButton_9_clicked()
{
    XOproject pro;
    if(vec[1][0] == "f"){
        on_pushButton_clicked();
        ui->pushButton_9->setText(symbol);
        vec[1][0] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}


void Play_2player::on_pushButton_13_clicked()
{
    XOproject pro;
    if(vec[1][1] == "f"){
        on_pushButton_clicked();
        ui->pushButton_13->setText(symbol);
        vec[1][1] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}


void Play_2player::on_pushButton_12_clicked()
{
    XOproject pro;
    if(vec[1][2] == "f"){
        on_pushButton_clicked();
        ui->pushButton_12->setText(symbol);
        vec[1][2] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}


void Play_2player::on_pushButton_8_clicked()
{
    XOproject pro;
    if(vec[2][0] == "f"){
        on_pushButton_clicked();
        ui->pushButton_8->setText(symbol);
        vec[2][0] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}


void Play_2player::on_pushButton_14_clicked()
{
    XOproject pro;
    if(vec[2][1] == "f"){
        on_pushButton_clicked();
        ui->pushButton_14->setText(symbol);
        vec[2][1] = symbol;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is Winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}


void Play_2player::on_pushButton_15_clicked()
{
    XOproject pro;
    if(vec[2][2] == "f"){
        on_pushButton_clicked();
        ui->pushButton_15->setText(symbol);
        vec[2][2] = symbol ;
        if(pro.is_winner(vec)){
            if(symbol == "X"){
                QString text = QString::fromStdString(names[0]) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
            else if(symbol == "O"){
                QString text = QString::fromStdString(names[1]) + " is winner";
                ui->label_9->setText("0");
                ui->label_10->setText("1");
                clear_file();
                player_status(text);
                Play_2player::close();
            }
        }
        if(pro.is_draw(vec)){
            ui->label_9->setText("0");
            ui->label_10->setText("0");
            clear_file();
            player_status("Draw");
            Play_2player::close();
        }
    }
}

