#ifndef MOVE_H
#define MOVE_H

#include <string>

#include "Type.h"

class Move {
 private:
  std::string mName;  // Name of the move
  int damageFactor;   // Damage factor of the move
  Type moveType;      // Type of the move (e.g., FIRE, WATER)

 public:
  // Default constructor
  Move();

  // Parameterized constructor
  Move(std::string n, int d, Type& t);

  // Getters
  std::string getName();
  int getDamageFactor();
  Type getMoveType();

  // Damage calculation
  int calculateDamage(Type& targetType);

  // Apply damage to a Pokémon
  void applyDamage(int& pokemonHealth, Type pokemonType);
};

#endif
