#include <iostream>

#include "Move.h"
#include "Pokemon.h"
#include "Type.h"

using namespace std;

int main() {
  // Create Types for the Pokemon
  Type fireType(FIRE);    // Fire type for Charmander
  Type waterType(WATER);  // Water type for Squirtle

  // Create two Pokemon
  Pokemon charmander("Charmander", fireType, 100, 5);
  Pokemon squirtle("Squirtle", waterType, 100, 5);

  // Create a Move (Fire-type move for Charmander)
  Move ember("Ember", 40,
             fireType);  // Pass the fire type to the Move constructor

  // Display initial stats
  cout << "Before battle:" << endl;
  cout << charmander.get_name() << " (HP: " << charmander.get_health() << ")"
       << endl;
  cout << squirtle.get_name() << " (HP: " << squirtle.get_health() << ")"
       << endl;

  // Charmander attacks Squirtle using Ember
  cout << endl
       << charmander.get_name() << " uses " << ember.getName() << "!" << endl;

  // Calculate damage based on move's damage factor and type effectiveness
  int damage = ember.attackDamage(charmander.get_type(), squirtle.get_type());

  // Apply damage to Squirtle
  squirtle.take_damage(damage);  // Apply damage to Squirtle's health

  // Display updated stats after the attack
  cout << endl << "After battle:" << endl;
  cout << charmander.get_name() << " (HP: " << charmander.get_health() << ")"
       << endl;
  cout << squirtle.get_name() << " (HP: " << squirtle.get_health() << ")"
       << endl;

  return 0;
}
