#include <iostream>
#include <string>
using namespace std;

float GetUserInput() {
  float number;
  cout << "Enter a number: ";
  cin >> number;
  return number;
}

float GetAbsoluteValue(const float input) {
  if (input < 0) {
    return -1 * input;
  } else {
    return input;
  }
}

int main() {
  float value = GetUserInput();
  cout << "The absolute value is: " << GetAbsoluteValue(value) << endl;
  return 0;
}
