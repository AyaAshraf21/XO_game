#ifndef TWOPLAYER_H
#define TWOPLAYER_H

#include <QDialog>
using namespace std;
namespace Ui {
class twoplayer;
}

class twoplayer : public QDialog
{
    Q_OBJECT

public:
    explicit twoplayer(QWidget *parent = nullptr);
    ~twoplayer();
    QString get_name1();
    QString get_name2();
    void save_in_file();
    void save_names(vector<QString> name);

private slots:
    void on_pushButton_clicked();

private:
    Ui::twoplayer *ui;
    QString name1;
    QString name2;
};

#endif // TWOPLAYER_H
