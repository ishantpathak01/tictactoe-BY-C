#include <stdio.h>
#include <windows.h>

char board[3][3] = { {'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'} };

void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void printXO(char c) {
    if (c == 'X') { color(12); printf("X"); }      // Bright Red
    else if (c == 'O') { color(10); printf("O"); } // Bright Green
    else { color(15); printf("%c", c); }           // White numbers
}

void printBoard() {
    system("cls");
    color(11);
    printf("\n\n      TIC TAC TOE \n");
    color(14);
    printf("        Player 1 (X - Red)\n");
    printf("        Player 2 (O - Green)\n\n");

    color(14);
    printf("     |     |     \n");
    printf("  "); printXO(board[0][0]); printf("  |  "); printXO(board[0][1]); printf("  |  "); printXO(board[0][2]); printf("  \n");
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  "); printXO(board[1][0]); printf("  |  "); printXO(board[1][1]); printf("  |  "); printXO(board[1][2]); printf("  \n");
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  "); printXO(board[2][0]); printf("  |  "); printXO(board[2][1]); printf("  |  "); printXO(board[2][2]); printf("  \n");
    printf("     |     |     \n\n");

    color(15);
}

int checkWin() {
    for (int i = 0; i < 3; i++)
        if (board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return 1;

    for (int i = 0; i < 3; i++)
        if (board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return 1;

    if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return 1;

    if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return 1;

    return 0;
}

int checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;

    return 1;
}

void markCell(int choice, char mark) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    board[row][col] = mark;
}

int isValid(int choice) {
    if (choice < 1 || choice > 9) return 0;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    return board[row][col] != 'X' && board[row][col] != 'O';
}

int main() {
    int player = 1, choice;
    char mark;

    while (1) {
        printBoard();

        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        color(13);
        printf("Player %d ", player);
        color(15);
        printf("enter a number (1-9): ");

        scanf("%d", &choice);

        if (!isValid(choice)) {
            color(12);
            printf("Invalid move! Try again.\n");
            Sleep(800);
            continue;
        }

        markCell(choice, mark);

        if (checkWin()) {
            printBoard();
            color(10);
            printf("?? Player %d WINS! ??\n", player);
            break;
        }

        if (checkDraw()) {
            printBoard();
            color(14);
            printf("?? It's a DRAW! ??\n");
            break;
        }

        player++;
    }

    color(7);
    return 0;
}
#include <stdio.h>
#include <windows.h>

char board[3][3] = { {'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'} };

void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void printXO(char c) {
    if (c == 'X') { color(12); printf("X"); }      // Bright Red
    else if (c == 'O') { color(10); printf("O"); } // Bright Green
    else { color(15); printf("%c", c); }           // White numbers
}

void printBoard() {
    system("cls");
    color(11);
    printf("\n\n      TIC TAC TOE \n");
    color(14);
    printf("        Player 1 (X - Red)\n");
    printf("        Player 2 (O - Green)\n\n");

    color(14);
    printf("     |     |     \n");
    printf("  "); printXO(board[0][0]); printf("  |  "); printXO(board[0][1]); printf("  |  "); printXO(board[0][2]); printf("  \n");
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  "); printXO(board[1][0]); printf("  |  "); printXO(board[1][1]); printf("  |  "); printXO(board[1][2]); printf("  \n");
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  "); printXO(board[2][0]); printf("  |  "); printXO(board[2][1]); printf("  |  "); printXO(board[2][2]); printf("  \n");
    printf("     |     |     \n\n");

    color(15);
}

int checkWin() {
    for (int i = 0; i < 3; i++)
        if (board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return 1;

    for (int i = 0; i < 3; i++)
        if (board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return 1;

    if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return 1;

    if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return 1;

    return 0;
}

int checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;

    return 1;
}

void markCell(int choice, char mark) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    board[row][col] = mark;
}

int isValid(int choice) {
    if (choice < 1 || choice > 9) return 0;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    return board[row][col] != 'X' && board[row][col] != 'O';
}

int main() {
    int player = 1, choice;
    char mark;

    while (1) {
        printBoard();

        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        color(13);
        printf("Player %d ", player);
        color(15);
        printf("enter a number (1-9): ");

        scanf("%d", &choice);

        if (!isValid(choice)) {
            color(12);
            printf("Invalid move! Try again.\n");
            Sleep(800);
            continue;
        }

        markCell(choice, mark);

        if (checkWin()) {
            printBoard();
            color(10);
            printf("?? Player %d WINS! ??\n", player);
            break;
        }

        if (checkDraw()) {
            printBoard();
            color(14);
            printf("?? It's a DRAW! ??\n");
            break;
        }

        player++;
    }

    color(7);
    return 0;
}
