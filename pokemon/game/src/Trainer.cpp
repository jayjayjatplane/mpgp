#include "Trainer.h"

#include <cmath>
#include <iostream>

#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"

using namespace std;

Trainer::Trainer(string new_name) {
  name = new_name;
  party_size = 0;
  party = new Pokemon[3];
}

string Trainer::get_name() { return name; }

Pokemon* Trainer::get_party() { return party; }

void Trainer::set_name(string new_name) { name = new_name; }

void Trainer::display_party() {
  cout << "This Trainer's Pokemon Party:" << endl;
  for (int i = 0; i < party_size; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << " Species: " << party[i].get_species() << " | ";
    cout << " Type: " << party[i].get_type() << " | ";
    cout << " Health: " << party[i].get_health() << " | ";
    cout << "\n";
  }
}

void Trainer::add_pokemon_to_party(Pokemon pokemon) {
  if (party_size < 3) {
    party[party_size] = pokemon;
    party_size++;
  } else {
    cout << "Pokemon party is full!" << endl;
  }
}

void Trainer::remove_pokemon_from_party(Pokemon pokemon) {
  for (int i = 0; i < party_size; i++) {
    if (party[i].get_species() == pokemon.get_species() &&
        party[i].get_type() == pokemon.get_type() &&
        party[i].get_health() == pokemon.get_health() &&
        party[i].get_moveset() == pokemon.get_moveset()) {
      for (int j = i; j < party_size - 1; j++) {
        party[j] = party[j + 1];
      }
      party_size--;
      cout << "Pokemon removed from party!" << endl;
      return;
    }
  }
  cout << "Pokemon not found in party!" << endl;
}

Trainer::~Trainer() { delete[] party; }