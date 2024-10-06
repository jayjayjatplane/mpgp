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
  int takeDamage();
  int heal();
  int levelUp();

  string get_name();
  void set_name(string name);
  int get_health();
  void set_health(int health);
  int get_level();
  void set_level(int level);

  // for list:
  int get_number();
  void set_number(int number);
};

#endif