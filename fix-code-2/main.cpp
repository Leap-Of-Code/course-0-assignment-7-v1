#include <iostream>
#include <string>
using namespace std;


char GetLetterFromUser() {
  char letter;
  cout << "Lowercase Letter: ";
  cin >> letter;
  return letter;
}

bool IsVowel(char letter) {
  if (letter == 'e') {
    return true; 
  }
  else if (letter == 'i') {
    return true;
  }
  else if (letter == 'o') {
    return true;
  }
  else if (letter == 'u') {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  char letter = GetLetterFromUser();

  if (letter == 'a') {
    cout << "The letter is the first letter in the alphabet.";
  } 
  else if (IsVowel(letter)) {
    cout << "The letter is a vowel.";
  } 
  else {
    cout << "The letter is not a.";
  }
  return 0;
}
