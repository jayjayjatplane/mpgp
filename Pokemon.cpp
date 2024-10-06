#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"

Pokemon::Pokemon() {}
Pokemon::Pokemon(string n, int num, int lv) : name(n), number(num), level(lv) {}
int Pokemon::levelUp() {}
int Pokemon::takeDamage() {}
int Pokemon::heal() {}

string Pokemon::get_name() { return name; }
void Pokemon::set_name(string name) { this->name = name; }
int Pokemon::get_number() { return number; }
void Pokemon::set_number(int number) { this->number = number; }
int Pokemon::get_level() { return level; }
void Pokemon::set_level(int level) { this->level = level; }