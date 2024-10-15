#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>

using namespace std;

class Move {
 private:
  string move_name;
  string move_type;
  int move_damage;

 public:
  // Constructor
  Move();
  Move(string name, string type, int damage);

  virtual void execute();

  // Getters and setters
  string get_move_name();
  void set_move_name(string name);
  string get_move_type();
  void set_move_type(string type);
  int get_damage();
  void set_damage(int damage);
};

#endif