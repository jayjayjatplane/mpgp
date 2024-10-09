#ifndef MOVESET_H
#define MOVESET_H

#include <iostream>

#include "Move.h"

class MoveSet {
 private:
  Move moves[4];  // Array to hold 4 Move objects
  int moveCount;  // Keeps track of how many moves are added

 public:
  MoveSet();  // Constructor

  // Add a move to the MoveSet
  void addMove(Move move);

  // Remove a move at a given index
  void removeMove(int index);

  // Display all moves
  void displayMoves();

  // Get the move at a specific index
  Move getMove(int index);
};

#endif
