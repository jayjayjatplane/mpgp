#ifndef TRAINER_H
#define TRAINER_H

#include <string>

#include "Pokemon.h"
#include "PokemonParty.h"

using namespace std;

class Trainer {
 private:
  string name;
  int party_size;
  Pokemon* party;

 public:
  // Constructor
  Trainer(string name);

  // Getters
  string get_name();
  Pokemon* get_party();

  // Setters
  void set_name(string name);

  // Other functions
  void display_party();
  void add_pokemon_to_party(Pokemon pokemon);
  void remove_pokemon_from_party(Pokemon pokemon);

  // Destructor
  ~Trainer();
};

#endif  // TRAINER_H