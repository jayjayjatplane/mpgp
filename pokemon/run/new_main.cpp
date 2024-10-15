#include <fstream>
#include <iostream>
#include <string>

#include "Limits.h"
#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"
#include "Trainer.h"

// Function declarations for external functions
extern bool performBattle(Trainer& userTrainer, Trainer& gymLeader);
extern void initializePokedex(Pokedex& pokedex);

using namespace std;

// save functions
void saveGame(string& trainerName, int badgeCount) {
  ofstream outFile(
      "save_game.txt");  // Open or create a file named "save_game.txt"

  if (outFile.is_open()) {
    outFile << trainerName << endl;  // Write the trainer name
    outFile << badgeCount << endl;   // Write the badge count
    outFile.close();                 // Close the file
    cout << "Game saved successfully!" << endl;
  } else {
    cerr << "Error saving the game!" << endl;
  }
}

// load save
void loadGame(string& trainerName, int& badgeCount) {
  ifstream inFile("save_game.txt");  // Open the same file

  if (inFile.is_open()) {
    getline(inFile, trainerName);  // Read the trainer name
    inFile >> badgeCount;          // Read the badge count
    inFile.close();                // Close the file
    cout << "Game loaded successfully!" << endl;
  } else {
    cerr << "Error loading the game!" << endl;
  }
}

/**
 * Displays the Pokedex menu and guides the user through options.
 *
 * Functions:
 * Presents the user with a menu to either display the Pokedex OR
 * Return to the previous menu.
 * It continues to prompt the user for input until a valid choice is made.
 */
