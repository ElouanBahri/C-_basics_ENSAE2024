//
//  Introduction to C++
//
//  Created by ElouanBahri on 10/10/2024.
//
#include <cmath>
#include <iostream>
using namespace std;

void PB1() {

  // Different basic data types
  int integerVar = 0;                // Integer
  unsigned int unsignedIntVar = 0;   // Unsigned Integer
  long longVar = 0;                  // Long Integer
  unsigned long unsignedLongVar = 0; // Unsigned Long Integer
  float floatVar = 0.0f;             // Float

  // Print data types and their sizes
  cout << "Data Type: int, Size: " << sizeof(integerVar) << " bytes\n";
  cout << "Data Type: unsigned int, Size: " << sizeof(unsignedIntVar)
       << " bytes\n";
  cout << "Data Type: long, Size: " << sizeof(longVar) << " bytes\n";
  cout << "Data Type: unsigned long, Size: " << sizeof(unsignedLongVar)
       << " bytes\n";
  cout << "Data Type: float, Size: " << sizeof(floatVar) << " bytes\n";
}

void PB2() {

  // Characters to be cast to int
  char chars[] = {'a', 'z', 'A', 'Z', '0', '9'};

  // Print the character and its corresponding ASCII value
  for (char c : chars) {
    std::cout << "Character: '" << c
              << "' has ASCII code: " << static_cast<int>(c) << std::endl;
  }
}

void PB3() {

  char inputChar;

  // Prompt the user for input
  cout << "Enter a character: ";
  cin >> inputChar;

  // Check if the character is lowercase
  if (inputChar >= 'a' && inputChar <= 'z') {
    char upperChar = inputChar - 'a' + 'A'; // Convert to uppercase
    cout << "The upper case character corresponding to '" << inputChar
         << "' is '" << upperChar << "'.\n";
  }
  // Check if the character is uppercase
  else if (inputChar >= 'A' && inputChar <= 'Z') {
    char lowerChar = inputChar - 'A' + 'a'; // Convert to lowercase
    cout << "The lower case character corresponding to '" << inputChar
         << "' is '" << lowerChar << "'.\n";
  }
  // If it's not a letter
  else {
    cout << "'" << inputChar << "' is not a letter.\n";
  }
}

void PB4() {

  float inputFloat;

  // Prompt the user for input
  cout << "Enter a decimal number: ";
  cin >> inputFloat;

  cout << "The nearest integer of '" << inputFloat << "' is '"
       << round(inputFloat) << "'.\n";
}

void PB5() {

  char player1;
  char player2;
  int diff;

  cout << "Type 0 for stone, ";
  cout << "1 for scissors, 2 for paper \n";
  cout << "Enter player 1’s move \n";
  cin >> player1;
  cout << "Enter player 2’s move \n";
  cin >> player2;
  if (player1 == player2) {
    cout << "Its a draw \n";
  } else {
    diff = player1 - player2;
    if (diff == -1 || diff == 1) {
      cout << "Player 1 won \n";
    } else {
      cout << "Player 2 won \n";
    }
  }
}

int main(int argc, const char *argv[]) {

  void (*pbFunctions[])() = {PB1, PB2, PB3, PB4,
                             PB5}; // Add all your PB functions here

  int choice;
  cout << "Choose the problem number \n";
  cin >> choice;

  cout << "This is the problem " << choice << "solution !\n";
  pbFunctions[choice - 1]();
  cout << "\n";

  return 0;
}
