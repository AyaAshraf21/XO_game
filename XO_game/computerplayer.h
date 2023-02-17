#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include <QDialog>

namespace Ui {
class computerPlayer;
}

class computerPlayer : public QDialog
{
    Q_OBJECT

public:
    explicit computerPlayer(QWidget *parent = nullptr);
    ~computerPlayer();
    void save_in_file();

private slots:
    void on_pushButton_clicked();

private:
    Ui::computerPlayer *ui;
    QString name;
};

#endif // COMPUTERPLAYER_H
