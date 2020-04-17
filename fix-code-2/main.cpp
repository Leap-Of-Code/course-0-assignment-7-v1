#include <iostream>
#include <string>
using namespace std;

char GetLetterFromUser() {
  char letter;
  cout << "Enter a letter" << endl;
  cin >> letter;
  return letter;
}

bool IsVowel(char letter) {
  if (letter == 'i' || letter == 'u' || letter == 'o' || letter == 'e') {
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
  } else if (IsVowel(letter)) {
    cout << "The letter is a vowel.";
  } else {
    cout << "The letter is not a.";
  }
  return 0;
}
