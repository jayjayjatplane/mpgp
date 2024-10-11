#ifndef TRAINER_H
#define TRAINER_H

#include <string>

#include "Pokemon.h"

using namespace std;

class Trainer {
 private:
  string name;
  Pokemon* party;
  int partySize;
  int partyCapacity;

 public:
  // Constructor
  Trainer(const string& name, int initialPartyCapacity = 6);

  // Getters
  string getName() const;
  Pokemon* getParty() const;
  int getPartySize() const;

  // Setters
  void setName(const string& name);
  void setParty(Pokemon* party, int partySize);

  // Other functions
  void addPokemonToParty(Pokemon* pokemon);
  void removePokemonFromParty(Pokemon* pokemon);

  // Destructor
  ~Trainer();
};

#endif  // TRAINER_H