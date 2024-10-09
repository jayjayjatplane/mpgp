#include "MoveSet.h"

// Constructor initializes moveCount to 0
MoveSet::MoveSet() : moveCount(0) {}

// Adds a move to the MoveSet
void MoveSet::addMove(Move move) {
  if (moveCount < 4) {
    moves[moveCount] = move;  // Add the Move to the array directly
    moveCount++;
  } else {
    std::cout << "MoveSet is full! Cannot add more moves." << std::endl;
  }
}

// Removes a move at a given index
void MoveSet::removeMove(int index) {
  if (index >= 0 && index < moveCount) {
    for (int i = index; i < moveCount - 1; ++i) {
      moves[i] = moves[i + 1];  // Shift moves left
    }
    moveCount--;
    std::cout << "Move removed successfully." << std::endl;
  } else {
    std::cout << "Invalid index! Cannot remove move." << std::endl;
  }
}

// Displays all moves in the MoveSet
void MoveSet::displayMoves() {
  std::cout << "Moves in MoveSet:" << std::endl;
  for (int i = 0; i < moveCount; ++i) {
    std::cout << i + 1 << ". " << moves[i].getName() << std::endl;
  }
}

// Returns the move at a specific index
Move MoveSet::getMove(int index) {
  if (index >= 0 && index < moveCount) {
    return moves[index];
  } else {
    std::cout << "Invalid index! Returning the first move as default."
              << std::endl;
    return moves[0];  // Return the first move as a fallback
  }
}
