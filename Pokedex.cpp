#include "Pokedex.h"

#include <iostream>

using namespace std;

Pokedex::Pokedex() : Pokemon() { pokemon_party = PokemonParty(); }

Pokedex::Pokedex(int capacity) : Pokemon() {
  pokemon_party = PokemonParty(capacity);
}

void Pokedex::add_pokemon(Pokemon pokemon) {
  pokemon_party.add_pokemon_to_party(pokemon);
}

void Pokedex::display_pokedex() { pokemon_party.display_party(); }

void Pokedex::rem_pokemon_from_party(int index) {
  pokemon_party.rem_pokemon_from_party(index);
}

void Pokedex::add_pokemon_from_party() { pokemon_party.add_pokemon(); }

void Pokedex::display_pokemon_list() { pokemon_party.display_pokemon_list(); }
