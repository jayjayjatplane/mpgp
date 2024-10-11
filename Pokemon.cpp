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
}

Pokemon::Pokemon(string new_string, string new_type, int new_health,
                 string new_moveset) {
  species = new_string;
  type = new_type;
  health = new_health;
  moveset = new_moveset;
}

// functions
void Pokemon::attack(Pokemon& target, int move_damage) {
  int damage = move_damage;
  cout << species << " attacks " << target.get_species() << " for " << damage
       << " damage!" << endl;
  target.takeDamage(damage);
}

void Pokemon::takeDamage(int damage) {
  health -= damage;
  if (health < 0) health = 0;

  if (health == 0) {
    cout << species << " has fainted" << endl;
  } else {
    cout << species << " now has " << health << " health remaining." << endl;
  }
}

// Getters
string Pokemon::get_species() { return species; }
string Pokemon::get_type() { return type; }
int Pokemon::get_health() { return health; }
string Pokemon::get_moveset() { return moveset; }

// Setters
void Pokemon::set_species(string new_string) { species = new_string; }
void Pokemon::set_type(string new_type) { type = new_type; }
void Pokemon::set_health(int new_health) { health = new_health; }
void Pokemon::set_moveset(string new_moveset) { moveset = new_moveset; }