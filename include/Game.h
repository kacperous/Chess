#ifndef CHESS_GAME_H
#define CHESS_GAME_H
#include "Pawn.h"
#include "Board.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Rook.h"
#include "Queen.h"
#include "Piece.h"
class Game {
    Board board;
    Color currentTurn;
public:
    Game() : currentTurn(Color::WHITE) {
        setupBoard();
    }
    void setupBoard();
    void switchTurn();
    bool makeMove(int startX, int startY, int endX, int endY);
    void play();
};
#endif //CHESS_GAME_H
