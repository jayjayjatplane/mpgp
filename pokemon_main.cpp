#include <iostream>

#include "Pokemon.h"
#include "Type.h"

using namespace std;

int main() {
  Type fireType(FIRE);
  Pokemon charmander("Charmander", fireType, 100, 5);

  cout << "pokemon name: " << charmander.get_name() << endl;
  cout << "pokemon type: " << charmander.get_type().getName() << endl;
  cout << "pokemon health: " << charmander.get_health() << endl;
  cout << "pokemon level: " << charmander.get_level() << endl;

  return 0;
}