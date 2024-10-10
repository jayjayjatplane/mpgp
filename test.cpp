#include <iostream>
#include <string>

using namespace std;

/* struct Pokemon {
  string species;
  string type;
  int health;
};

int main() {
  Pokemon party_array[6] = {
      {"Squirtle", "Water", 90},         {"Charmander", "Fire", 85},
      {"Bulbasaur", "Grass/Poison", 80}, {"Beedrill", "Bug/Poison", 75},
      {"Piplup", "Water/Flying", 95},    {"Mewtwo", "Psychic", 100}};

  cout << "Pokemon Party:" << endl;
  for (int i = 0; i < 6; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << " Species: " << party_array[i].species << " | ";
    cout << " Type: " << party_array[i].type << " | ";
    cout << " Health: " << party_array[i].health << " | ";
    cout << " Level: " << "1" << " | ";
    cout << "\n";
  }
  cout << "\n";
} */

#include <iostream>

#include "PokemonParty.h"

using namespace std;

PokemonParty::PokemonParty() { party_size = 0; }

PokemonParty::PokemonParty(int capacity) { party_size = 0; }

void PokemonParty::add_pokemon_to_party(Pokemon pokemon) {
  if (party_size < 6) {
    party_array[party_size] = pokemon;
    party_size++;
    cout << "Pokemon added to party!" << endl;
  } else {
    cout << "Party is full!" << endl;
  }
}

void PokemonParty::display_party() {
  for (int i = 0; i < party_size; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << "Species: " << party_array[i].get_species() << endl;
    cout << "Type: " << party_array[i].get_type() << endl;
    cout << "Health: " << party_array[i].get_health() << endl;
    cout << "Moveset: " << party_array[i].get_moveset() << endl;
    cout << "Level: " << party_array[i].get_level() << endl;
  }
}

void PokemonParty::rem_pokemon_from_party(Pokemon pokemon) {
  for (int i = 0; i < party_size; i++) {
    if (party_array[i].get_species() == pokemon.get_species() &&
        party_array[i].get_type() == pokemon.get_type() &&
        party_array[i].get_health() == pokemon.get_health() &&
        party_array[i].get_moveset() == pokemon.get_moveset() &&
        party_array[i].get_level() == pokemon.get_level()) {
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
  int health, level;
  cout << "Enter Pokemon species: ";
  cin >> species;
  cout << "Enter Pokemon type: ";
  cin >> type;
  cout << "Enter Pokemon health: ";
  cin >> health;
  cout << "Enter Pokemon moveset: ";
  cin >> moveset;
  cout << "Enter Pokemon level: ";
  cin >> level;
  Pokemon new_pokemon(species, type, health, moveset, level);
  add_pokemon_to_party(new_pokemon);
  cout << "Pokemon added to party!" << endl;
}

void PokemonParty::display_pokemon_list() { display_party(); }