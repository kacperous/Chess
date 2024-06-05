#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H
#include <vector>
#include "Pawn.h"

class Queen:public Pawn{
public:
    explicit Queen(Color color);
    ~Queen() override;
    bool isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) override;

};
#endif //CHESS_QUEEN_H
