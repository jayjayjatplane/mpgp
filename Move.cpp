#include "Move.h"

Move::Move() : mName(""), damageFactor(0) {}
Move::Move(std::string n, int d, Type& t)
    : mName(n), damageFactor(d), moveType(t) {}

std::string Move::getName() { return mName; }
int Move::getDamageFactor() { return damageFactor; }
Type Move::getMoveType() { return moveType; }

int Move::calculateDamage(Type& targetType) {
  // Calculate damage based on type effectiveness
  return damageFactor * targetType.getEffectiveness(moveType);
}

void Move::applyDamage(int& pokemonHealth, Type pokemonType) {
  int damage = calculateDamage(pokemonType);
  pokemonHealth -= damage;
}
