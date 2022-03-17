#include <iostream>

class Piece {
   public:
    const int value;
    Piece(int c_value)
        : value(c_value){}
};

Piece[8][4] board;

startGame() {
    // P1 starting places
    // Queens
    board[0][2] = Piec(3);
    board[0][3] = Piece(3);
    board[1][3] = Piece(3);
    // Drones
    board[0][1] = Piece(2);
    board[1][2] = Piece(2);
    board[2][3] = Piece(2);
    // Pawns
    board[1][1] = Piece(1);
    board[2][1] = Piece(1);
    board[2][2] = Piece(1);

    // P2 starting places
    // Queens
    board[6][0] = Piec(3);
    board[7][0] = Piece(3);
    board[7][1] = Piece(3);
    // Drones
    board[5][0] = Piece(2);
    board[6][1] = Piece(2);
    board[7][2] = Piece(2);
    // Pawns
    board[5][1] = Piece(1);
    board[5][2] = Piece(1);
    board[6][2] = Piece(1);
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
    // Draws each row, along with its number
    for (int i = 0; i < 8; ++i) {
        // Draw the dividing line in the middle
        if (i == 4) {
            std::cout << 'X' << "  "
                      << "----------"
                      << std::endl;
        }
        std::cout << 8 - i << "  ";
        // print each row of dots
        for (int j = 0; j < 4; ++j) {
            std::cout << '.';
            if (j != 3)
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}
}
;

int main() {
}