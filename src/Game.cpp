#include "Game.h"

void Game::setupBoard() {
    for (int i = 0; i < 8; i++) {
        board.setPiece(1, i, new Pawn(Color::WHITE));
        board.setPiece(6, i, new Pawn(Color::BLACK));
    }
    board.setPiece(0, 4, new King(Color::WHITE));
    board.setPiece(7, 4, new King(Color::BLACK));
    board.setPiece(0, 3, new Queen(Color::WHITE));
    board.setPiece(7, 3, new Queen(Color::BLACK));
    board.setPiece(0, 0, new Rook(Color::WHITE));
    board.setPiece(0, 7, new Rook(Color::WHITE));
    board.setPiece(7, 0, new Rook(Color::BLACK));
    board.setPiece(7, 7, new Rook(Color::BLACK));
    board.setPiece(0, 2, new Bishop(Color::WHITE));
    board.setPiece(0, 5, new Bishop(Color::WHITE));
    board.setPiece(7, 2, new Bishop(Color::BLACK));
    board.setPiece(7, 5, new Bishop(Color::BLACK));
    board.setPiece(0, 1, new Knight(Color::WHITE));
    board.setPiece(0, 6, new Knight(Color::WHITE));
    board.setPiece(7, 1, new Knight(Color::BLACK));
    board.setPiece(7, 6, new Knight(Color::BLACK));
}

void Game::switchTurn() {
    currentTurn = (currentTurn == Color::WHITE) ? Color::BLACK : Color::WHITE;
}

bool Game::makeMove(int startX, int startY, int endX, int endY) {
    Piece* piece = board.getPiece(startX, startY);
    if (piece == nullptr || piece->color != currentTurn) {
        std::cout << "Invalid move!" << std::endl;
        return false;
    }
    if (piece->isValidMove(startX, startY, endX, endY, board.getBoard())) {
        Piece* target = board.getPiece(endX, endY);
        if (target == nullptr || target->color != currentTurn) {
            board.setPiece(endX, endY, piece);
            board.setPiece(startX, startY, nullptr);
            delete target; // Usuwanie zbitej figury
            switchTurn();
            return true;
        }
    }
    std::cout << "Invalid move!" << std::endl;
    return false;
}

void Game::play() {
    int startX, startY, endX, endY;
    while (true) {
        board.printBoard();
        std::cout << "Enter your move (startX startY endX endY): ";
        std::cin >> startX >> startY >> endX >> endY;
        if (makeMove(startX, startY, endX, endY)) {
            std::cout << "Move successful!" << std::endl;
        } else {
            std::cout << "Move failed!" << std::endl;
        }
    }
}