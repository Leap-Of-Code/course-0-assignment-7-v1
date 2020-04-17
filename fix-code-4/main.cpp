#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int input;
  cout << "Enter an input" << endl;
  cin >> input;
  return input;
}

int main() {
  int number = GetUserInput();

  int value = 0;
  if (number % 1 == 0) {
    value++;
  }
  if (number % 2 == 0) {
    value++;
  }
  if (number % 3 == 0) {
    value++;
  }
  if (number % 4 == 0) {
    value++;
  }
  if (number % 5 == 0) {
    value++;
  }
  if (number % 6 == 0) {
    value++;
  }
  if (number % 7 == 0) {
    value++;
  }
  if (number % 8 == 0) {
    value++;
  }
  if (number % 9 == 0) {
    value++;
  }

  cout << "The number of multiples less than 10 for " << number << " is: " << value << endl;

  return 0;
}
