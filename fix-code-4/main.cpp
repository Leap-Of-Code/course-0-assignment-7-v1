#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
int input;
cout << "what is your number?";
cin >> input; 
return input;
}

int main() {
  int number = GetUserInput();

  int value = 0;
  if (1 % number == 0) {
    value++;
  }
  if (2 % number == 0) {
    value++;
  }
  if (3 % number == 0) {
    value++;
  }
  if (4 % number == 0) {
    value++;
  }
  if (5 % number == 0) {
    value++;
  }
  if (6 % number == 0) {
    value++;
  }
  if (7 % number == 0) {
    value++;
  }
  if (8 % number == 0) {
    value++;
  }
  if (9 % number == 0) {
    value++;
  }
  cout << "The number of multiples less than 10 for " << number << " is: " << value << endl;

  return 0;
}
