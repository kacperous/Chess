#include "Pawn.h"

Pawn::~Pawn() {

}

bool Pawn::isValidMove(int startX, int endX, int startY, int endY, const std::vector<std::vector<Piece*>>& board) {
    int direction = (color == Color::WHITE) ? 1 : -1;

    // Sprawdź, czy pole docelowe jest puste
    if (board[endX][endY] == nullptr) {
        // Ruch o jedno pole do przodu
        if (startY == endY && startX + direction == endX)
            return true;

        // Ruch o dwa pola do przodu z pozycji startowej
        if (startY == endY && startX + 2 * direction == endX && startX == (color == Color::WHITE ? 1 : 6))
            return true;
    } else {
        // Bicie figury przeciwnika
        if (std::abs(startY - endY) == 1 && startX + direction == endX && board[endX][endY]->color != color)
            return true;
    }

    return false;
}
