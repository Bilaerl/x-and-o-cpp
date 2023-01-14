#include "gameBoard.hpp"
#include "functions.cpp"

int main(){
    GameBoard gameBoard;
    string xUserName, oUserName;

    xUserName = getUserName('X');
    oUserName = getUserName('O');

    cout << xUserName << " " << oUserName << endl;
    
    makeUserMove(gameBoard, xUserName, 'X');
    gameBoard.print();


    return 0;
}