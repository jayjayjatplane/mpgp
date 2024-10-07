#include <iostream>
#include <string>

using namespace std;

#include "Type.h"

// Function to convert TypeName enum to string
string typeToString(TypeName type) {
  switch (type) {
    case NORMAL:
      return "Normal";
    case FIRE:
      return "Fire";
    case WATER:
      return "Water";
    case ELECTRIC:
      return "Electric";
    case GRASS:
      return "Grass";
    case ICE:
      return "Ice";
    case FIGHTING:
      return "Fighting";
    case POISON:
      return "Poison";
    case GROUND:
      return "Ground";
    case FLYING:
      return "Flying";
    case PSYCHIC:
      return "Psychic";
    case BUG:
      return "Bug";
    case ROCK:
      return "Rock";
    case GHOST:
      return "Ghost";
    case DRAGON:
      return "Dragon";
    case DARK:
      return "Dark";
    case STEEL:
      return "Steel";
    case FAIRY:
      return "Fairy";
    default:
      return "Unknown";
  }
}

// 2D array for type effectiveness
// Rows represent attack type, columns represent defense type
float typeEffectiveness[NUM_TYPES][NUM_TYPES] = {
    //              NOR  FIR  WAT  ELE  GRA  ICE  FIG  POI  GRO  FLY  PSY  BUG
    //              ROC  GHO  DRA  DAR  STE  FAI
    /* NORMAL */ {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                  0.5, 0.0, 1.0, 1.0, 0.5, 1.0},
    /* FIRE */
    {1.0, 0.5, 0.5, 1.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 0.5,
     1.0, 2.0, 1.0},
    /* WATER */
    {1.0, 2.0, 0.5, 1.0, 0.5, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 2.0, 1.0, 0.5,
     1.0, 1.0, 1.0},
    /* ELECTRIC */
    {1.0, 1.0, 2.0, 0.5, 0.5, 1.0, 1.0, 1.0, 0.0, 2.0, 1.0, 1.0, 1.0, 1.0, 0.5,
     1.0, 1.0, 1.0},
    /* GRASS */
    {1.0, 0.5, 2.0, 1.0, 0.5, 1.0, 1.0, 0.5, 2.0, 0.5, 1.0, 0.5, 2.0, 1.0, 1.0,
     1.0, 0.5, 1.0},
    /* ICE */
    {1.0, 0.5, 0.5, 1.0, 2.0, 0.5, 1.0, 1.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0,
     1.0, 0.5, 1.0},
    /* FIGHTING */
    {2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 0.5, 1.0, 0.5, 0.5, 0.5, 2.0, 0.0, 1.0,
     2.0, 2.0, 0.5},
    /* POISON */
    {1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 0.5, 0.5, 1.0, 1.0, 1.0, 0.5, 0.5, 1.0,
     1.0, 0.0, 2.0},
    /* GROUND */
    {1.0, 2.0, 1.0, 2.0, 0.5, 1.0, 1.0, 2.0, 1.0, 0.0, 1.0, 0.5, 2.0, 1.0, 1.0,
     1.0, 2.0, 1.0},
    /* FLYING */
    {1.0, 1.0, 1.0, 0.5, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 1.0,
     1.0, 0.5, 1.0},
    /* PSYCHIC */
    {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0,
     0.5, 0.5, 1.0},
    /* BUG */
    {1.0, 0.5, 1.0, 1.0, 2.0, 1.0, 0.5, 0.5, 1.0, 0.5, 1.0, 1.0, 1.0, 0.5, 1.0,
     2.0, 0.5, 0.5},
    /* ROCK */
    {1.0, 2.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 0.5, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0,
     1.0, 0.5, 1.0},
    /* GHOST */
    {0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 2.0, 1.0,
     0.5, 1.0, 1.0},
    /* DRAGON */
    {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0,
     1.0, 0.5, 0.0},
    /* DARK */
    {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 2.0, 1.0,
     0.5, 1.0, 0.5},
    /* STEEL */
    {1.0, 0.5, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0,
     1.0, 0.5, 2.0},
    /* FAIRY */
    {1.0, 0.5, 1.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0,
     2.0, 0.5, 1.0}};