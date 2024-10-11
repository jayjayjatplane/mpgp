#include "Pokedex.h"

#include <iostream>

using namespace std;

Pokedex::Pokedex() {
  pokedex_capacity = 0;
  pokedex_array = new Pokemon[party_capacity];
}

Pokedex::Pokedex(int capacity) {
  pokedex_capacity = 0;
  pokedex_array = new Pokemon[party_capacity];
}

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
    cout << " Moveset: " << party_array[i].get_moveset() << endl;
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

Pokedex::~Pokedex() { delete[] party_array; }