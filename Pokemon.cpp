#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"
#include "Type.h"

Pokemon::Pokemon() {}
Pokemon::Pokemon(string n, Type t, int h, int lv)
    : name(n), type(t), health(h), level(lv) {}
int Pokemon::takeDamage(int damage) {
  health -= damage;
  if (health < 0) health = 0;  // Ensure health doesn't go negative
  return health;
}
int Pokemon::heal(int amount) {
  health += amount;
  return health;
}
int Pokemon::levelUp() {
  level++;
  return level;
}

string Pokemon::get_name() { return name; }
void Pokemon::set_name(string name) { this->name = name; }
Type Pokemon::get_type() { return type; }
void Pokemon::set_type(Type newType) { this->type = newType; }
int Pokemon::get_health() { return health; }
void Pokemon::set_health(int health) { this->health = health; }
int Pokemon::get_level() { return level; }
void Pokemon::set_level(int level) { this->level = level; }

int Pokemon::get_number() { return number; }
void Pokemon::set_number(int number) { this->number = number; }