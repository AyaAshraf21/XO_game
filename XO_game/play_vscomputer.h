#ifndef PLAY_VSCOMPUTER_H
#define PLAY_VSCOMPUTER_H

#include <QDialog>
using namespace std;

namespace Ui {
class play_VScomputer;
}

class play_VScomputer : public QDialog
{
    Q_OBJECT

public:
    explicit play_VScomputer(QWidget *parent = nullptr);
    ~play_VScomputer();
    bool who_turn();
    void computer_turn();
    int  bestMove(QString vec[3][3] ,int move, QString computer , QString player);
    void read_name();
    void clear_file();
    void player_status(QString status);


private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_clicked();

private:
    Ui::play_VScomputer *ui;
    bool check = false;
    QString vec[3][3] = {{"f","f","f"},{"f","f","f"},{"f","f","f"}};
    QString computer = "O";
    QString player = "X";
    vector<int> coordinate{1,2} ;
    int moveIndex = 0;
    string name;

};

#endif // PLAY_VSCOMPUTER_H
