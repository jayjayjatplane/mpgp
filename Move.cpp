#include "Move.h"

#include <iostream>
#include <string>

using namespace std;

// constructor
Move::Move() {
  move_name = "Unknown";
  move_damage = 0;
}
Move::Move(string name, int damage) : move_name(name), move_damage(damage) {}

// functions

// getters and setters
string Move::get_move_name() { return move_name; }
void Move::set_move_name(string name) { move_name = name; }
int Move::get_damage() { return move_damage; }
void Move::set_damage(int damage) { move_damage = damage; }