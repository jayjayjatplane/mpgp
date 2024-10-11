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

  return 0;
}
