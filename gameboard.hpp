#include <iostream>
using namespace std;

class Gameboard{
        char board[4][4];

    public:
        Gameboard();
        void print();
        void setSquare(int row, int col, char val);
        char getSquare(int row, int col);

};


Gameboard::Gameboard(){
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            board[i][j] = '-';
        }
    }
}


void Gameboard::print(){
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
}


void Gameboard::setSquare(int row, int col, char val){
    if(board[row][col] == '-'){
        board[row][col] = val;
    }else{
        cout << "Selected Square is already occupied";
    }
}


char Gameboard::getSquare(int row, int col){
    return board[row][col];
}