#include "Rook.h"

Rook::Rook(Color color) : Pawn(color) {}

Rook::~Rook() {

}

bool Rook::isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece *>> &board) {
    if (startX == endX || startY == endY) {
        int dx = std::abs(startX - endX);
        int dy = std::abs(startY - endY);
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
