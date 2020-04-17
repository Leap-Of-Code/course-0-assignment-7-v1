#include <iostream>
#include <string>
using namespace std;

float GetUserInput() {
  float input;
  cout << "Enter a input: ";
  cin >> input; 
  return input;
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
  cout << "The absolute value is: " << GetAbsoluteValue(value);
  return 0;
}
