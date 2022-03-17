#include <iostream>
int board[8][4];

void initBoard() {
    // P1 starting places
    // Queens
    board[0][2] = 3;
    board[0][3] = 3;
    board[1][3] = 3;
    // Drones
    board[0][1] = 2;
    board[1][2] = 2;
    board[2][3] = 2;
    // Pawns
    board[1][1] = 1;
    board[2][1] = 1;
    board[2][2] = 1;

    // P2 starting places
    // Queens
    board[6][0] = 3;
    board[7][0] = 3;
    board[7][1] = 3;
    // Drones
    board[5][0] = 2;
    board[6][1] = 2;
    board[7][2] = 2;
    // Pawns
    board[5][1] = 1;
    board[5][2] = 1;
    board[6][2] = 1;
}

void drawBoard() {
    std::cout << "   ";
    // Draw ABCD at the top
    for (int i = 0; i < 4; ++i) {
        std::cout << static_cast<char>(65 + i);
        if (i < 3)
            std::cout << "  ";
        else
            std::cout << std::endl;
    }
    // Draw line separating the ABCD
    std::cout << "   " << "----------" << std::endl;
    // Draws each row, along with its number
    for (int i = 0; i < 8; ++i) {
        // Draw the dividing line in the middle
        if (i == 4) {
            std::cout << 'X' << "  "
                      << "----------"
                      << std::endl;
        }
        std::cout << 8 - i << "  ";
        // print each row of dots/pieces
        for (int j = 0; j < 4; ++j) {
            switch (board[i][j]) {
            case 1:
                std::cout << 'P';
                break;
            case 2:
                std::cout << 'D';
                break;
            case 3:
                std::cout << 'Q';
                break;
            default:
                std::cout << '.';
            }
            if (j != 3)
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    // Draw line at end of board
    std::cout << "   " << "----------" << std::endl;
}

int main() {
    initBoard();
    drawBoard();
}
