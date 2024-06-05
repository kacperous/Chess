#include "Queen.h"

Queen::Queen(Color color) : Pawn(color) {}

Queen::~Queen() {

}

bool Queen::isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) {
    int dx = std::abs(startX - endX);
    int dy = std::abs(startY - endY);
    if (dx == dy || startX == endX || startY == endY) {
        int xStep = (endX - startX == 0) ? 0 : (endX - startX) / dx;
        int yStep = (endY - startY == 0) ? 0 : (endY - startY) / dy;
        for (int i = 1; i < std::max(dx, dy); i++) {
            if (board[startX + i * xStep][startY + i * yStep] != nullptr) {
                return false;
            }
        }
        return true;
    }
    return false;
}

