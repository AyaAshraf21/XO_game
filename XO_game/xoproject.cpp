#include "xoproject.h"
#include <QTextStream>
#include <string>

XOproject::XOproject()
{

}


bool XOproject::is_winner(QString vec[3][3]){
    for(int i=0 ;i<=2 ;i++){
        // horizontal
        if((vec[i][0] == vec[i][1])&&(vec[i][0] == vec[i][2])&& (vec[i][0] != "f")){
            return true;
        }
        // vertical
        else if ((vec[0][i] == vec[1][i])&&(vec[0][i] == vec[2][i])&& (vec[0][i] != "f")){
            return true;
        }
        // right diagonal
       else if((vec[0][0] == vec[1][1])&&(vec[0][0] == vec[2][2])&& (vec[0][0] != "f")){
            return true;
        }
        // left diagonal
        else if((vec[0][2] == vec[1][1]) && (vec[0][2] == vec[2][0])&& (vec[0][2]!="f")){
            return true;
        }
    }
    return false;
}




bool XOproject::is_draw(QString vec[3][3]){
    int sum =0;
    for(int i=0 ; i<3;i++){
        for(int j=0 ;j<3;j++){
            if(vec[i][j] != "f"){
                sum++;
            }
        }
    }
    if((sum == 9)&&(!is_winner(vec))){
       return true;
    }
    else{
        return false;
    }
}





bool XOproject::isMove(QString vec[3][3]){
    for(int i=0 ;i<3 ;i++){
        for(int j=0 ;j<3 ;j++){
            if(vec[i][j] == "f"){
                return true;
            }
        }
    }
    return false;
}




bool XOproject::game_over(QString vec[3][3]){
    bool row = false , col = false , right_diag = false , left_diag = false;
    for(int i=0 ;i<=2 ;i++){
        // horizontal
        if((vec[i][0] == vec[i][1])&&(vec[i][0] == vec[i][2])&& (vec[i][0] != "f")){
            row = true;
        }


        // vertical
        else if ((vec[0][i] == vec[1][i])&&(vec[0][i] == vec[2][i])&& (vec[0][i] != "f")){
            col = true;
        }

        // right diagonal
       else if((vec[0][0] == vec[1][1])&&(vec[0][0] == vec[2][2])&& (vec[0][0] != "f")){
            right_diag = true;
        }

        // left diagonal
        else if((vec[0][2] == vec[1][1]) && (vec[0][2] == vec[2][0])&& (vec[0][2]!="f")){
            left_diag = true;
        }
    }
    return row||col||right_diag || left_diag ;
}



int XOproject::minimax(QString vec[3][3] , int sum , bool isMax , QString computer , QString player){
    int score = 0 , bestScore = 0;

    if(game_over(vec)){
        if(isMax)
            return -1;
        else
            return 1;
    }
    else{
        if(sum < 8){
            if(isMax){
                int bestScore = -1000;
                for(int i=0 ;i<3 ;i++){
                    for(int j=0 ;j<3 ;j++){
                        if(vec[i][j] == "f"){
                            vec[i][j] = computer;
                            score = minimax(vec , sum+1 , false , computer , player);
                            vec[i][j] = "f";
                            if (score > bestScore){
                                bestScore = score;
                            }
                        }
                    }
                }
                return bestScore;
            }
            else{
                int bestScore = 1000;
                for(int i=0 ;i<3 ;i++){
                    for(int j=0 ;j<3 ;j++){
                        if(vec[i][j] == "f"){
                            vec[i][j] = player;
                            score = minimax(vec , sum+1 , true , computer , player);
                            vec[i][j] = "f";
                            if (score < bestScore){
                                bestScore = score;
                            }
                        }
                    }
                }
                return bestScore;
            }
        }
        else{
            return 0;
        }
    }
}













