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

 public:
  // Constructors
  Pokemon();

  Pokemon(string new_string, string new_type, int new_health,
          string new_moveset);

  // Getters
  string get_species();
  string get_type();
  int get_health();
  string get_moveset();

  // Setters
  void set_species(string new_string);
  void set_type(string new_type);
  void set_health(int new_health);
  void set_moveset(string new_moveset);

  // Functions

  // Destructors
};

#endif