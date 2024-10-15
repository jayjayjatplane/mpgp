#include <iostream>
#include <string>

#include "Move.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "PokemonParty.h"
#include "Trainer.h"

extern void performBattle(Trainer& userTrainer, Trainer& gymLeader);
extern void initializePokedex(Pokedex& pokedex);

using namespace std;

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

void fightGym1(Trainer& userTrainer) {
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

  performBattle(userTrainer, gymLeader1);
}

void fightGym2(Trainer& userTrainer) {
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

  performBattle(userTrainer, gymLeader2);
}

void fightGym3(Trainer& userTrainer) {
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

  performBattle(userTrainer, gymLeader3);
}

void fightChampion(Trainer& userTrainer) {
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

  performBattle(userTrainer, champion);
}

int MAX_PARTY = 6;  // Maximum party size for a Trainer

void addPokemon(Trainer& userTrainer, Pokedex& pokedex) {
  // Display the list of Pokémon the player can choose from
  cout << "Select a Pokémon to add to your party:" << endl;
  for (int i = 0; i < pokedex.getSize();
       ++i) {  // Assuming getSize() returns the Pokedex size
    cout << i + 1 << ". " << pokedex.getPokemonByIndex(i).get_species() << endl;
  }
  int choice;
  cin >> choice;

  // Add the selected Pokémon to the party (adjusting index)
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

void removePokemon(Trainer& userTrainer) {
  // Display the current party
  cout << "Select a Pokémon to remove from your party:" << endl;
  int partySize = userTrainer.get_party_size();
  Pokemon* currentParty = userTrainer.get_party();

  for (int i = 0; i < partySize; ++i) {
    cout << i + 1 << ". " << currentParty[i].get_species() << endl;
  }
  int choice;
  cin >> choice;

  // Remove the selected Pokémon (adjusting index)
  if (choice > 0 && choice <= partySize) {
    cout << currentParty[choice - 1].get_species()
         << " removed from your party!" << endl;
    userTrainer.removePokemonFromParty(
        currentParty[choice - 1]);  // Remove based on index
  } else {
    cout << "Invalid choice!" << endl;
  }
}

void partyMenu(Trainer& userTrainer, Pokedex& pokedex) {
  while (true) {
    cout << "POKEMON PARTY MENU:" << endl;
    cout << "1. Add Pokemon" << endl;
    cout << "2. Remove Pokemon" << endl;
    cout << "3. View Party" << endl;  // New option to view party
    cout << "4. Go Back" << endl;
    cout << "\nEnter your choice: ";
    int party_menu_choice;
    cin >> party_menu_choice;

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
      userTrainer.display_party();  // Call to display party
      cout << "\n";
    } else if (party_menu_choice == 4) {
      break;
    } else {
      cout << "Please enter a valid choice.\n" << endl;
    }
  }
}

void gameMenu(Trainer& userTrainer) {
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

    if (game_menu_choice == 1) {
      fightGym1(userTrainer);
      cout << "\n";
    } else if (game_menu_choice == 2) {
      fightGym2(userTrainer);
      cout << "\n";
    } else if (game_menu_choice == 3) {
      fightGym3(userTrainer);
      cout << "\n";
    } else if (game_menu_choice == 4) {
      fightChampion(userTrainer);
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

  Trainer userTrainer(name);

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
      partyMenu(userTrainer, pokedex_thirty);
    } else if (choice == 3) {
      gameMenu(userTrainer);
    } else {
      cout << "Please Enter a Valid Choice (1 or 2)";
    }
  }
  return 0;
}