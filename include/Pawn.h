#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H
#include "Piece.h"
#include <cmath>
#include <vector>
class Pawn:public Piece{
public:
    Pawn(Color c) : Piece(c) {}
    ~Pawn() override;
    bool isValidMove(int startX,int endX,int startY,int endY,const std::vector<std::vector<Piece*>>& board) override;
};
#endif //CHESS_PAWN_H
