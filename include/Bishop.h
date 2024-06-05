#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H
#include "Pawn.h"
#include <vector>

class Bishop:public Pawn{
public:
    explicit Bishop(Color color);
    ~Bishop() override;
    bool isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) override;
};
#endif //CHESS_BISHOP_H
