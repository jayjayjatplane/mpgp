#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <string>

using namespace std;

class Type {
 private:
  string typeName;
  double effectivenessAgainst[18];  // Effectiveness against all types

 public:
  // Constructors
  Type();
  Type(string name, double effectiveness[18]);

  // Getters
  string get_type_name();
  double get_effectiveness_against(int index);

  // Effectiveness function
  double get_effectiveness(Type& other);
};

#endif
