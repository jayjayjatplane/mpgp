#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>

using namespace std;

class Move {
 private:
  string move_name;
  int move_damage;

 public:
  // constructor
  Move();
  Move(string name, int damage);

  // functions

  // getters and setters
  string get_move_name();
  void set_move_name(string name);
  int get_damage();
  void set_damage(int damage);
};

#endif