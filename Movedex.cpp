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
  Pokemon Venusaur("Venusaur", "Grass", 80, Gigadrain);
  pokedex_thirty.add_pokemon_to_pokedex(Venusaur);
  // 2
  Pokemon Charizard("Charizard", "Fire", 78, Flamethrower);
  pokedex_thirty.add_pokemon_to_pokedex(Charizard);
  // 3
  Pokemon Blastoise("Blastoise", "Water", 79, Hydropump);
  pokedex_thirty.add_pokemon_to_pokedex(Blastoise);
  // 4
  Pokemon Butterfree("Butterfree", "Bug", 60, Quiverdance);
  pokedex_thirty.add_pokemon_to_pokedex(Butterfree);
  // 5
  Pokemon Beedrill("Beedrill", "Bug", 65, Bugbite);
  pokedex_thirty.add_pokemon_to_pokedex(Beedrill);
  // 6
  Pokemon Pidgeot("Pidgeot", "Normal", 83, Aerialace);
  pokedex_thirty.add_pokemon_to_pokedex(Pidgeot);
  // 7
  Pokemon Raticate("Raticate", "Normal", 55,
                   Hyperfang;
  pokedex_thirty.add_pokemon_to_pokedex(Raticate);
  // 8
  Pokemon Fearow("Fearow", "Normal", 65,
                 Fly);
  pokedex_thirty.add_pokemon_to_pokedex(Fearow);
  // 9
  Pokemon Arbok("Arbok", "Poison", 60,
                Poisonfang);
  pokedex_thirty.add_pokemon_to_pokedex(Arbok);
  // 10
  Pokemon Raichu("Raichu", "Electric", 60,
                 Thunderbolt);
  pokedex_thirty.add_pokemon_to_pokedex(Raichu);
  // 11
  Pokemon Sandslash("Sandslash", "Ground", 75,
                    Earthquake);
  pokedex_thirty.add_pokemon_to_pokedex(Sandslash);
  // 12
  Pokemon Nidoqueen("Nidoqueen", "Poison", 90,
                    Meteormash);
  pokedex_thirty.add_pokemon_to_pokedex(Nidoqueen);
  // 13
  Pokemon Clefable("Clefable", "Fairy", 95,
                   Moonblast);
  pokedex_thirty.add_pokemon_to_pokedex(Clefable);
  // 14
  Pokemon Ninetales("Ninetales", "Fire", 73,
                    Fireblast);
  pokedex_thirty.add_pokemon_to_pokedex(Ninetales);
  // 15
  Pokemon Wigglytuff("Wigglytuff", "Normaly", 70, Tackle);
  pokedex_thirty.add_pokemon_to_pokedex(Wigglytuff);
  // 16
  Pokemon Golbat("Golbat", "Poison", 75,
                 Crosspoison);
  pokedex_thirty.add_pokemon_to_pokedex(Golbat);
  // 17
  Pokemon Vileplume("Vileplume", "Grass", 75,
                    Solarbeam);
  pokedex_thirty.add_pokemon_to_pokedex(Vileplume);
  // 18
  Pokemon Parasect("Parasect", "Bug", 60,
                   Strugglebug);
  pokedex_thirty.add_pokemon_to_pokedex(Parasect);
  // 19
  Pokemon Venomoth("Venomoth", "Bug", 70,
                   Sludgebomb);
  pokedex_thirty.add_pokemon_to_pokedex(Venomoth);
  // 20
  Pokemon Dugtrio("Dugtrio", "Ground", 70,
                  Bulldoser);
  pokedex_thirty.add_pokemon_to_pokedex(Dugtrio);
  // 21
  Pokemon Golduck("Golduck", "Water", 80,
                  Skullbash);
  pokedex_thirty.add_pokemon_to_pokedex(Golduck);
  // 22
  Pokemon Primeape("Primeape", "Fighting", 65,
                   Karatechop);
  pokedex_thirty.add_pokemon_to_pokedex(Primeape);
  // 23
  Pokemon Arcanine("Arcanine", "Fire", 90, Bite);
  pokedex_thirty.add_pokemon_to_pokedex(Arcanine);
  // 24
  Pokemon Poliwrath("Poliwrath", "Water", 90,
                    Waterpulse);
  pokedex_thirty.add_pokemon_to_pokedex(Poliwrath);
  // 25
  Pokemon Alakazam("Alakazam", "Psychic", 90,
                   Psychic);
  pokedex_thirty.add_pokemon_to_pokedex(Alakazam);
  // 26
  Pokemon Machamp("Machamp", "Fighting", 90,
                  Seismictoss);
  pokedex_thirty.add_pokemon_to_pokedex(Machamp);
  // 27
  Pokemon Bellsprout("Bellsprout", "Grass", 40,
                     Razorleaf);
  pokedex_thirty.add_pokemon_to_pokedex(Bellsprout);
  // 28
  Pokemon Tentacruel("Tentacruel", "Water", 65,
                     Bubble);
  pokedex_thirty.add_pokemon_to_pokedex(Tentacruel);
  // 29
  Pokemon Golem("Golem", "Rock", 90,
                Stoneedge);
  pokedex_thirty.add_pokemon_to_pokedex(Golem);
  // 30
  Pokemon Slowbro("Slowbro", "Water", 65, Watergun);
  pokedex_thirty.add_pokemon_to_pokedex(Slowbro);


  return 0;

  return 0;
}