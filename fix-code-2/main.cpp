#include <iostream>
#include <string>
using namespace std;

char GetLetterFromUser() {
  char letter;
  cout << "Enter a letter: ";
  cin >> letter;
  return letter;
}

bool IsVowel(char letter) {
  bool result;
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
  result = true;
  } else if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
    result = true;
  } else {
    result = false;
  }
  return result;
}

int main() {
  char letter = GetLetterFromUser();

  if (letter == 'a' || letter == 'A') {
    cout << "The letter is the first letter in the alphabet." << endl;
  } else if (IsVowel(letter)) {
    cout << "The letter is a vowel." << endl;
  } else {
    cout << "The letter is not a." << endl;
  }
  return 0;
}
