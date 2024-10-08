#ifndef MOVE_H
#define MOVE_H

#include <string>

#include "Type.h"

class Move {
 protected:
  std::string mName;
  Type moveType;
  int damageFactor;  // Base damage of the move

 public:
  // Constructors
  Move();
  Move(std::string n, int d, Type& t);

  // Getters
  std::string getName();
  int getDamageFactor();
  Type getMoveType();

  // Methods for calculating and applying damage
  int calculateDamage(Type& targetType);
  void applyDamage(int& pokemonHealth, Type pokemonType);
};

#endif
