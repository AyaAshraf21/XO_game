#ifndef XOMANAGE_H
#define XOMANAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class XOmanage; }
QT_END_NAMESPACE

class XOmanage : public QMainWindow
{
    Q_OBJECT

public:
    XOmanage(QWidget *parent = nullptr);
    ~XOmanage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::XOmanage *ui;
};
#endif // XOMANAGE_H
