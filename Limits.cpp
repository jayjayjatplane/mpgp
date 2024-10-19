#include "Limits.h"

#include <iostream>
#include <limits>

using namespace std;

int getValidatedChoice() {
  int choice;
  while (true) {
    cout << "Enter your choice: ";
    cin >> choice;

    // Check if the input failed (i.e., not an integer)
    if (cin.fail()) {
      cin.clear();  // Clear the error flag
      cin.ignore(numeric_limits<streamsize>::max(),
                 '\n');  // Ignore invalid input
      cout << "Invalid input. Please enter a valid number." << std::endl;
    } else {
      cin.ignore(numeric_limits<streamsize>::max(),
                 '\n');  // Clear any extra input
      return choice;     // Valid choice, so return it
    }
  }
}