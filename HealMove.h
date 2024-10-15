#ifndef HEALMOVE_H
#define HEALMOVE_H

#include <iostream>

#include "Move.h"

class HealMove : public Move {
 private:
  int healing_amount;

 public:
  // Constructor
  HealMove(string name, string type, int healing);

  // Override the execute function
  void execute();

  // get and sets
  int get_healing_amount();
  void set_healing_amount(int healing_amount);
};

#endif
