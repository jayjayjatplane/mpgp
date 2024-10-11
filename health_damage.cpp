#include <iostream>

#include "Pokemon.h"

using namespace std;

int main() {
  // Create Pokémon
  Pokemon Bulbasaur("Bulbasaur", "Grass/Poison", 80, "Razor Leaf");
  Pokemon Charmander("Charmander", "Fire", 70, "Ember");

  // Display initial health
  cout << Charmander.get_species() << " has " << Charmander.get_health()
       << " health." << endl;

  // Bulbasaur attacks Charmander
  Bulbasaur.attack(Charmander, 20);

  return 0;
}
