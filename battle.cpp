#include <iostream>
#include <string>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"

using namespace std;

void performBattle(Pokemon& userPokemon, Pokemon& gymLeaderPokemon) {
  cout << gymLeaderPokemon.get_species() << " appears!" << endl;

  while (userPokemon.get_health() > 0 && gymLeaderPokemon.get_health() > 0) {
    cout << "\nYour " << userPokemon.get_species()
         << " (Health: " << userPokemon.get_health() << ")" << endl;
    cout << "Opponent " << gymLeaderPokemon.get_species()
         << " (Health: " << gymLeaderPokemon.get_health() << ")" << endl;

    cout << "\n\n\n";

    // User selects a move
    cout << "Choose a move for " << userPokemon.get_species() << ": " << endl;
    cout << "1. " << userPokemon.get_moveset().get_move_name() << endl;

    int moveChoice;
    cin >> moveChoice;

    cout << "\n\n\n";

    // User attacks
    cout << userPokemon.get_species() << " used "
         << userPokemon.get_moveset().get_move_name() << "!\n";
    int damage = userPokemon.get_moveset().get_damage();
    gymLeaderPokemon.takeDamage(damage);

    // Check if the gym leader's Pokémon fainted
    if (gymLeaderPokemon.get_health() <= 0) {
      cout << "You defeated the Gym Leader!" << endl;
      break;
    }

    // Gym Leader attacks
    cout << gymLeaderPokemon.get_species() << " used Flamethrower!\n";
    int leaderMoveDamage = gymLeaderPokemon.get_moveset().get_damage();
    userPokemon.takeDamage(leaderMoveDamage);

    cout << "\n\n\n";

    // Check if the user's Pokémon fainted
    if (userPokemon.get_health() <= 0) {
      cout << "You lost the battle!" << endl;
      break;
    }
  }
}

int main() {
  // Create Gym Leader's Pokémon (Charizard)
  Move Flamethrower("Flamethrower", "Fire", 30);
  Pokemon Charizard("Charizard", "Fire", 78, Flamethrower);

  // Example of user's Pokémon
  Move Gigadrain("Giga Drain", "Grass", 30);
  Pokemon userPokemon("Venusaur", "Grass", 80, Gigadrain);

  // Start the battle
  performBattle(userPokemon, Charizard);

  return 0;
}
