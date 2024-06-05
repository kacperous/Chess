#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <vector>
#include "Piece.h"
#include <iostream>

class Board {
    std::vector<std::vector<Piece *>> board;
public:
    Board();
    ~Board();
    Piece *getPiece(int x, int y);
    void setPiece(int x, int y, Piece *piece);
    const std::vector<std::vector<Piece*>>& getBoard() const;
    void printBoard();
};
#endif //CHESS_BOARD_H
