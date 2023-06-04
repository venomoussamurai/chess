#include "board.h"

Board::Board() {
}

Piece& Board::get(int i, int j) {
    return board[i][j];
}

