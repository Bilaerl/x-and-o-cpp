#include "gameboard.hpp"

int main(){
    Gameboard game_board;

    game_board.setSquare(0,0,'x');
    game_board.setSquare(1,0,'o');
    game_board.setSquare(1,1,'x');

    game_board.print();

    return 0;
}