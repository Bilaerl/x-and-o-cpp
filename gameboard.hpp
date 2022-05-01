#include <iostream>
using namespace std;

class Gameboard{
        char board[4][4];

    public:
        Gameboard(){
            for(int i=0; i < 4; i++){
                for(int j=0; j < 4; j++){
                    board[i][j] = '-';
                }
            }
        }

        void print(){
            for(int i=0; i < 4; i++){
                for(int j=0; j < 4; j++){
                    cout << board[i][j];
                }
                cout << endl;
            }
        }

        void setSquare(int row, int col, char val){
            if(board[row][col] == '-'){
                board[row][col] = val;
            }else{
                cout << "Selected Square is already occupied";
            }
        }

        char getSquare(int row, int col){
            return board[row][col];
        }

        
};