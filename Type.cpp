#include "Type.h"

// Default constructor
Type::Type() {
  typeName = "Unknown";
  double defaultEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                     1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                     1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  for (int i = 0; i < 18; i++) {
    effectivenessAgainst[i] = defaultEffectiveness[i];
  }
}

// Parameterized constructor
Type::Type(string name, double effectiveness[18]) {
  typeName = name;
  for (int i = 0; i < 18; i++) {
    effectivenessAgainst[i] = effectiveness[i];
  }
}

// Getters
string Type::get_type_name() { return typeName; }

double Type::get_effectiveness_against(int index) {
  return effectivenessAgainst[index];
}

// Get effectiveness against another type
double Type::get_effectiveness(Type& other) {
  int otherIndex = -1;

  // Map type names to indices
  if (other.get_type_name() == "Normal")
    otherIndex = 0;
  else if (other.get_type_name() == "Fire")
    otherIndex = 1;
  else if (other.get_type_name() == "Water")
    otherIndex = 2;
  else if (other.get_type_name() == "Electric")
    otherIndex = 3;
  else if (other.get_type_name() == "Grass")
    otherIndex = 4;
  else if (other.get_type_name() == "Ice")
    otherIndex = 5;
  else if (other.get_type_name() == "Fighting")
    otherIndex = 6;
  else if (other.get_type_name() == "Poison")
    otherIndex = 7;
  else if (other.get_type_name() == "Ground")
    otherIndex = 8;
  else if (other.get_type_name() == "Flying")
    otherIndex = 9;
  else if (other.get_type_name() == "Psychic")
    otherIndex = 10;
  else if (other.get_type_name() == "Bug")
    otherIndex = 11;
  else if (other.get_type_name() == "Rock")
    otherIndex = 12;
  else if (other.get_type_name() == "Ghost")
    otherIndex = 13;
  else if (other.get_type_name() == "Dragon")
    otherIndex = 14;
  else if (other.get_type_name() == "Dark")
    otherIndex = 15;
  else if (other.get_type_name() == "Steel")
    otherIndex = 16;
  else if (other.get_type_name() == "Fairy")
    otherIndex = 17;

  return effectivenessAgainst[otherIndex];  // Return effectiveness against the
                                            // other type
}
