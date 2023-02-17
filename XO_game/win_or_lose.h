#ifndef WIN_OR_LOSE_H
#define WIN_OR_LOSE_H

#include <QDialog>
using namespace std;

namespace Ui {
class win_or_lose;
}

class win_or_lose : public QDialog
{
    Q_OBJECT

public:
    explicit win_or_lose(QWidget *parent = nullptr);
    ~win_or_lose();
    void copy_file_to_text();
    void clearFile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::win_or_lose *ui;
    QString word = "";
};

#endif // WIN_OR_LOSE_H
