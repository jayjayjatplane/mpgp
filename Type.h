#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <string>

using namespace std;

// Enumeration for Pokémon types
enum TypeName { FIRE, WATER, GRASS, ELECTRIC, NUM_TYPES };

// Function to convert TypeName enum to string
std::string typeToString(TypeName type) {
  switch (type) {
    case FIRE:
      return "Fire";
    case WATER:
      return "Water";
    case GRASS:
      return "Grass";
    case ELECTRIC:
      return "Electric";
    default:
      return "Unknown";
  }
}

// 2D array for type effectiveness
// Rows represent attack type, columns represent defense type
float typeEffectiveness[NUM_TYPES][NUM_TYPES] = {
    // FIRE, WATER, GRASS, ELECTRIC
    {1.0, 0.5, 2.0, 1.0},  // Fire vs [Fire, Water, Grass, Electric]
    {2.0, 1.0, 0.5, 1.0},  // Water vs [Fire, Water, Grass, Electric]
    {0.5, 2.0, 1.0, 1.0},  // Grass vs [Fire, Water, Grass, Electric]
    {1.0, 2.0, 0.5, 1.0}   // Electric vs [Fire, Water, Grass, Electric]
};

class Type {
 private:
  string name;

 public:
};

#endif