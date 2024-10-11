#include "PokemonParty.h"

#include <iostream>

using namespace std;

// Constructors
PokemonParty::PokemonParty() {
  party_size = 0;
  party_capacity = 30;
  party_array = new Pokemon[party_capacity];
}

PokemonParty::PokemonParty(int capacity) {
  party_size = 0;
  party_capacity = capacity;
  party_array = new Pokemon[party_capacity];
}

// Functions
void PokemonParty::display_party() {
  cout << "Pokemon Party:" << endl;
  for (int i = 0; i < party_size; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << " Species: " << party_array[i].get_species() << " | ";
    cout << " Type: " << party_array[i].get_type() << " | ";
    cout << " Health: " << party_array[i].get_health() << " | ";
    cout << "\n";
  }
}

void PokemonParty::add_pokemon_to_party(Pokemon pokemon) {
  if (party_size < party_capacity) {
    party_array[party_size] = pokemon;
    party_size++;
  } else {
    cout << "Pokemon party is full!" << endl;
  }
}
void PokemonParty::rem_pokemon_from_party(Pokemon pokemon) {
  for (int i = 0; i < party_size; i++) {
    if (party_array[i].get_species() == pokemon.get_species() &&
        party_array[i].get_type() == pokemon.get_type() &&
        party_array[i].get_health() == pokemon.get_health() &&
        party_array[i].get_moveset() == pokemon.get_moveset()) {
      for (int j = i; j < party_size - 1; j++) {
        party_array[j] = party_array[j + 1];
      }
      party_size--;
      cout << "Pokemon removed from party!" << endl;
      return;
    }
  }
  cout << "Pokemon not found in party!" << endl;
}

void PokemonParty::add_pokemon() {
  string species, type, moveset;
  int health;
  cout << "Enter Pokemon species: ";
  cin >> species;
  cout << "Enter Pokemon type: ";
  cin >> type;
  cout << "Enter Pokemon health: ";
  cin >> health;
  cout << "Enter Pokemon moveset: ";
  cin >> moveset;
  Pokemon new_pokemon(species, type, health, moveset);
  add_pokemon_to_party(new_pokemon);
  cout << "Pokemon added!" << endl;
}

void PokemonParty::display_pokemon_list() { display_party(); }

// Destructors
PokemonParty::~PokemonParty() { delete[] party_array; }

void PokemonParty::add_pokemon_to_party(Pokemon pokemon) {
  if (party_size < party_capacity) {
    party_array[party_size] = pokemon;
    party_size++;
  } else {
    cout << "Pokemon party is full!" << endl;
  }
}
void PokemonParty::rem_pokemon_from_party(Pokemon pokemon) {
  for (int i = 0; i < party_size; i++) {
    if (party_array[i].get_species() == pokemon.get_species() &&
        party_array[i].get_type() == pokemon.get_type() &&
        party_array[i].get_health() == pokemon.get_health() &&
        party_array[i].get_moveset() == pokemon.get_moveset()) {
      for (int j = i; j < party_size - 1; j++) {
        party_array[j] = party_array[j + 1];
      }
      party_size--;
      cout << "Pokemon removed from party!" << endl;
      return;
    }
  }
  cout << "Pokemon not found in party!" << endl;
}

void PokemonParty::add_pokemon() {
  string species, type, moveset;
  int health;
  cout << "Enter Pokemon species: ";
  cin >> species;
  cout << "Enter Pokemon type: ";
  cin >> type;
  cout << "Enter Pokemon health: ";
  cin >> health;
  cout << "Enter Pokemon moveset: ";
  cin >> moveset;
  Pokemon new_pokemon(species, type, health, moveset);
  add_pokemon_to_party(new_pokemon);
  cout << "Pokemon added!" << endl;
}

void PokemonParty::display_pokemon_list() { display_party(); }

// Destructors
PokemonParty::~PokemonParty() { delete[] party_array; }