#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"
#include "Type.h"

// Default constructor
Pokemon::Pokemon() {}

// Parameterized constructor
Pokemon::Pokemon(string n, Type t, int h, int lv)
    : name(n), type(t), health(h), level(lv) {}

// Damage method
int Pokemon::takeDamage(int damage) {
  health -= damage;
  if (health < 0) health = 0;  // Ensure health doesn't go negative
  return health;
}

// Healing method
int Pokemon::heal(int amount) {
  health += amount;
  return health;
}

// Level up method
int Pokemon::levelUp() {
  level++;
  return level;
}

// Moveset
void Pokemon::addMove(Move* move) { moveSet.addMove(move); }

void Pokemon::displayMoves() { moveSet.displayMoves(); }

// Getters and Setters
string Pokemon::get_name() { return name; }
void Pokemon::set_name(string name) { this->name = name; }
Type& Pokemon::get_type() { return type; }
void Pokemon::set_type(Type newType) { this->type = newType; }

// Change get_health to return a reference
int& Pokemon::get_health() { return health; }
void Pokemon::set_health(int health) { this->health = health; }
int Pokemon::get_level() { return level; }
void Pokemon::set_level(int level) { this->level = level; }
int Pokemon::get_number() { return number; }
void Pokemon::set_number(int number) { this->number = number; }
