#include <iostream>
#include <string>

#include "Pokedex.h"
#include "PokemonParty.h"

using namespace std;

// Adding the First 100 Pokemon into the Pokedex

void displayPokemonList(Pokedex pokedex_num) {
  // to do: implement displaying Pokemon list
  pokedex_num.display_pokedex();
  cout << "\n";
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
  // PokemonParty party;
  Pokedex pokedex_thirty(30);

  // 1
  Pokemon Venusaur("Venusaur", "Grass/Poison", 80,
                   "Solar Beam, Sleep Powder, Razor Leaf, Earthquake");
  pokedex_thirty.add_pokemon_to_pokedex(Venusaur);
  // 2
  Pokemon Charizard("Charizard", "Fire/Flying", 78,
                    "Flamethrower, Dragon Claw, Fire Blast, Fly");
  pokedex_thirty.add_pokemon_to_pokedex(Charizard);
  // 3
  Pokemon Blastoise("Blastoise", "Water", 79,
                    "Hydro Pump, Skull Bash, Withdraw, Earthquake");
  pokedex_thirty.add_pokemon_to_pokedex(Blastoise);
  // 4
  Pokemon Butterfree("Butterfree", "Bug/Flying", 60,
                     "Quiver Dance, Bug Bite, Poison Powder, Aerial Ace");
  pokedex_thirty.add_pokemon_to_pokedex(Butterfree);
  // 5
  Pokemon Beedrill("Beedrill", "Bug/Poison", 65,
                   "Twister, Bug Bite, Poison Fang, Agility");
  pokedex_thirty.add_pokemon_to_pokedex(Beedrill);
  // 6
  Pokemon Pidgeot("Pidgeot", "Normal/Flying", 83,
                  "Quick Attack, Whirlwind, Sand Attack, Aerial Ace");
  pokedex_thirty.add_pokemon_to_pokedex(Pidgeot);
  // 7
  Pokemon Raticate("Raticate", "Normal", 55,
                   "Hyper Fang, Quick Attack, Tail Whip, Super Fang");
  pokedex_thirty.add_pokemon_to_pokedex(Raticate);
  // 8
  Pokemon Fearow("Fearow", "Normal/Flying", 65,
                 "Quick Attack, Whirlwind, Sand Attack, Aerial Ace");
  pokedex_thirty.add_pokemon_to_pokedex(Fearow);
  // 9
  Pokemon Arbok("Arbok", "Poison", 60,
                "Poison Fang, Constrict, Slither, Earthquake");
  pokedex_thirty.add_pokemon_to_pokedex(Arbok);
  // 10
  Pokemon Raichu("Raichu", "Electric", 60,
                 "Thunderbolt, Quick Attack, Thunder Wave, Hyper Beam");
  pokedex_thirty.add_pokemon_to_pokedex(Raichu);
  // 11
  Pokemon Sandslash("Sandslash", "Ground", 75,
                    "Earthquake, Sand Attack, Dig, Stone Edge");
  pokedex_thirty.add_pokemon_to_pokedex(Sandslash);
  // 12
  Pokemon Nidoqueen("Nidoqueen", "Poison/Ground", 90,
                    "Earthquake, Poison Fang, Slither, Stone Edge");
  pokedex_thirty.add_pokemon_to_pokedex(Nidoqueen);
  // 13
  Pokemon Clefable("Clefable", "Fairy", 95,
                   "Moonblast, Metronome, Pound, Wish");
  pokedex_thirty.add_pokemon_to_pokedex(Clefable);
  // 14
  Pokemon Ninetales("Ninetales", "Fire", 73,
                    "Fire Blast, Flame Wheel, Fire Spin, Solar Beam");
  pokedex_thirty.add_pokemon_to_pokedex(Ninetales);
  // 15
  Pokemon Wigglytuff("Wigglytuff", "Normal/Fairy", 70,
                     "Pound, Growl, Sing, Rest");
  pokedex_thirty.add_pokemon_to_pokedex(Wigglytuff);
  // 16
  Pokemon Golbat("Golbat", "Poison/Flying", 75,
                 "Poison Fang, Leech Life, Wing Attack, Aerial Ace");
  pokedex_thirty.add_pokemon_to_pokedex(Golbat);
  // 17
  Pokemon Vileplume("Vileplume", "Grass/Poison", 75,
                    "Solar Beam, Sleep Powder, Razor Leaf, Earthquake");
  pokedex_thirty.add_pokemon_to_pokedex(Vileplume);
  // 18
  Pokemon Parasect("Parasect", "Bug/Grass", 60,
                   "Bug Bite, Poison Powder, String Shot, Spore");
  pokedex_thirty.add_pokemon_to_pokedex(Parasect);
  // 19
  Pokemon Venomoth("Venomoth", "Bug/Poison", 70,
                   "Poison Fang, Bug Bite, Sludge Bomb, Quiver Dance");
  pokedex_thirty.add_pokemon_to_pokedex(Venomoth);
  // 20
  Pokemon Dugtrio("Dugtrio", "Ground", 70,
                  "Earthquake, Sand Attack, Dig, Stone Edge");
  pokedex_thirty.add_pokemon_to_pokedex(Dugtrio);
  // 21
  Pokemon Golduck("Golduck", "Water", 80,
                  "Hydro Pump, Skull Bash, Withdraw, Earthquake");
  pokedex_thirty.add_pokemon_to_pokedex(Golduck);
  // 22
  Pokemon Primeape("Primeape", "Fighting", 65,
                   "Karate Chop, Pound, Tail Whip, Focus Energy");
  pokedex_thirty.add_pokemon_to_pokedex(Primeape);
  // 23
  Pokemon Arcanine("Arcanine", "Fire", 90, "Ember, Bite, Roar, Fire Blast");
  pokedex_thirty.add_pokemon_to_pokedex(Arcanine);
  // 24
  Pokemon Poliwrath("Poliwrath", "Water/Fighting", 90,
                    "Tackle, Bubble, Hypnosis, Water Gun");
  pokedex_thirty.add_pokemon_to_pokedex(Poliwrath);
  // 25
  Pokemon Alakazam("Alakazam", "Psychic", 90,
                   "Teleport, Pound, Light Screen, Psychic");
  pokedex_thirty.add_pokemon_to_pokedex(Alakazam);
  // 26
  Pokemon Machamp("Machamp", "Fighting", 90,
                  "Karate Chop, Pound, Tail Whip, Focus Energy");
  pokedex_thirty.add_pokemon_to_pokedex(Machamp);
  // 27
  Pokemon Bellsprout("Bellsprout", "Grass/Poison", 40,
                     "Razor Leaf, Vine Whip, Poison Powder, Sleep Powder");
  pokedex_thirty.add_pokemon_to_pokedex(Bellsprout);
  // 28
  Pokemon Tentacruel("Tentacruel", "Water/Poison", 65,
                     "Tackle, Bubble, Hypnosis, Water Gun");
  pokedex_thirty.add_pokemon_to_pokedex(Tentacruel);
  // 29
  Pokemon Golem("Golem", "Rock/Ground", 90,
                "Tackle, Rock Blast, Defense Curl, Earthquake");
  pokedex_thirty.add_pokemon_to_pokedex(Golem);
  // 30
  Pokemon Slowbro("Slowbro", "Water/Psychic", 65,
                  "Tackle, Yawn, Withdraw, Water Gun");
  pokedex_thirty.add_pokemon_to_pokedex(Slowbro);

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
      pokedex_thirty.display_pokedex();
    } else if (choice == 2) {
      pokemonPartyMenu();
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