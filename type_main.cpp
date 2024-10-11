#include <iostream>

#include "Type.h"

using namespace std;

int main() {
  // Define effectiveness values for each type against all other types
  double normalEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double fireEffectiveness[18] = {1.0, 0.5, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0,
                                  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double waterEffectiveness[18] = {1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                   1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double electricEffectiveness[18] = {1.0, 1.0, 1.0, 0.5, 1.0, 1.0,
                                      1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                      1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double grassEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 2.0,
                                   1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double iceEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0,
                                 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double fightingEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                      1.0, 1.0, 1.0, 1.0, 1.0, 2.0,
                                      1.0, 0.5, 1.0, 1.0, 1.0, 1.0};
  double poisonEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 0.5, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double groundEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 2.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double flyingEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double psychicEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                     1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                     1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double bugEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double rockEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double ghostEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                   1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0};
  double dragonEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                    1.0, 1.0, 1.0, 1.0, 1.0, 2.0};
  double darkEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double steelEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                   1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
  double fairyEffectiveness[18] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                                   1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};

  // Create Type objects for each Pokémon type
  Type normal("Normal", normalEffectiveness);
  Type fire("Fire", fireEffectiveness);
  Type water("Water", waterEffectiveness);
  Type electric("Electric", electricEffectiveness);
  Type grass("Grass", grassEffectiveness);
  Type ice("Ice", iceEffectiveness);
  Type fighting("Fighting", fightingEffectiveness);
  Type poison("Poison", poisonEffectiveness);
  Type ground("Ground", groundEffectiveness);
  Type flying("Flying", flyingEffectiveness);
  Type psychic("Psychic", psychicEffectiveness);
  Type bug("Bug", bugEffectiveness);
  Type rock("Rock", rockEffectiveness);
  Type ghost("Ghost", ghostEffectiveness);
  Type dragon("Dragon", dragonEffectiveness);
  Type dark("Dark", darkEffectiveness);
  Type steel("Steel", steelEffectiveness);
  Type fairy("Fairy", fairyEffectiveness);

  // Test effectiveness
  cout << "Fire is " << fire.get_effectiveness(water)
       << "x effective against Water." << endl;
  cout << "Grass is " << grass.get_effectiveness(water)
       << "x effective against Water." << endl;
  cout << "Electric is " << electric.get_effectiveness(ground)
       << "x effective against Ground." << endl;
  cout << "Fighting is " << fighting.get_effectiveness(ghost)
       << "x effective against Ghost." << endl;

  return 0;
}
