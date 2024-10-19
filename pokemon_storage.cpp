#include <iostream>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"

void initializePokedex(Pokedex& pokedex) {
  // Define moves
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

  // Create Pokémon objects and add them to the Pokédex
  pokedex.add_pokemon_to_pokedex(Pokemon("Venusaur", "Grass", 80, Gigadrain));
  pokedex.add_pokemon_to_pokedex(
      Pokemon("Charizard", "Fire", 78, Flamethrower));
  pokedex.add_pokemon_to_pokedex(Pokemon("Blastoise", "Water", 79, Hydropump));
  pokedex.add_pokemon_to_pokedex(Pokemon("Butterfree", "Bug", 60, Quiverdance));
  pokedex.add_pokemon_to_pokedex(Pokemon("Beedrill", "Bug", 65, Bugbite));
  pokedex.add_pokemon_to_pokedex(Pokemon("Pidgeot", "Normal", 83, Aerialace));
  pokedex.add_pokemon_to_pokedex(Pokemon("Raticate", "Normal", 55, Hyperfang));
  pokedex.add_pokemon_to_pokedex(Pokemon("Fearow", "Normal", 65, Fly));
  pokedex.add_pokemon_to_pokedex(Pokemon("Arbok", "Poison", 60, Poisonfang));
  pokedex.add_pokemon_to_pokedex(
      Pokemon("Raichu", "Electric", 60, Thunderbolt));
  pokedex.add_pokemon_to_pokedex(
      Pokemon("Sandslash", "Ground", 75, Earthquake));
  pokedex.add_pokemon_to_pokedex(
      Pokemon("Nidoqueen", "Poison", 90, Meteormash));
  pokedex.add_pokemon_to_pokedex(Pokemon("Clefable", "Fairy", 95, Moonblast));
  pokedex.add_pokemon_to_pokedex(Pokemon("Ninetales", "Fire", 73, Fireblast));
  pokedex.add_pokemon_to_pokedex(Pokemon("Wigglytuff", "Normal", 70, Tackle));
  pokedex.add_pokemon_to_pokedex(Pokemon("Golbat", "Poison", 75, Crosspoison));
  pokedex.add_pokemon_to_pokedex(Pokemon("Vileplume", "Grass", 75, Solarbeam));
  pokedex.add_pokemon_to_pokedex(Pokemon("Parasect", "Bug", 60, Strugglebug));
  pokedex.add_pokemon_to_pokedex(Pokemon("Venomoth", "Bug", 70, Sludgebomb));
  pokedex.add_pokemon_to_pokedex(Pokemon("Dugtrio", "Ground", 70, Bulldoser));
  pokedex.add_pokemon_to_pokedex(Pokemon("Golduck", "Water", 80, Skullbash));
  pokedex.add_pokemon_to_pokedex(
      Pokemon("Primeape", "Fighting", 65, Karatechop));
  pokedex.add_pokemon_to_pokedex(Pokemon("Arcanine", "Fire", 90, Bite));
  pokedex.add_pokemon_to_pokedex(Pokemon("Poliwrath", "Water", 90, Waterpulse));
  pokedex.add_pokemon_to_pokedex(Pokemon("Alakazam", "Psychic", 90, Psychic));
  pokedex.add_pokemon_to_pokedex(
      Pokemon("Machamp", "Fighting", 90, Seismictoss));
  pokedex.add_pokemon_to_pokedex(Pokemon("Bellsprout", "Grass", 40, Razorleaf));
  pokedex.add_pokemon_to_pokedex(Pokemon("Tentacruel", "Water", 65, Bubble));
  pokedex.add_pokemon_to_pokedex(Pokemon("Golem", "Rock", 90, Stoneedge));
  pokedex.add_pokemon_to_pokedex(Pokemon("Slowbro", "Water", 65, Watergun));
}