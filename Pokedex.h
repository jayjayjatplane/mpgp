#ifndef POKEDEX_H
#define POKEDEX_H

#include "Pokemon.h"
#include "PokemonParty.h"

using namespace std;

class Pokedex : public Pokemon, PokemonParty {
 public:
  PokemonParty pokemon_party;

  Pokedex();
  Pokedex(int capacity);

  void display_pokedex();
  void add_pokemon_to_pokedex(Pokemon pokemon);
  void rem_pokemon_from_pokedex(Pokemon pokemon);
  ~Pokedex();
};

#endif