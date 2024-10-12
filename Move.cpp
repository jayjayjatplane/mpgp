#include "Move.h"

#include <iostream>
#include <string>

using namespace std;

// constructor
Move::Move() {
  move_name = "Unknown";
  move_type = "Unknown";
  move_damage = 0;
}
Move::Move(string name, string type, int damage)
    : move_name(name), move_type(type), move_damage(damage) {}

// functions

// getters and setters
string Move::get_move_name() { return move_name; }
void Move::set_move_name(string name) { move_name = name; }
string get_move_type() { return move_type; };
void set_move_type(string type);
int Move::get_damage() { return move_damage; }
void Move::set_damage(int damage) { move_damage = damage; }