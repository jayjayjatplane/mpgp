#include <iostream>
#include <string>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"
#include "Trainer.h"

extern void performBattle(Trainer& userTrainer, Trainer& gymLeader);
extern void initializePokedex(Pokedex& pokedex);
extern void addPokemon();
extern void removePokemon();

using namespace std;

// Adding the First 100 Pokemon into the Pokedex

void pokedexMenu(Pokedex pokedex_num) {
  // to do: implement displaying Pokemon list
  cout << "\n";
  while (true) {
    cout << "POKEDEX MENU:" << endl;
    cout << "1. Display Pokedex" << endl;
    cout << "2. Go Back" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int pokedex_menu_choice;
    cin >> pokedex_menu_choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    if (pokedex_menu_choice == 1) {
      pokedex_num.display_pokedex();
      cout << "\n";
    } else if (pokedex_menu_choice == 2) {
      cout << "\n";
      break;
    } else {
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
}

void fightGym() { cout << "You fought a gym and won!" << endl; }

void fightChampion() { cout << "You fought the champion and won!" << endl; }

void partyMenu() {
  while (true) {
    cout << "POKEMON PARTY MENU:" << endl;
    cout << "1. Add Pokemon" << endl;
    cout << "2. Remove Pokemon" << endl;
    cout << "3. Go Back" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int party_menu_choice;
    cin >> party_menu_choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    if (party_menu_choice == 1) {
      addPokemon();
      cout << "\n";
    } else if (party_menu_choice == 2) {
      removePokemon();
      cout << "\n";
    } else if (party_menu_choice == 3) {
      break;
    } else {
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
}

void gameMenu() {
  while (true) {
    cout << "Game Menu:" << endl;
    cout << "1. Fight Gym 1" << endl;
    cout << "2. Fight Gym 2" << endl;
    cout << "3. Fight Gym 3" << endl;
    cout << "4. Fight Champion" << endl;
    cout << "5. Go Back" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int game_menu_choice;
    cin >> game_menu_choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    if (game_menu_choice >= 1 && game_menu_choice <= 3) {
      fightGym();
      cout << "\n";
    } else if (game_menu_choice == 4) {
      fightChampion();
      cout << "\n";
    } else if (game_menu_choice == 5) {
      break;
    } else {
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
}

int main() {
  // Create a Pokedex instance
  Pokedex pokedex_thirty(30);

  // Initialize the Pokédex with Pokémon and moves
  initializePokedex(pokedex_thirty);

  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
          "\n\n\n\n\n";
  string name = "";
  cout << "WELCOME TO JOSHYMON!" << endl;
  cout << "In this terminal-based Pokemon battle game, you embark on a journey "
          "to become the Pokemon Master (which ash never does)"
       << endl;
  cout << "Your Journey begins in the main menu, where you can choose to "
          "manage your Pokemon party or start your adventure.\n"
       << endl;
  cout << "Objective: Defeat the three gym leaders and ultimately face the "
          "Pokemon champion."
       << endl;
  cout << "Along the way, you will need to manage your Pokemon party, adding "
          "and "
          "removing Pokemon as you progress through the game.\n"
       << endl;
  cout << "Enter Your Name and Click Enter to Start..." << endl;
  cin >> name;
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
          "\n\n\n\n\n"
       << endl;
  cout << "Hi Trainer " << name << "! " << endl;

  int choice_counter = 0;
  while (true) {
    cout << "Main Menu:" << endl;
    cout << "1. Pokedex" << endl;
    cout << "2. Party" << endl;
    cout << "3. Game" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int choice;
    cin >> choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;
    if (choice == 1) {
      pokedexMenu(pokedex_thirty);
    } else if (choice == 2) {
      partyMenu();
    } else if (choice == 3) {
      gameMenu();
    } else {
      cout << "Please Enter a Valid Choice (1 or 2)";
      choice_counter++;
      if (choice_counter >= 5) {
        cout << "Ran Out of Tries. Please Restart." << endl;
        return 0;
      }
    }
  }
  return 0;
}