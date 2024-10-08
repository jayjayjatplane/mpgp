#ifndef POKEMON_H
#define POKEMON_H

#include <string>

#include "Type.h"

class Pokemon {
 private:
  std::string name;
  Type type;
  int health;
  int level;
  int number;  // Added if needed for identification

 public:
  // Constructors
  Pokemon();
  Pokemon(std::string n, Type t, int h, int lv);

  // Methods for damage and healing
  int takeDamage(int damage);
  int heal(int amount);
  int levelUp();

  // Getters and Setters
  std::string get_name();
  void set_name(std::string name);
  Type& get_type();
  void set_type(Type newType);
  int& get_health();  // Change to return a reference
  void set_health(int health);
  int get_level();
  void set_level(int level);
  int get_number();
  void set_number(int number);
};

#endif
