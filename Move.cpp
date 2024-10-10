#include "Move.h"

// Default constructor
Move::Move() : mName(""), damageFactor(0), moveType(Type()) {}

// Parameterized constructor
Move::Move(std::string n, int d, Type& t)
    : mName(n), damageFactor(d), moveType(t) {}

// Getters
std::string Move::getName() { return mName; }
int Move::getDamageFactor() { return damageFactor; }
Type Move::getMoveType() { return moveType; }

// Damage calculation
int Move::calculateDamage(Type& targetType) {
  // Calculate damage based on type effectiveness
  return damageFactor * targetType.getEffectiveness(moveType);
}

// Apply damage to a Pokémon
void Move::applyDamage(int& pokemonHealth, Type pokemonType) {
  int damage = calculateDamage(pokemonType);
  pokemonHealth -= damage;
}
