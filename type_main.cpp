#include <iostream>

#include "Type.h"

using namespace std;

int main() {
  Type fireType(FIRE);
  Type waterType(WATER);

  cout << "Fire vs Water effectiveness: "
       << fireType.getEffectiveness(waterType) << endl;
  cout << "Water type: " << waterType.getName() << endl;

  return 0;
}