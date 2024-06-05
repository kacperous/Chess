#ifndef CHESS_KING_H
#define CHESS_KING_H
#include "Piece.h"
#include <cmath>
#include <vector>

class King: public Piece{
public:
    explicit King(Color color);
    ~King() override;
    bool isValidMove(int startX,int endX,int startY,int endY,const std::vector<std::vector<Piece*>>& board) override;
};
#endif //CHESS_KING_H
