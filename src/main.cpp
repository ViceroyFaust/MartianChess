#include <iostream>

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

int main() {
    drawBoard();
}