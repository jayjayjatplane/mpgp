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

  void add_pokemon(Pokemon pokemon);
  void display_pokedex();
  void rem_pokemon_from_party(int index);

  void add_pokemon_from_party();
  void display_pokemon_list();
};

#endif