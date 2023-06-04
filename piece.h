#ifndef PIECE_H
#define PIECE_H

class Piece {
    Square loc;
public:
    Piece() = default;
    bool move(Board& board, Square& dest);
    virtual ~Piece();
}

#endif // PIECE_H
