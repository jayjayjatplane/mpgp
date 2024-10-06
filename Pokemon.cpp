#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"
#include "Type.h"

Pokemon::Pokemon() {}
Pokemon::Pokemon(string n, Type t, int h, int lv)
    : name(n), type(t), health(h), level(lv) {}
int Pokemon::takeDamage() {}
int Pokemon::heal() {}
int Pokemon::levelUp() {}

string Pokemon::get_name() { return name; }
void Pokemon::set_name(string name) { this->name = name; }
int Pokemon::get_health() { return health; }
void Pokemon::set_health(int health) { this->health = health; }
int Pokemon::get_level() { return level; }
void Pokemon::set_level(int level) { this->level = level; }

int Pokemon::get_number() { return number; }
void Pokemon::set_number(int number) { this->number = number; }