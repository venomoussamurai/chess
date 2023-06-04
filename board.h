#ifndef BOARD_H
#define BOARD_H
#include "square.h"

class Board {
    Square board[8][8];
public:
    Board();
    Piece& get(int i, int j);
    void print();
    ~Board() = default;
}

#endif // BOARD_H
