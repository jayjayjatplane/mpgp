#include "Pokemon.h"

#include <iostream>
#include <string>

using namespace std;

// Constructors
Pokemon::Pokemon() {
  species = "Unknown";
  type = "Unknown";
  health = -1;
  moveset = "None";
  level = -1;
}

Pokemon::Pokemon(string new_string, string new_type, int new_health,
                 string new_moveset, int new_level) {
  species = new_string;
  type = new_type;
  health = new_health;
  moveset = new_moveset;
  level = new_level;
}

// Getters
string Pokemon::get_species() { return species; }
string Pokemon::get_type() { return type; }
int Pokemon::get_health() { return health; }
string Pokemon::get_moveset() { return moveset; }
int Pokemon::get_level() { return level; }

// Setters
void Pokemon::set_species(string new_string) { species = new_string; }
void Pokemon::set_type(string new_type) { type = new_type; }
void Pokemon::set_health(int new_health) { health = new_health; }
void Pokemon::set_moveset(string new_moveset) { moveset = new_moveset; }
void Pokemon::set_level(int new_level) { level = new_level; }