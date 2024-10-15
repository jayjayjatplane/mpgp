#include <fstream>
#include <iostream>
#include <string>

#include "Limits.h"
#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"
#include "Trainer.h"

// functions outside of this file to keep organised
extern bool performBattle(Trainer& userTrainer, Trainer& gymLeader);
extern void initializePokedex(Pokedex& pokedex);

using namespace std;

// save functions
void saveGame(string& trainerName, int badgeCount) {
  ofstream outFile(
      "save_game.txt");  // Open or create a file named "save_game.txt"

  if (outFile.is_open()) {
    outFile << trainerName << std::endl;  // Write the trainer name
    outFile << badgeCount << std::endl;   // Write the badge count
    outFile.close();                      // Close the file
    cout << "Game saved successfully!" << std::endl;
  } else {
    cerr << "Error saving the game!" << std::endl;
  }
}

// load save
void loadGame(string& trainerName, int& badgeCount) {
  ifstream inFile("save_game.txt");  // Open the same file

  if (inFile.is_open()) {
    getline(inFile, trainerName);  // Read the trainer name
    inFile >> badgeCount;          // Read the badge count
    inFile.close();                // Close the file
    cout << "Game loaded successfully!" << std::endl;
  } else {
    cerr << "Error loading the game!" << std::endl;
  }
}

