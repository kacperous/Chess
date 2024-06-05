#include "Bishop.h"

Bishop::Bishop(Color color) : Pawn(color) {}

Bishop::~Bishop() {

}

bool Bishop::isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) {
    int dx = std::abs(startX - endX);
    int dy = std::abs(startY - endY);
    if (dx == dy) {
        int xStep = (endX - startX) / dx;
        int yStep = (endY - startY) / dy;
        for (int i = 1; i < dx; i++) {
            if (board[startX + i * xStep][startY + i * yStep] != nullptr) {
                return false;
            }
        }
        return true;
    }
    return false;
}

