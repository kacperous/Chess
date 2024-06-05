#include "Board.h"

Board::Board() {
    board.resize(8, std::vector<Piece*>(8, nullptr));
}

Board::~Board() {
    for (auto& row : board) {
        for (auto& piece : row) {
            delete piece;
        }
    }
}

Piece* Board::getPiece(int x, int y) {
    return board[x][y];
}

void Board::setPiece(int x, int y, Piece *piece) {
    board[x][y] = piece;
}

const std::vector<std::vector<Piece*>>& Board::getBoard()  const{
    return board;
}

void Board::printBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == nullptr) {
                std::cout << ".";
            } else if (board[i][j]->color == Color::WHITE) {
                std::cout << "W";
            } else {
                std::cout << "B";
            }
        }
        std::cout << std::endl;
    }
}
