#include "piece.h"
#include "square.h"

Piece Square::get_piece() {
    return piece;
}

bool Square::occupied() {
    return piece != nullptr;
}

bool Square::w_threatened() {
    return w_threat;
}

bool Square::b_threatened() {
    return b_threat;
}
