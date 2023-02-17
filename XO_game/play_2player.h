#ifndef PLAY_2PLAYER_H
#define PLAY_2PLAYER_H

#include <QDialog>
using namespace std;

namespace Ui {
class Play_2player;
}

class Play_2player : public QDialog
{
    Q_OBJECT

public:
    explicit Play_2player(QWidget *parent = nullptr);
    ~Play_2player();
    void save_in_vector();
    void clear_file ();
    void player_status(QString text);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::Play_2player *ui;
    bool check = false;
    QString symbol;
    QString vec[3][3] = {{"f","f","f"},{"f","f","f"},{"f","f","f"}};
    vector<string> names;

};

#endif // PLAY_2PLAYER_H
