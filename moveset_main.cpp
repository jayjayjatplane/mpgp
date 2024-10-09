#include <iostream>

#include "Move.h"
#include "MoveSet.h"
#include "Pokemon.h"
#include "Type.h"

using namespace std;

int main() {
  // Create types for the Pokémon
  Type fireType(FIRE);
  Type waterType(WATER);

  // Create a Pokémon
  Pokemon charmander("Charmander", fireType, 100, 5);  // Fire-type Pokémon

  // Dynamically create 4 moves for the MoveSet
  Move* ember = new Move("Ember", 40, fireType);
  Move* flamethrower = new Move("Flamethrower", 90, fireType);
  Move* fireSpin = new Move("Fire Spin", 35, fireType);
  Move* inferno = new Move("Inferno", 100, fireType);

  // Add the moves to Charmander's MoveSet
  charmander.addMove(ember);
  charmander.addMove(flamethrower);
  charmander.addMove(fireSpin);
  charmander.addMove(inferno);

  // Display Charmander's moves
  cout << "Moves of " << charmander.get_name() << ":" << endl;
  charmander.displayMoves();

  // Clean up dynamically allocated memory
  delete ember;
  delete flamethrower;
  delete fireSpin;
  delete inferno;

  return 0;
}
