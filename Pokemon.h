#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

#include "Move.h"

using namespace std;

// VCGSFD

class Pokemon : public Move {
 private:
  // Variables
  string species;
  string type;
  int health;
  Move moveset;
  int origin_health;

 public:
  // Constructors
  Pokemon();

  Pokemon(string new_string, string new_type, int new_health, Move new_moveset);

  // Getters
  string get_species();
  string get_type();
  int get_health();
  Move get_moveset();

  // Setters
  void set_species(string new_string);
  void set_type(string new_type);
  void set_health(int new_health);
  void set_moveset(Move new_moveset);

  // Functions
  void attack(Pokemon& target);
  void takeDamage(int damage);
  int heal();

  // Destructors
};

#endif