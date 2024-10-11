#include <iostream>

#include "Move.h"
#include "Pokemon.h"

using namespace std;

int main() {
  // Create Pokémon objects
  Pokemon Bulbasaur("Bulbasaur", "Grass/Poison", 80, "Razor Leaf");
  Pokemon Charmander("Charmander", "Fire", 70, "Ember");

  // Create a Move object for Bulbasaur
  Move razorLeaf("Razor Leaf", 15);

  // Display initial health of Charmander
  cout << Charmander.get_species() << " has " << Charmander.get_health()
       << " health." << endl;

  // Bulbasaur attacks Charmander using Razor Leaf
  cout << Bulbasaur.get_species() << " uses " << razorLeaf.get_move_name()
       << "!" << endl;

  // bulbasaur attack
  Bulbasaur.attack(Charmander, razorLeaf.get_damage());

  return 0;
}
