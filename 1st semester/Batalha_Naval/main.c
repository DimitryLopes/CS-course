#include <stdio.h>

void ApplySkill(
    int board[10][10],
    int skill[5][5],
    int originRow,
    int originCol
) {
    int size = 5;
    int boardSize = 10;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (skill[i][j] == 1) {
                int row = originRow + (i - size / 2);
                int col = originCol + (j - size / 2);

                if (row >= 0 && row < boardSize &&
                    col >= 0 && col < boardSize) {

                    if (board[row][col] != 3)
                        board[row][col] = 5;
                }
            }
        }
    }
}

int main() {

    int boardSize = 10;
    int skillSize = 5;
    int shipSize = 3;

    int board[10][10];

    for (int i = 0; i < boardSize; i++)
        for (int j = 0; j < boardSize; j++)
            board[i][j] = 0;

    int shipHorizontal[3] = {3,3,3};
    int shipVertical[3] = {3,3,3};

    int horizontalRow = 2, horizontalColumn = 2;
    int verticalRow = 6, verticalColumn = 6;

    for (int i = 0; i < shipSize; i++)
        board[horizontalRow][horizontalColumn + i] = 3;

    for (int i = 0; i < shipSize; i++)
        board[verticalRow + i][verticalColumn] = 3;

    int cone[5][5];
    int cross[5][5];
    int octa[5][5];

    for (int i = 0; i < skillSize; i++) {
        for (int j = 0; j < skillSize; j++) {

            cone[i][j] =
                (j >= skillSize/2 - i && j <= skillSize/2 + i) ? 1 : 0;

            cross[i][j] =
                (i == skillSize/2 || j == skillSize/2) ? 1 : 0;

            int d1 = (i > j) ? i - j : j - i;
            int d2 = (i > skillSize-1-j) ?
                     i - (skillSize-1-j) :
                     (skillSize-1-j) - i;

            octa[i][j] = (d1 + d2 == skillSize/2) ? 1 : 0;
        }
    }

    ApplySkill(board, cone, 4, 4);
    ApplySkill(board, cross, 5, 2);
    ApplySkill(board, octa, 7, 3);

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }

    return 0;
}
