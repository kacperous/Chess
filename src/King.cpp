#include "Piece.h"
#include "King.h"

King::King(Color color) : Piece(color) {}

King::~King() {

}

bool King::isValidMove(int startX, int endX, int startY, int endY,const std::vector<std::vector<Piece*>>& board) {
    return (abs(startX-endX)<=1 && abs(startY-endY)<=1);
}
