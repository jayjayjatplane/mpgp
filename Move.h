#ifndef MOVE_H
#define MOVE_H

#include <string>

#include "Type.h"

using namespace std;

class Move {
 protected:
  string mName;
  Type moveType;
  int damageFactor;

 public:
  Move();
  Move(string n, int d, Type& t);

  string getName();
  int getDamageFactor();
  Type getMoveType();

  int attackDamage(int multiplier = 1);

  void applyDamage(int& pokemonHealth, Type& pokemonType, int multiplier = 1);
};

#endif