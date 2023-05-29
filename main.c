#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<time.h>

int getNumber();
void printTicTacToe();
char board[3][3];
const char PLAYER = 'X';
const char COMPUTRER = 'O';

void printTicTacToe();
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove ();
void computerMove();
char checkWinner();
void printWinner (char);

int main()
{
    printTicTacToe();
    printf("Press 1 to play vs Computer \n");
    printf("Press 2 for Multiplayer mode \n");
    printf("Enter the play method:");
    int playmentMeth = getNum();
    if(playmentMeth==1)
    {
        printTicTacToe();
    char winner = ' ';
    resetBoard();
    while(winner==' ' && checkFreeSpaces!=0){

        printBoard();
  printf("\n Press 0 to excit the game!\n");
        playerMove();
        computerMove();
        winner=checkWinner();
        if(winner!=' ' || checkFreeSpaces()==0){
            break;

        }
    }
    printBoard();
    printWinner(winner);
    printf("1");
        printf("1");
    }

    return 0;
}

int getNum()
{
    int n;
    scanf("%d",&n);
    return n;
}

void printTicTacToe()
{
    printf("  TTTT  IIIII  CCCCC        TTTTT  AAA   CCCCC        TTTTT  OOO   EEEEE\n");
    printf("    T     I   C     C         T   A   A C     C         T   O   O  E\n");
    printf("    T     I   C               T   AAAAA C               T   O   O  E\n");
    printf("    T     I   C               T   A   A C               T   O   O  EEEE\n");
    printf("    T     I   C               T   A   A C               T   O   O  E\n");
    printf("    T     I   C     C         T   A   A C     C         T   O   O  E\n");
    printf("    T   IIIII  CCCCC          T   A   A  CCCCC          T    OOO   EEEEE\n");



}

void resetBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]= ' ';
        }
    }
};
void printBoard(){
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|--- \n");
    printf(" % c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|--- \n");
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
 //   printf("\n---|---|--- \n");
    printf("\n");


};
int checkFreeSpaces(){
    int    freeSpaces = 9;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]!=' '){
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void playerMove (){
    int x,y;
    do{
        printf("\n Enter the row you want to move 1-3:  "  );
        scanf("%d",&x);
        x--;

        printf("Enter the column you want to move 1-3:  ");
        scanf("%d",&y);
        y--;

        if(board[x][y]!= ' ' ){
            printf("Invalid Input");
        }
        else{
            board[x][y]= PLAYER;
            break;
        }
    }
    while(board[x][y] != ' ' );

};
void computerMove(){
    //creates a seed based on current time
    srand(time(0));
    int x;
    int y;
    if(checkFreeSpaces()>0){
        do{
            x=rand()%3;
            y=rand()%3;

        }
        while(board[x][y] != ' ');

        board[x][y] = COMPUTRER;

    }
    else{
        printWinner(' ');
    }
}
char checkWinner(){
    //check rows for winner
    for(int i = 0; i<3;i++){
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){
            return board[i][0];
        }
    }
    //check columns for winnwer
    for(int j = 0; j<3;j++){
        if(board[0][j]==board[1][j]&& board[0][j]==board[2][j]){
            return board[0][j];
        }
    }
    //check diagonals for winner
    if(board[1][1]==board[0][0] && board[0][0]==board[2][2]){
        return board[0][0];
    }
    if(board[0][2]==board[1][1]&& board[0][2]==board[2][0]){
        return board[0][2];
    }

    return ' ';

};
void printWinner (char winner){
    if(winner==PLAYER){
        printf("YOU WIN");
    }
    else if(winner== COMPUTRER){
        printf("YOU LOSE");
    }
    else{
        printf("TIE");
    //    printf("TIE");

    }

}