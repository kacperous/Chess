#include "Knight.h"

Knight::Knight(Color color) : Pawn(color) {}

Knight::~Knight() {

}

bool Knight::isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) {
    int dx = std::abs(startX - endX);
    int dy = std::abs(startY - endY);
    return (dx == 2 && dy == 1) || (dx == 1 && dy == 2);
}

