#include <iostream>
using namespace std;

class GameBoard{
        char board[4][4];

    public:
        GameBoard();
        void print();
        void setSquare(int row, int col, char val);
        char getSquare(int row, int col);
        bool hasWon(char letter);

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


bool GameBoard::hasWon(char letter){
    bool won;
    // check rows
    for(int i=0; i < 4; i++){
        won = true;

        for(int j=0; j < 4; j++){
            if(board[i][j] != letter){
                won = false;
                break;
            }
        }

        if(won){
            return true;
        }

    }

    // check columns
    for(int i=0; i < 4; i++){
        won = true;

        for(int j=0; j < 4; j++){
            if(board[j][i] != letter){
                won = false;
                break;
            }
        }

        if(won){
            return true;
        }

    }

    // check diagonals
    for(int i=0; i < 4; i++){
        if(board[i][i] != letter and board[i][3-i] != letter){
            return false;
        }
    }

    return true;

}