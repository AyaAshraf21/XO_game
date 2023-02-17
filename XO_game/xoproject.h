#ifndef XOPROJECT_H
#define XOPROJECT_H
#include <QString>

using namespace std;

class XOproject
{

public:
    XOproject();
    bool is_winner(QString vec[3][3]);
    bool is_draw (QString vec[3][3]);
    bool isMove (QString vec[3][3]);
    int minimax (QString vec[3][3] , int sum , bool isMax , QString computer , QString player);
    bool game_over(QString vec[3][3]);
};

#endif // XOPROJECT_H
