#include <iostream>
#include <string>

using namespace std;

struct Pokemon {
  string species;
  string type;
  int health;
};

int main() {
  Pokemon party_array[6] = {
      {"Squirtle", "Water", 90},         {"Charmander", "Fire", 85},
      {"Bulbasaur", "Grass/Poison", 80}, {"Beedrill", "Bug/Poison", 75},
      {"Piplup", "Water/Flying", 95},    {"Mewtwo", "Psychic", 100}};

  cout << "Pokemon Party:" << endl;
  for (int i = 0; i < 6; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << " Species: " << party_array[i].species << " | ";
    cout << " Type: " << party_array[i].type << " | ";
    cout << " Health: " << party_array[i].health << " | ";
    cout << " Level: " << "1" << " | ";
    cout << "\n";
  }
  cout << "\n";
}

/*
DISPLAY POKEMON PARTY
  cout << "Current Pokemon Party: " << endl;
  string pokemonParty[6];
  for (int i = 0; i < 6; i++) {
    pokemonParty[i] = "My Pokemon " + to_string(i + 1);
  }
  for (int i = 0; i < 6; i++) {
    cout << pokemonParty[i] << endl;
  }
  cout << "\n";
*/

/*
#include <iostream>

#include "PokemonParty.h"

using namespace std;

PokemonParty::PokemonParty() { party_size = 0; }

PokemonParty::PokemonParty(int capacity) { party_size = 0; }

void PokemonParty::add_pokemon_to_party(Pokemon pokemon) {
  if (party_size < 6) {
    party_array[party_size] = pokemon;
    party_size++;
    cout << "Pokemon added to party!" << endl;
  } else {
    cout << "Party is full!" << endl;
  }
}

void PokemonParty::display_party() {
  for (int i = 0; i < party_size; i++) {
    cout << "Pokemon " << i + 1 << ":" << endl;
    cout << "Species: " << party_array[i].get_species() << endl;
    cout << "Type: " << party_array[i].get_type() << endl;
    cout << "Health: " << party_array[i].get_health() << endl;
    cout << "Moveset: " << party_array[i].get_moveset() << endl;
    cout << "Level: " << party_array[i].get_level() << endl;
  }
}

void PokemonParty::rem_pokemon_from_party(Pokemon pokemon) {
  for (int i = 0; i < party_size; i++) {
    if (party_array[i].get_species() == pokemon.get_species() &&
        party_array[i].get_type() == pokemon.get_type() &&
        party_array[i].get_health() == pokemon.get_health() &&
        party_array[i].get_moveset() == pokemon.get_moveset() &&
        party_array[i].get_level() == pokemon.get_level()) {
      for (int j = i; j < party_size - 1; j++) {
        party_array[j] = party_array[j + 1];
      }
      party_size--;
      cout << "Pokemon removed from party!" << endl;
      return;
    }
  }
  cout << "Pokemon not found in party!" << endl;
}

void PokemonParty::add_pokemon() {
  string species, type, moveset;
  int health, level;
  cout << "Enter Pokemon species: ";
  cin >> species;
  cout << "Enter Pokemon type: ";
  cin >> type;
  cout << "Enter Pokemon health: ";
  cin >> health;
  cout << "Enter Pokemon moveset: ";
  cin >> moveset;
  cout << "Enter Pokemon level: ";
  cin >> level;
  Pokemon new_pokemon(species, type, health, moveset, level);
  add_pokemon_to_party(new_pokemon);
  cout << "Pokemon added to party!" << endl;
}

void PokemonParty::display_pokemon_list() { display_party(); }

*/

/*
FIRST THIRTY FULLY EVOLVED POKEMON IN POKEDEX
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
Pokemon Clefable("Clefable", "Fairy", 95, "Moonblast, Metronome, Pound, Wish");
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
pokedex_sixty.add_pokemon_to_pokedex(Golduck);
// 22
Pokemon Primeape("Primeape", "Fighting", 65,
                 "Karate Chop, Pound, Tail Whip, Focus Energy");
pokedex_sixty.add_pokemon_to_pokedex(Primeape);
// 23
Pokemon Arcanine("Arcanine", "Fire", 90, "Ember, Bite, Roar, Fire Blast");
pokedex_sixty.add_pokemon_to_pokedex(Arcanine);
// 24
Pokemon Poliwrath("Poliwrath", "Water/Fighting", 90,
                  "Tackle, Bubble, Hypnosis, Water Gun");
pokedex_sixty.add_pokemon_to_pokedex(Poliwrath);
// 25
Pokemon Alakazam("Alakazam", "Psychic", 90,
                 "Teleport, Pound, Light Screen, Psychic");
pokedex_sixty.add_pokemon_to_pokedex(Alakazam);
// 26
Pokemon Machamp("Machamp", "Fighting", 90,
                "Karate Chop, Pound, Tail Whip, Focus Energy");
pokedex_sixty.add_pokemon_to_pokedex(Machamp);
// 27
Pokemon Bellsprout("Bellsprout", "Grass/Poison", 40,
                   "Razor Leaf, Vine Whip, Poison Powder, Sleep Powder");
pokedex_sixty.add_pokemon_to_pokedex(Bellsprout);
// 28
Pokemon Tentacruel("Tentacruel", "Water/Poison", 65,
                   "Tackle, Bubble, Hypnosis, Water Gun");
pokedex_sixty.add_pokemon_to_pokedex(Tentacruel);
// 29
Pokemon Golem("Golem", "Rock/Ground", 90,
              "Tackle, Rock Blast, Defense Curl, Earthquake");
pokedex_ninety.add_pokemon_to_pokedex(Golem);
// 30
Pokemon Slowbro("Slowbro", "Water/Psychic", 65,
                "Tackle, Yawn, Withdraw, Water Gun");
pokedex_ninety.add_pokemon_to_pokedex(Slowbro);
*/
