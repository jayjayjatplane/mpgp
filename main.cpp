#include <iostream>
#include <string>

using namespace std;

void displayPokemonList() {
  // to do: implement displaying Pokemon list
  cout << "Current Pokemon Party: " << endl;
  string pokemonParty[6];
  for (int i = 0; i < 6; i++) {
    pokemonParty[i] = "My Pokemon " + to_string(i + 1);
  }
  for (int i = 0; i < 6; i++) {
    cout << pokemonParty[i] << endl;
  }
  cout << "\n";

  cout << "List of Pokemon Available:" << endl;
  int pokemonTotal = 30;
  string pokemonList[30];
  for (int i = 0; i < pokemonTotal; i++) {
    pokemonList[i] = "Pokemon " + to_string(i + 1);
  }
  for (int i = 0; i < pokemonTotal; i++) {
    if ((i + 1) % 3 != 0) {
      cout << pokemonList[i] << " | ";
    } else {
      cout << pokemonList[i] << endl;
    }
  }
}

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

void fightGym() { cout << "You fought a gym and won!" << endl; }

void fightChampion() { cout << "You fought the champion and won!" << endl; }

void pokemonPartyMenu() {
  while (true) {
    cout << "POKEMON PARTY MENU:" << endl;
    cout << "1. Display Pokemon List" << endl;
    cout << "2. Add Pokemon" << endl;
    cout << "3. Remove Pokemon" << endl;
    cout << "4. Go Back" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int party_menu_choice;
    cin >> party_menu_choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    if (party_menu_choice == 1) {
      displayPokemonList();
      cout << "\n";
    } else if (party_menu_choice == 2) {
      addPokemon();
      cout << "\n";
    } else if (party_menu_choice == 3) {
      removePokemon();
      cout << "\n";
    } else if (party_menu_choice == 4) {
      break;
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
    }
  }
}

int main() {
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
    cout << "1. Pokemon Party" << endl;
    cout << "2. Game" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int choice;
    cin >> choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;
    if (choice == 1) {
      pokemonPartyMenu();
    } else if (choice == 2) {
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