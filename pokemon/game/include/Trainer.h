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
  int get_party_size();

  // Setters
  void set_name(string& name);

  // Other functions
  void addPokemonToParty(Pokemon pokemon);
  void removePokemonFromParty(Pokemon pokemon);
  void display_party();
  // Destructor
  ~Trainer();
};

#endif