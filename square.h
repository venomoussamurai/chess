#ifndef SQUARE_H
#define SQUARE_H
#include "piece.h"

class Square {
    Piece piece;
    int w_threat;
    int b_threat;

public:
    Square() = default;
    Piece get_piece();
    bool occupied();
    bool w_threatened();
    bool b_threatened();
    ~Sqaure() = default;
};


#endif // SQUARE_H
