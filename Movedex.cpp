#include <iostream>

#include "Move.h"
#include "Pokemon.h"

using namespace std;

int main() {
  Move Gigadrain("Giga Drain", "Grass", 30);
  Move Flamethrower("Flamethrower", "Fire", 30);
  Move Hydropump("Hydropump", "Water", 30);
  Move Quiverdance("Quiver Dance", "Bug", 20);
  Move Bugbite("Bug Bite", "Bug", 40);
  Move Aerialace("Aerial Ace", "Flying", 30);
  Move Hyperfang("Hyper Fang", "Normal", 30);
  Move Fly("Fly", "Flying", 40);
  Move Poisonfang("Poison Fang", "Poison", 30);
  Move Thunderbolt("Thunderbolt", "Electric", 30);
  Move Earthquake("Earthquake", "Ground", 30);
  Move Moonblast("Moonblast", "Fairy", 30);
  Move Fireblast("Fireblast", "Fire", 40);
  Move Tackle("Tackle", "Normal", 10);
  Move Crosspoison("Cross Poison", "Poison", 40);
  Move Solarbeam("Solarbeam", "Grass", 40);
  Move Strugglebug("Struggle Bug", "Bug", 30);
  Move Sludgebomb("Sludgebomb", "Poison", 30);
  Move Bulldoser("Bulldoser", "Ground", 20);
  Move Skullbash("Skull Bash", "Water", 40);
  Move Karatechop("Karate Chop", "Fighting", 20);
  Move Bite("Bite", "Dark", 15);
  Move Waterpulse("Waterpulse", "Water", 20);
  Move Psychic("Psychic", "Psychic", 40);
  Move Seismictoss("Seismic Toss", "Fighting", 40);
  Move Razorleaf("Razor Leaf", "Grass", 20);
  Move Bubble("Bubble", "Water", 10);
  Move Stoneedge("Stone Edge", "Rock", 30);
  Move Watergun("Water Gun", "Water", 20);
  Move Bulletpunch("Bullet Punch", "Steel", 30);
  Move Meteormash("Meteor Mash", "Steel", 30);
  Move Dragonpulse("Dragon Pulse", "Dragon", 40);
  Move Icebeam("Ice Beam", "Ice", 30);
  Move Shadowball("Shadow Ball", "Ghost", 30);

  // Create Pokémon objects
  Pokemon Bulbasaur("Bulbasaur", "Grass/Poison", 80, Gigadrain);
  Pokemon Charmander("Charmander", "Fire", 70, Flamethrower);

  // Display initial health
  cout << Charmander.get_species() << " has " << Charmander.get_health()
       << " health." << endl;

  // Bulbasaur attacks Charmander
  Bulbasaur.attack(Charmander);

  return 0;

  return 0;
}