#include <iostream>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"

void addPokemon() {
  /* \
  if (pokemonNum >= 6) {
    cout << "Party is full. Please remove a pokemon and try again." << endl;
  }
  */
  string pokemonName;
  cout << "Enter Pokemon name: ";
  cin >> pokemonName;
  /*
  Add pokemon to party
  pokemonParty.add(pokemonName);
  */
  cout << pokemonName << " has been added to your party.\n" << endl;
  cout << "Current Pokemon Party: " << endl;
  string pokemonParty[6];
  for (int i = 0; i < 6; i++) {
    pokemonParty[i] = "My Pokemon " + to_string(i + 1);
  }
  for (int i = 0; i < 6; i++) {
    cout << pokemonParty[i] << endl;
  }
  cout << "\n";
}