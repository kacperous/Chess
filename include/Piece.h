#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H
#include <vector>

enum class Color {WHITE,BLACK};

class Piece{
public:
    Color color;
    explicit Piece(Color color) : color(color) {}
    virtual ~Piece() {}
    virtual bool isValidMove(int startX,int endX,int startY,int endY,const std::vector<std::vector<Piece*>>& board) =0;
};
#endif //CHESS_PIECE_H
