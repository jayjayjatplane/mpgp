#include "Move.h"

#include <string>

#include "Type.h"

using namespace std;

Move::Move() : mName("Unknown"), damageFactor(0), moveType(Type()) {}

Move::Move(string n, int d, Type& t) : mName(n), damageFactor(d), moveType(t) {}

string Move::getName() { return mName; }

int Move::getDamageFactor() { return damageFactor; }

Type Move::getMoveType() { return moveType; }

int Move::attackDamage(int multiplier) { return damageFactor * multiplier; }

void Move::applyDamage(int& pokemonHealth, Type& pokemonType, int multiplier) {
  float effectiveness = moveType.getEffectiveness(
      pokemonType);  // Get effectiveness based on target's type
  int damage = attackDamage(multiplier) * effectiveness;
  pokemonHealth -= damage;
  if (pokemonHealth < 0)
    pokemonHealth = 0;  // Ensure health doesn't go below zero
}