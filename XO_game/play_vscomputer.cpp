#include "play_vscomputer.h"
#include "ui_play_vscomputer.h"
#include "xoproject.h"
#include <QMessageBox>
#include <string>
#include <QTextStream>
#include <fstream>
#include "win_or_lose.h"


play_VScomputer::play_VScomputer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::play_VScomputer)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Aya Ashraf/3D Objects/QTdesigner/XO_Game/XO_Game/xo.jpg");
    ui->label_pic3 ->setPixmap(pix.scaled(400 , 300 ,Qt::KeepAspectRatio));
    read_name();
    ui->label_7->setText(QString::fromStdString(name));
    ui->label_12->setText(QString::fromStdString(name));

}

play_VScomputer::~play_VScomputer()
{
    delete ui;
}



void play_VScomputer::read_name(){
    ifstream file;
    file.open("XO2.txt");
    string text;
    while(file>>text){
        name = text;
    }
    file.close();
}


void play_VScomputer::player_status(QString status){
    win_or_lose stat;
    fstream file;
    file.open("XO.txt" , ios::out);
    file<<status.toStdString();
    file.close();
    stat.setModal(true);
    stat.exec();
}


void play_VScomputer::clear_file(){
    fstream file;
    string text = "";
    file.open("XO2.txt" , ios::out);
    file<<text;
    file.close();
}


void play_VScomputer::on_pushButton_clicked()
{

}


int play_VScomputer::bestMove(QString vec[3][3] ,int move, QString computer , QString player){
    QTextStream out (stdout);
    XOproject pro;
    int bestScore = -1000 , score = 0;
    int x = -1 ,  y = -1 ;
    for(int i=0 ;i<3 ;i++){
        for(int j=0 ;j<3 ;j++){
            if (vec[i][j] == "f"){
                vec[i][j] = computer;
                score = pro.minimax(vec , move+1 , false , computer , player);
                vec[i][j] = "f";

                if(score > bestScore){
                    bestScore = score;
                    x = i;
                    y = j;

                }
            }
        }
    }
    return x*3+y;
}




bool play_VScomputer::who_turn(){

    string text;
    if(!check){
        check = !check;
        return false;
    }
    else{
        check = !check;
        return true;
    }
}

void play_VScomputer::computer_turn(){
    XOproject pro;

    int row = 0 , col =0;
    int n = bestMove(vec ,moveIndex, computer , player);
    row = n / 3;
    col = n % 3;
    moveIndex+=2;

    if     ((row == 0)&&(col == 0)){
        vec[0][0] = computer;
        ui->pushButton_11->setText(computer);
    }
    else if((row == 0)&&(col == 1)){
        vec[0][1] = computer;
        ui->pushButton_7->setText(computer);
    }
    else if((row == 0)&&(col == 2)){
        vec[0][2] = computer;
        ui->pushButton_10->setText(computer);
    }
    else if((row == 1)&&(col == 0)){
        vec[1][0] = computer;
        ui->pushButton_9->setText(computer);
    }
    else if((row == 1)&&(col == 1)){
        vec[1][1] = computer;
        ui->pushButton_13->setText(computer);
    }
    else if((row == 1)&&(col == 2)){
        vec[1][2] = computer;
        ui->pushButton_12->setText(computer);
    }
    else if((row == 2)&&(col == 0)){
        vec[2][0] = computer;
        ui->pushButton_8->setText(computer);
    }
    else if((row == 2)&&(col == 1)){
        vec[2][1] = computer;
        ui->pushButton_14->setText(computer);
    }
    else if((row == 2)&&(col == 2)){
        vec[2][2] = computer;
        ui->pushButton_15->setText(computer);
    }

}




void play_VScomputer::on_pushButton_11_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[0][0] == "f"){
            vec[0][0] = player;
            ui->pushButton_11->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){

                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }

}


void play_VScomputer::on_pushButton_7_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[0][1] == "f"){
            vec[0][1] = player;
            ui->pushButton_7->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}


void play_VScomputer::on_pushButton_10_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[0][2] == "f"){
            vec[0][2] = player;
            ui->pushButton_10->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}



void play_VScomputer::on_pushButton_9_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[1][0] == "f"){
            vec[1][0] = player;
            ui->pushButton_9->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}


void play_VScomputer::on_pushButton_13_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[1][1] == "f"){
            vec[1][1] = player;
            ui->pushButton_13->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}


void play_VScomputer::on_pushButton_12_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[1][2] == "f"){
            vec[1][2] = player;
            ui->pushButton_12->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}


void play_VScomputer::on_pushButton_8_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[2][0] == "f"){
            vec[2][0] = player;
            ui->pushButton_8->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is Loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}


void play_VScomputer::on_pushButton_14_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[2][1] == "f"){
            vec[2][1] = player;
            ui->pushButton_14->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}


void play_VScomputer::on_pushButton_15_clicked()
{
    XOproject pro;
    if(!who_turn()){
        if(vec[2][2] == "f"){
            vec[2][2] = player;
            ui->pushButton_15->setText(player);

            if(pro.is_winner(vec)){
                QString text = QString::fromStdString(name) + " is Winner";
                ui->label_9->setText("1");
                ui->label_10->setText("0");
                clear_file();
                player_status(text);
                play_VScomputer::close();
            }
            else if(pro.is_draw(vec)){
                ui->label_9 ->setText("0");
                ui->label_10->setText("0");
                clear_file();
                player_status("Draw");
                play_VScomputer::close();
            }
            else if(who_turn()){
                computer_turn();
                if(pro.is_winner(vec)){
                    QString text = QString::fromStdString(name) + " is loser";
                    ui->label_9->setText("0");
                    ui->label_10->setText("1");
                    clear_file();
                    player_status(text);
                    play_VScomputer::close();
                }
                else if(pro.is_draw(vec)){
                    ui->label_9 ->setText("0");
                    ui->label_10->setText("0");
                    clear_file();
                    player_status("Draw");
                    play_VScomputer::close();
                }
            }
        }
    }
}




