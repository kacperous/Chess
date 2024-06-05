#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H
#include "Pawn.h"
#include <vector>

class Rook:public Pawn{
public:
    explicit Rook(Color color);
    ~Rook() override;
    bool isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) override;
};
#endif //CHESS_ROOK_H
