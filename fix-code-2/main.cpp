#include <iostream>
#include <string>
using namespace std;

char GetLetterFromUser() {
char letter;
cout << "what is your letter?";
cin >> letter; 
return letter;
}

bool IsVowel(char letter) {
  if (letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
    return 1;
  }
  else {
    return 0;
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
}
