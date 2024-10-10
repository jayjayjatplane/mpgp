#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

// VCGSFD

class Pokemon {
 private:
  // Variables
  string species;
  string type;
  int health;
  string moveset;
  int level;

 public:
  // Constructors
  Pokemon() {
    species = "Unknown";
    type = "Unknown";
    health = -1;
    moveset = "None";
    level = -1;
  }

  Pokemon(string new_string, string new_type, int new_health,
          string new_moveset, int new_level) {
    species = new_string;
    type = new_type;
    health = new_health;
    moveset = new_moveset;
    level = new_level;
  }

  // Getters
  string get_species();
  string get_type();
  int get_health();
  string get_moveset();
  int get_level();

  // Setters
  void set_species(string new_string);
  void set_type(string new_type);
  void set_health(int new_health);
  void set_moveset(string new_moveset);
  void set_level(int new_level);

  // Functions

  // Destructors
};

#endif