#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<time.h>

void printTicTacToe();

int main()
{
    printTicTacToe();


    return 0;
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