#include "HealMove.h"

// Constructor implementation
HealMove::HealMove(string name, string type, int healing)
    : Move(name, type, 0),
      healing_amount(healing) {}  // Damage is 0 for heal moves

// Override the execute function
void HealMove::execute() {
  std::cout << get_move_name() << " is used to heal for " << healing_amount
            << " health!" << std::endl;
}

int HealMove::get_healing_amount() { return healing_amount; }
void HealMove::set_healing_amount(int healing_amount) {
  healing_amount = healing_amount;
}