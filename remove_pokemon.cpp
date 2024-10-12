#include <iostream>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"

void removePokemon() {
  /* if (pokemonNum >= 6) {
    cout << "Party is empty. Please add a pokemon and try again." << endl;
  } */
  string pokemonName;
  cout << "Enter Pokemon name: ";
  cin >> pokemonName;
  /*
  Remove pokemon from party
  pokemonParty.rem(pokemonName);
  */
  cout << pokemonName << " has been removed from your party.\n" << endl;
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