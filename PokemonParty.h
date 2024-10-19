#ifndef POKEMON_PARTY_H
#define POKEMON_PARTY_H

#include "Pokemon.h"

using namespace std;

// VCGSFD

class PokemonParty {
 public:
  // Variables
  Pokemon* party_array;
  int party_size;
  int party_capacity;

  // Constructors
  PokemonParty();
  PokemonParty(int capacity);

  // Functions
  void display_party();
  void add_pokemon_to_party(Pokemon pokemon);
  void rem_pokemon_from_party(Pokemon pokemon);

  void add_pokemon();
  void display_pokemon_list();

  // get and set
  Pokemon getPokemonAt(int index);
  Pokemon* getParty();
  int getPartySize();

  // Destructors
  ~PokemonParty();
};

#endif