#include <iostream>

#include "Move.h"
#include "Pokemon.h"
#include "Type.h"

using namespace std;

int main() {
  // Create types for the Pokémon
  Type fireType(FIRE);
  Type waterType(WATER);

  // Create two Pokémon
  Pokemon charmander("Charmander", fireType, 100, 5);  // Fire-type Pokémon
  Pokemon squirtle("Squirtle", waterType, 100, 5);     // Water-type Pokémon

  // Create a move
  Move ember("Ember", 40, fireType);  // Ember move with 40 base damage

  // Print initial health
  cout << "Initial Health of " << charmander.get_name() << ": "
       << charmander.get_health() << endl;
  cout << "Initial Health of " << squirtle.get_name() << ": "
       << squirtle.get_health() << endl;

  // Use the move on Squirtle
  ember.applyDamage(squirtle.get_health(), squirtle.get_type());

  // Print health after attack
  cout << "Health of " << squirtle.get_name()
       << " after attack: " << squirtle.get_health() << endl;

  return 0;
}
