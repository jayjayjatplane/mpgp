#include "Trainer.h"

using namespace std;

Trainer::Trainer(const string& name, int initialPartyCapacity) {
  this->name = name;
  partySize = 0;
  partyCapacity = initialPartyCapacity;
  party = new Pokemon[partyCapacity];
}

string Trainer::getName() const { return name; }

Pokemon* Trainer::getParty() const { return party; }

int Trainer::getPartySize() const { return partySize; }

void Trainer::setName(const string& name) { this->name = name; }

void Trainer::setParty(Pokemon* party, int partySize) {
  this->party = party;
  this->partySize = partySize;
}

void Trainer::addPokemonToParty(Pokemon* pokemon) {
  if (partySize < partyCapacity) {
    party[partySize] = *pokemon;
    partySize++;
  } else {
    // Handle party full scenario
    cout << "Party is full!" << endl;
  }
}

void Trainer::removePokemonFromParty(Pokemon* pokemon) {
  for (int i = 0; i < partySize; i++) {
    if (&party[i] == pokemon) {
      // Shift elements to fill the gap
      for (int j = i; j < partySize - 1; j++) {
        party[j] = party[j + 1];
      }
      partySize--;
      break;
    }
  }
}

Trainer::~Trainer() { delete[] party; }