#include "win_or_lose.h"
#include "ui_win_or_lose.h"
#include <fstream>


win_or_lose::win_or_lose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::win_or_lose)
{
    ui->setupUi(this);
}


win_or_lose::~win_or_lose()
{
    delete ui;
}



void win_or_lose::copy_file_to_text(){
    fstream file;
    string text;
    QTextStream out(stdout);

    file.open("XO.txt" , ios::in);
    while(file >> text){
        word = word + " " + QString::fromStdString(text)+" ";
    }
    file.close();


}

void win_or_lose::clearFile(){
    fstream file;
    string text = "";
    file.open("XO.txt" , ios::out);
    file<<text;
    file.close();
}




void win_or_lose::on_pushButton_clicked()
{
    copy_file_to_text();
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setText(word);
    clearFile();
}