// Pokedex menu function: guides the user through options of the pokedex
void pokedexMenu(Pokedex pokedex_num) {
  cout << "\n";
  while (true) {
    cout << "POKEDEX MENU:" << endl;
    cout << "1. Display Pokedex" << endl;
    cout << "2. Go Back" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int pokedex_menu_choice = getValidatedChoice();
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

// function that allows trainer to add pokemon from the pokedex by number
void addPokemon(Trainer& userTrainer, Pokedex& pokedex) {
  // Display the list of Pokémon the player can choose from
  cout << "Select a Pokémon to add to your party:" << endl;
  for (int i = 0; i < pokedex.getSize(); ++i) {
    cout << i + 1 << ". " << pokedex.getPokemonByIndex(i).get_species() << endl;
  }
  int choice = getValidatedChoice();

  // Add the selected Pokémon to the party
  if (choice > 0 && choice <= pokedex.getSize()) {
    if (userTrainer.get_party_size() < 3) {  // Maximum party size of 3
      userTrainer.addPokemonToParty(
          pokedex.getPokemonByIndex(choice - 1));  // Add from Pokedex
      cout << pokedex.getPokemonByIndex(choice - 1).get_species()
           << " added to your party!" << endl;
    } else {
      cout << "Your party is full!" << endl;
    }
  } else {
    cout << "Invalid choice!" << endl;
  }
}

// function that allows the trainer to remove pokemon from their party
void removePokemon(Trainer& userTrainer) {
  cout << "Select a Pokémon to remove from your party:" << endl;
  int partySize = userTrainer.get_party_size();
  Pokemon* currentParty = userTrainer.get_party();

  for (int i = 0; i < partySize; ++i) {
    cout << i + 1 << ". " << currentParty[i].get_species() << endl;
  }
  int choice = getValidatedChoice();

  // Remove the selected Pokémon
  if (choice > 0 && choice <= partySize) {
    cout << currentParty[choice - 1].get_species()
         << " removed from your party!" << endl;
    userTrainer.removePokemonFromParty(currentParty[choice - 1]);
  } else {
    cout << "Invalid choice!" << endl;
  }
}

// Pokemon Party menu function: guides the user through choice of pokemon teams
void partyMenu(Trainer& userTrainer, Pokedex& pokedex) {
  while (true) {
    cout << "POKEMON PARTY MENU:" << endl;
    cout << "1. Add Pokemon" << endl;
    cout << "2. Remove Pokemon" << endl;
    cout << "3. View Party" << endl;
    cout << "4. Go Back" << endl;
    cout << "\nEnter your choice: ";
    int party_menu_choice = getValidatedChoice();

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    if (party_menu_choice == 1) {
      addPokemon(userTrainer, pokedex);
      cout << "\n";
    } else if (party_menu_choice == 2) {
      removePokemon(userTrainer);
      cout << "\n";
    } else if (party_menu_choice == 3) {
      userTrainer.display_party();
      cout << "\n";
    } else if (party_menu_choice == 4) {
      break;
    } else {
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
}

void fightGym1(Trainer& userTrainer, int& badges) {
  Trainer gymLeader1("Gym Leader 1");
  Move RapidSpin("Rapid Spin", "Water", 25);
  Move WaterShuriken("Water Shuriken", "Water", 30);
  Move WaveCrash("Wave Crash", "Water", 40);
  Pokemon Omastar("Omastar", "Water", 50, RapidSpin);
  Pokemon Greninja("Greninja", "Water", 60, WaterShuriken);
  Pokemon Suicune("Suicune", "Water", 80, WaveCrash);
  gymLeader1.addPokemonToParty(Omastar);
  gymLeader1.addPokemonToParty(Greninja);
  gymLeader1.addPokemonToParty(Suicune);

  bool userWon = performBattle(userTrainer, gymLeader1);

  if (userWon) {
    badges++;
    cout << "You defeated the gym leader and earned a gym badge! Total badges: "
         << badges << endl;
  } else {
    cout << "Try again later!" << endl;
  }

  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}

void fightGym2(Trainer& userTrainer, int& badges) {
  Trainer gymLeader2("Gym Leader 2");
  Move FireSpin("Fire Spin", "Fire", 20);
  Move Inferno("Inferno", "Fire", 35);
  Move SacredFire("Sacred Fire", "Fire", 40);
  Pokemon Toarkoal("Toarkoal", "Fire", 50, FireSpin);
  Pokemon Infernape("Infernape", "Fire", 60, Inferno);
  Pokemon Entei("Entei", "Fire", 70, SacredFire);
  gymLeader2.addPokemonToParty(Toarkoal);
  gymLeader2.addPokemonToParty(Infernape);
  gymLeader2.addPokemonToParty(Entei);

  bool userWon = performBattle(userTrainer, gymLeader2);

  if (userWon) {
    badges++;
    cout << "You defeated the gym leader and earned a gym badge! Total badges: "
         << badges << endl;
  } else {
    cout << "Try again later!" << endl;
  }

  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}

void fightGym3(Trainer& userTrainer, int& badges) {
  Trainer gymLeader3("Gym Leader 3");
  Move Shockwave("Shockwave", "Electric", 25);
  Move VoltTackle("Volt Tackle", "Electric", 50);
  Move Thunder("Thunder", "Electric", 40);
  Pokemon Jolteon("Jolteon", "Electric", 50, Shockwave);
  Pokemon Pikachu("Pikachu", "Electric", 40, VoltTackle);
  Pokemon Raikou("Raikou", "Electric", 70, Thunder);
  gymLeader3.addPokemonToParty(Jolteon);
  gymLeader3.addPokemonToParty(Pikachu);
  gymLeader3.addPokemonToParty(Raikou);

  bool userWon = performBattle(userTrainer, gymLeader3);

  if (userWon) {
    badges++;
    cout << "You defeated the gym leader and earned a gym badge! Total badges: "
         << badges << endl;
  } else {
    cout << "Try again later!" << endl;
  }

  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}

int fightChampion(Trainer& userTrainer, int& badges) {
  Trainer champion("Champion");
  Move HeavySlam("Heavy Slam", "Steel", 30);
  Move DracoMeteor("Draco Meteror", "Dragon", 40);
  Move Incinerate("Incinerate", "Fire", 40);
  Pokemon Metagross("Metagross", "Steel", 70, HeavySlam);
  Pokemon Dragonite("Dragonite", "Dragon", 80, DracoMeteor);
  Pokemon Hooh("HO-OH", "Fire", 80, Incinerate);
  champion.addPokemonToParty(Metagross);
  champion.addPokemonToParty(Dragonite);
  champion.addPokemonToParty(Hooh);

  bool userWon = performBattle(userTrainer, champion);

  if (userWon) {
    cout << "You beat the champion and have become a Pokemon Master! " << endl;
    return 1;
  } else {
    cout << "Try again later!" << endl;
    return -1;
  }

  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}

// Game menu function: guides the user through battle choices and gym badge
// collection
int gameMenu(Trainer& userTrainer, int& badges) {
  int win_game = -1;
  int win_gym = -1;
  while (true) {
    cout << "Game Menu:" << endl;
    cout << "1. Fight Gym 1" << endl;
    cout << "2. Fight Gym 2" << endl;
    cout << "3. Fight Gym 3" << endl;
    cout << "4. Fight Champion" << endl;
    cout << "5. Display Badges" << endl;
    cout << "6. Go Back" << endl;
    cout << "\n";
    cout << "Enter your choice: " << endl;
    int game_menu_choice = getValidatedChoice();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    if (game_menu_choice == 1) {
      fightGym1(userTrainer, badges);
      cout << "\n";
    } else if (game_menu_choice == 2) {
      fightGym2(userTrainer, badges);
      cout << "\n";
    } else if (game_menu_choice == 3) {
      fightGym3(userTrainer, badges);
      cout << "\n";
    } else if (game_menu_choice == 4) {
      if (badges < 3) {
        cout << "You do not have enough badges to fight the champion \n"
             << endl;
      } else {
        if (fightChampion(userTrainer, badges) == 1) {
          win_game = 1;
          break;
        }
      }
      cout << "\n";
    } else if (game_menu_choice == 5) {
      // Display the number of badges
      cout << "You have " << badges << " badge(s)." << endl;
      cout << "\n";
    } else if (game_menu_choice == 6) {
      break;
    } else {
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
  return win_game;
}

int main() {
  // Create a Pokedex instance
  Pokedex pokedex_thirty(30);

  int badges = 0;

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

  Trainer userTrainer(name);

  while (true) {
    cout << "Main Menu:" << endl;
    cout << "1. Pokedex" << endl;
    cout << "2. Party" << endl;
    cout << "3. Game" << endl;
    cout << "4. Save Game" << endl;
    cout << "5. Load Game" << endl;
    cout << "6. Quit" << endl;
    cout << "\n";

    int choice = getValidatedChoice();

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;
    if (choice == 1) {
      pokedexMenu(pokedex_thirty);
    } else if (choice == 2) {
      partyMenu(userTrainer, pokedex_thirty);
    } else if (choice == 3) {
      int did_win = gameMenu(userTrainer, badges);
      if (did_win == 1) {
        cout << "YOU WON" << endl;
        return 0;
      }
    } else if (choice == 4) {
      saveGame(name, badges);  // Call save function
    } else if (choice == 5) {
      loadGame(name, badges);  // Call load function
      userTrainer.set_name(
          name);  // Assuming Trainer class has a setName method
      cout << "Trainer Name: " << name << ", Badges: " << badges
           << endl;  // Display loaded info
    } else if (choice == 6) {
      break;
    } else {
      cout << "Please Enter a Valid Choice (1, 2, 3, 4, 5, or 6)\n";
    }
  }
  return 0;
}