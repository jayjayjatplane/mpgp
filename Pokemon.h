#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

class Pokemon {
 protected:
  string name;
  int number;
  int level;

 public:
  Pokemon();
  Pokemon(string n, int num, int lv);
  int levelUp();
  int takeDamage();
  int heal();

  string get_name();
  void set_name(string name);
  int get_number();
  void set_number(int number);
  int get_level();
  void set_level(int level);
};

#endif