void pokedexMenu(Pokedex pokedex_num) {
  // Display the Pokedex menu
  cout << "\n";
  while (true) {
    // Display menu options
    cout << "POKEDEX MENU:" << endl;
    cout << "1. Display Pokedex" << endl;
    cout << "2. Go Back" << endl;
    cout << "\n";

    // Prompt the user for input
    int pokedex_menu_choice = getValidatedChoice();

    // Clear the screen
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    // Handle user input
    if (pokedex_menu_choice == 1) {
      // Display the Pokedex
      pokedex_num.display_pokedex();
      cout << "\n";
    } else if (pokedex_menu_choice == 2) {
      // Return to the previous menu
      cout << "\n";
      break;
    } else {
      // Handle invalid input
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
}

/**
 * Allows the trainer to add a Pokemon from the Pokedex to their party.
 *
 * Functions:
 * Displays a list of available Pokemon
 * Prompts the user to select one
 * Adds it to their party if there is space available
 */
void addPokemon(Trainer& userTrainer, Pokedex& pokedex) {
  // Display the list of Pokemon the player can choose from
  cout << "Select a Pokemon to add to your party:" << endl;
  for (int i = 0; i < pokedex.getSize(); ++i) {
    cout << i + 1 << ". " << pokedex.getPokemonByIndex(i).get_species() << endl;
  }

  // Get the user's choice
  int choice = getValidatedChoice();

  // Validate the user's choice and add the Pokemon to the party if possible
  if (choice > 0 && choice <= pokedex.getSize()) {
    // Check if the party is not full
    if (userTrainer.get_party_size() < 3) {
      // Add the selected Pokemon to the party
      userTrainer.addPokemonToParty(pokedex.getPokemonByIndex(choice - 1));
      cout << pokedex.getPokemonByIndex(choice - 1).get_species()
           << " added to your party!" << endl;
    } else {
      // Handle a full party
      cout << "Your party is full!" << endl;
    }
  } else {
    // Handle an invalid choice
    cout << "Invalid choice!" << endl;
  }
}

/**
 * Allows the trainer to remove a Pokemon from their party.
 *
 * Functions:
 * Displays the trainer's current party
 * Prompts the user to select a Pokemon
 * Removes it from the party if the choice is valid.
 */
void removePokemon(Trainer& userTrainer) {
  // Display the trainer's current party
  cout << "Select a Pokemon to remove from your party:" << endl;
  int partySize = userTrainer.get_party_size();
  Pokemon* currentParty = userTrainer.get_party();

  // List the Pokemon in the party
  for (int i = 0; i < partySize; ++i) {
    cout << i + 1 << ". " << currentParty[i].get_species() << endl;
  }

  // Get the user's choice
  int choice = getValidatedChoice();

  // Validate the user's choice and remove the Pokemon from the party
  if (choice > 0 && choice <= partySize) {
    // Remove the selected Pokemon
    cout << currentParty[choice - 1].get_species()
         << " removed from your party!" << endl;
    userTrainer.removePokemonFromParty(currentParty[choice - 1]);
  } else {
    // Handle an invalid choice
    cout << "Invalid choice!" << endl;
  }
}

// Pokemon Party menu function: guides the user through choice of pokemon teams
void partyMenu(Trainer& userTrainer, Pokedex& pokedex) {
  while (true) {
    // Display the Pokemon Party menu
    cout << "POKEMON PARTY MENU:" << endl;
    cout << "1. Add Pokemon" << endl;
    cout << "2. Remove Pokemon" << endl;
    cout << "3. View Party" << endl;
    cout << "4. Go Back" << endl;
    cout << "\n";
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
/**
 * Simulates a battle against the first Gym Leader and awards a badge if the
 * user wins.
 *
 * Functions:
 * Creates the Gym Leader's team
 * Performs the battle
 * Updates the user's badge count
 */
void fightGym1(Trainer& userTrainer, int& badges) {
  // Create the Gym Leader and their Pokemon
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

  // Perform the battle
  bool userWon = performBattle(userTrainer, gymLeader1);

  // Update the user's badge count and display the result
  if (userWon) {
    badges++;
    cout << "You defeated the gym leader and earned a gym badge! Total badges: "
         << badges << endl;
  } else {
    cout << "Try again later!" << endl;
  }

  // Heal the user's Pokemon after the battle
  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}

/**
 * Simulates a battle against the second Gym Leader and awards a badge if the
 * user wins.
 *
 * Functions:
 * Creates the Gym Leader's team
 * Performs the battle
 * Updates the user's badge count
 */
void fightGym2(Trainer& userTrainer, int& badges) {
  // Create the Gym Leader and their Pokemon
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

  // Perform the battle
  bool userWon = performBattle(userTrainer, gymLeader2);

  // Update the user's badge count and display the result
  if (userWon) {
    badges++;
    cout << "You defeated the gym leader and earned a gym badge! Total badges: "
         << badges << endl;
  } else {
    cout << "Try again later!" << endl;
  }

  // Heal the user's Pokemon after the battle
  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}

/**
 * Simulates a battle against the third Gym Leader and awards a badge if the
 * user wins.
 *
 * Functions:
 * Creates the Gym Leader's team
 * Performs the battle
 * Updates the user's badge count
 */
void fightGym3(Trainer& userTrainer, int& badges) {
  // Create the Gym Leader and their Pokemon
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

  // Perform the battle
  bool userWon = performBattle(userTrainer, gymLeader3);

  // Update the user's badge count and display the result
  if (userWon) {
    badges++;
    cout << "You defeated the gym leader and earned a gym badge! Total badges: "
         << badges << endl;
  } else {
    cout << "Try again later!" << endl;
  }

  // Heal the user's Pokemon after the battle
  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }
}
/**
 * Simulates a battle against the Pokemon Champion and determines if the user
 * becomes a Pokemon Master.
 *
 * Functions:
 * Creates the Champion's team
 * Performs the battle
 * Display results
 *
 */
int fightChampion(Trainer& userTrainer, int& badges) {
  // Create the Champion and their Pokemon
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

  // Perform the battle
  bool userWon = performBattle(userTrainer, champion);

  // Heal the user's Pokemon after the battle
  for (int i = 0; i < userTrainer.get_party_size(); ++i) {
    userTrainer.get_party()[i].heal();
  }

  // Display the result
  if (userWon) {
    cout << "You beat the champion and have become a Pokemon Master! " << endl;
    return 1;
  } else {
    cout << "Try again later!" << endl;
    return -1;
  }
}

/**
 * Displays the game menu and guides the user through battle choices and gym
 * badge collection.
 *
 * Functions:
 * Repeatedly displays the game menu
 * Processes the user's choice
 * Updates the game state
 *
 */
int gameMenu(Trainer& userTrainer, int& badges) {
  int win_game = -1;
  int win_gym = -1;
  while (true) {
    // Display the game menu
    cout << "Game Menu:" << endl;
    cout << "1. Fight Gym 1" << endl;
    cout << "2. Fight Gym 2" << endl;
    cout << "3. Fight Gym 3" << endl;
    cout << "4. Fight Champion" << endl;
    cout << "5. Display Badges" << endl;
    cout << "6. Go Back" << endl;
    cout << "\n";
    int game_menu_choice = getValidatedChoice();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    // Process the user's choice
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

/**
 * The main entry point of the Joshymon game.
 *
 * Functions:
 * Initializes the game,
 * Displays the main menu, and processes the
 * User's choices.
 *
 */
int main() {
  // Create a Pokedex instance with a capacity of 30
  Pokedex pokedex_thirty(30);

  int badges = 0;

  // Initialize the Pokedex with Pokemon and moves
  initializePokedex(pokedex_thirty);

  // Clear the screen and display the game introduction
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

  // Create a Trainer instance with the user's name
  Trainer userTrainer(name);

  // Main game loop
  while (true) {
    // Display the main menu
    cout << "Main Menu:" << endl;
    cout << "1. Pokedex" << endl;
    cout << "2. Party" << endl;
    cout << "3. Game" << endl;
    cout << "4. Save Game" << endl;
    cout << "5. Load Game" << endl;

    cout << "\n";

    int choice = getValidatedChoice();

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n"
         << endl;

    // Process the user's choice
    if (choice == 1) {
      pokedexMenu(pokedex_thirty);
    } else if (choice == 2) {
      partyMenu(userTrainer, pokedex_thirty);
    } else if (choice == 3) {
      int did_win = gameMenu(userTrainer, badges);
      if (did_win == 1) {
        cout << "The Game has ended. Thanks for playing!" << endl;
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
    } else {
      cout << "Please Enter a Valid Choice (1, 2, 3, 4, or 5)\n";
    }
  }
  return 0;
}