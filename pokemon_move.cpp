#include <iostream>

#include "Move.h"
#include "Pokemon.h"

using namespace std;

int main() {
  // Create a Move object
  Move razorLeaf("Razor Leaf", 15);

  // Create Pokémon objects
  Pokemon Bulbasaur("Bulbasaur", "Grass/Poison", 80, razorLeaf);
  Pokemon Charmander("Charmander", "Fire", 70, Move("Flamethrower", 20));

  // Display initial health
  cout << Charmander.get_species() << " has " << Charmander.get_health()
       << " health." << endl;

  // Bulbasaur attacks Charmander
  Bulbasaur.attack(Charmander);

  // Show Charmander's health after the attack
  cout << Charmander.get_species() << " now has " << Charmander.get_health()
       << " health after the attack." << endl;

  return 0;
}
