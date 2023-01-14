#include <iostream>
using namespace std;

class GameBoard{
        char board[4][4];

    public:
        GameBoard();
        void print();
        void setSquare(int row, int col, char val);
        char getSquare(int row, int col);

};


GameBoard::GameBoard(){
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            board[i][j] = '-';
        }
    }
}


void GameBoard::print(){
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
}


void GameBoard::setSquare(int row, int col, char val){
    if(board[row][col] == '-'){
        board[row][col] = val;
    }else{
        cout << "Selected Square is already occupied";
    }
}


char GameBoard::getSquare(int row, int col){
    return board[row][col];
}