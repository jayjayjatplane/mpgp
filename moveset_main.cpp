#include <iostream>

#include "Move.h"
#include "MoveSet.h"
#include "Pokemon.h"
#include "Type.h"

using namespace std;

int main() {
  // Create types for the moves
  Type fireType(FIRE);
  Type waterType(WATER);

  // Create a Pokémon
  Pokemon charmander("Charmander", fireType, 100, 5);

  // Create some moves
  Move ember("Ember", 40, fireType);
  Move flamethrower("Flamethrower", 90, fireType);
  Move fireSpin("Fire Spin", 35, fireType);
  Move waterGun("Water Gun", 40, waterType);

  // Add moves to Charmander's MoveSet
  charmander.addMove(ember);
  charmander.addMove(flamethrower);
  charmander.addMove(fireSpin);
  charmander.addMove(waterGun);

  // Display Charmander's moves
  cout << "Moves of " << charmander.get_name() << ":" << endl;
  charmander.displayMoves();

  return 0;
}
