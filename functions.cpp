string getUserName(char userLetter){
    string userName;

    cout << "Enter " << userLetter <<" user's name: ";
    getline(cin, userName);

    return userName;
}

void makeUserMove(GameBoard &gameBoard, string userName, char userLetter){
    int row, col;

    cout << userName << " where will you like to place your letter ?" << endl;
    cout << "Enter square row number : ";
    cin >> row;
    cout << "Enter square column number : ";
    cin >> col;

    row--;
    col--;

    gameBoard.setSquare(row, col, userLetter);

}