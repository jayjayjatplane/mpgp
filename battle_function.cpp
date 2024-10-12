#include <iostream>
#include <string>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"
#include "Trainer.h"

using namespace std;

void performBattle(Trainer& userTrainer, Trainer& gymLeader) {
  int userPokemonIndex = 0;
  int gymLeaderPokemonIndex = 0;

  Pokemon* userPokemon =
      &userTrainer.get_party()[userPokemonIndex];  // Current user Pokémon
  Pokemon* gymLeaderPokemon =
      &gymLeader
           .get_party()[gymLeaderPokemonIndex];  // Current gym leader Pokémon

  cout << gymLeader.get_name() << "'s " << gymLeaderPokemon->get_species()
       << " appears!" << endl;

  while (true) {
    // Check if all of the user's Pokémon have fainted
    bool userHasPokemonLeft = false;
    for (int i = 0; i < userTrainer.get_party_size(); ++i) {
      if (userTrainer.get_party()[i].get_health() > 0) {
        userHasPokemonLeft = true;
        break;
      }
    }
    if (!userHasPokemonLeft) {
      cout << "You have no more Pokémon! You lost the battle!" << endl;
      break;
    }

    // Check if all of the gym leader's Pokémon have fainted
    bool gymLeaderHasPokemonLeft = false;
    for (int i = 0; i < gymLeader.get_party_size(); ++i) {
      if (gymLeader.get_party()[i].get_health() > 0) {
        gymLeaderHasPokemonLeft = true;
        break;
      }
    }
    if (!gymLeaderHasPokemonLeft) {
      cout << "You defeated the Gym Leader!" << endl;
      break;
    }

    // Display current status
    cout << "\nYour " << userPokemon->get_species()
         << " (Health: " << userPokemon->get_health() << ")" << endl;
    cout << "Opponent " << gymLeaderPokemon->get_species()
         << " (Health: " << gymLeaderPokemon->get_health() << ")" << endl;

    // User's turn
    cout << "\nChoose an action:\n1. Attack\n2. Switch Pokémon\n";
    int actionChoice;
    cin >> actionChoice;

    if (actionChoice == 1) {
      // Attack
      cout << "Choose a move for " << userPokemon->get_species() << ": "
           << endl;
      cout << "1. " << userPokemon->get_moveset().get_move_name() << endl;

      int moveChoice;
      cin >> moveChoice;

      // User attacks
      cout << userPokemon->get_species() << " used "
           << userPokemon->get_moveset().get_move_name() << "!\n";
      int damage = userPokemon->get_moveset().get_damage();
      gymLeaderPokemon->takeDamage(damage);

      // Check if the gym leader's Pokémon fainted
      if (gymLeaderPokemon->get_health() <= 0) {
        cout << gymLeaderPokemon->get_species() << " fainted!" << endl;
        // Select next available Pokémon for gym leader
        gymLeaderPokemonIndex++;
        while (gymLeaderPokemonIndex < gymLeader.get_party_size() &&
               gymLeader.get_party()[gymLeaderPokemonIndex].get_health() <= 0) {
          gymLeaderPokemonIndex++;
        }
        if (gymLeaderPokemonIndex < gymLeader.get_party_size()) {
          gymLeaderPokemon = &gymLeader.get_party()[gymLeaderPokemonIndex];
          cout << gymLeader.get_name() << "'s "
               << gymLeaderPokemon->get_species() << " enters the battle!"
               << endl;
        }
      }
    } else if (actionChoice == 2) {
      // Switch Pokémon
      cout << "Choose a Pokémon to switch to:\n";
      for (int i = 0; i < userTrainer.get_party_size(); i++) {
        if (userTrainer.get_party()[i].get_health() >
            0) {  // Only display Pokémon that haven't fainted
          cout << i + 1 << ". " << userTrainer.get_party()[i].get_species()
               << " (Health: " << userTrainer.get_party()[i].get_health() << ")"
               << endl;
        }
      }

      int switchChoice;
      cin >> switchChoice;
      userPokemonIndex = switchChoice - 1;
      userPokemon = &userTrainer.get_party()[userPokemonIndex];
      cout << "You switched to " << userPokemon->get_species() << "!\n";
      continue;  // Skip the gym leader's turn after switching (can change
                 // later)
    }

    // Gym Leader's turn
    if (gymLeaderPokemon->get_health() > 0) {
      cout << gymLeaderPokemon->get_species() << " used "
           << gymLeaderPokemon->get_moveset().get_move_name() << "\n";
      int leaderMoveDamage = gymLeaderPokemon->get_moveset().get_damage();
      userPokemon->takeDamage(leaderMoveDamage);

      // Check if the user's Pokémon fainted
      if (userPokemon->get_health() <= 0) {
        cout << userPokemon->get_species() << " fainted!" << endl;
        // switch to the next available Pokémon
        for (int i = 0; i < userTrainer.get_party_size(); i++) {
          if (userTrainer.get_party()[i].get_health() > 0) {
            userPokemonIndex = i;
            userPokemon = &userTrainer.get_party()[userPokemonIndex];
            cout << "Go, " << userPokemon->get_species() << "!" << endl;
            break;
          }
        }
      }
    }
  }
}