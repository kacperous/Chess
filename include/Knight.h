#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H
#include "Pawn.h"
#include <vector>

class Knight:public Pawn{
public:
    explicit Knight(Color color);
    ~Knight() override;
    bool isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) override;
};
#endif //CHESS_KNIGHT_H
