#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <string>

using namespace std;

// Enumeration for Pokémon types
enum TypeName {
  NORMAL,
  FIRE,
  WATER,
  ELECTRIC,
  GRASS,
  ICE,
  FIGHTING,
  POISON,
  GROUND,
  FLYING,
  PSYCHIC,
  BUG,
  ROCK,
  GHOST,
  DRAGON,
  DARK,
  STEEL,
  FAIRY,
  NUM_TYPES
};

class Type {
 private:
  TypeName typeName;

 public:
  Type();
  Type(TypeName t);
  float getEffectiveness(Type& opponentType);
  string getName();
};

#endif