#include <iostream>

class Piece {
   public:
    const int value;
    int row, col;
    Piece(int c_value, int c_row, int c_col)
        : value(c_value), row(c_row), col(c_col) {}
};

Piece[18] pieces;

void startGame() {
    // P2 pieces
    // Queens
    pieces[0] = Piece(3, 8, 1);
    pieces[1] = Piece(3, 8, 2);
    pieces[2] = Piece(3, 7, 1);
    // Drones
    pieces[3] = Piece(2, 8, 3);
    pieces[4] = Piece(2, 7, 2);
    pieces[5] = Piece(2, 6, 1);
    // Pawns
    pieces[6] = Piece(1, 7, 3);
    pieces[7] = Piece(1, 6, 3);
    pieces[8] = Piece(1, 6, 2);

    // P1 pieces
    // Queens
    pieces[9] = Piece(3, 1, 4);
    pieces[10] = Piece(3, 1, 3);
    pieces[11] = Piece(3, 2, 4);
    // Drones
    pieces[12] = Piece(2, 3, 4);
    pieces[13] = Piece(2, 2, 3);
    pieces[14] = Piece(2, 1, 2);
    // Pawns
    pieces[15] = Piece(1, 3, 3);
    pieces[16] = Piece(1, 3, 2);
    pieces[17] = Piece(1, 2, 2);
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