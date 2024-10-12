#include "Pokedex.h"

#include <iostream>

using namespace std;

Pokedex::Pokedex() {
  pokedex_capacity = 0;
  pokedex_array = new Pokemon[party_capacity];
}

Pokedex::Pokedex(int capacity)
    : PokemonParty(capacity), pokedex_capacity(capacity) {}

void Pokedex::display_pokedex() {
  if (party_array == nullptr) {
    cout << "Pokedex is empty." << endl;
    return;
  }
  cout << "This is the Pokedex, which shows the type, health and moveset of "
          "every Pokemon available:"
       << endl;
  int size = party_capacity;
  for (int i = 0; i < size; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << " Species: " << party_array[i].get_species() << " | ";
    cout << " Type: " << party_array[i].get_type() << " | ";
    cout << " Health: " << party_array[i].get_health() << " | ";
    // Displaying Move information
    Move moveset = party_array[i].get_moveset();
    cout << " Moveset: " << moveset.get_move_name()
         << " (Type: " << moveset.get_move_type()
         << ", Damage: " << moveset.get_damage() << ")" << endl;
    cout << "\n";
  }
}
void Pokedex::rem_pokemon_from_pokedex(Pokemon pokemon) {
  rem_pokemon_from_party(pokemon);
}

void Pokedex::add_pokemon_to_pokedex(Pokemon pokemon) {
  if (party_size < party_capacity) {
    party_array[party_size] = pokemon;
    party_size++;
  } else {
    cout << "Pokemon party is full!" << endl;
  }
}

int Pokedex::getSize() { return getPartySize(); }

Pokemon Pokedex::getPokemonByIndex(int index) { return getPokemonAt(index); }

Pokedex::~Pokedex() {}
