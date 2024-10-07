#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

#include "Type.h"

using namespace std;

class Pokemon {
 protected:
  string name;
  Type type;
  int health;
  int level;

  // for list:
  int number;

 public:
  Pokemon();
  Pokemon(string n, Type t, int h, int lv);
  int takeDamage(int damage);
  int heal(int amount);
  int levelUp();

  string get_name();
  void set_name(string name);
  Type get_type();
  void set_type(Type newType);
  int get_health();
  void set_health(int health);
  int get_level();
  void set_level(int level);

  // for list:
  int get_number();
  void set_number(int number);
};

#endif