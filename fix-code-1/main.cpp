#include <iostream>
#include <string>
using namespace std;

float GetAbsoluteValue(const float input) {
  if (input < 0) {
    return -1 * input;
  } 
  else {
    return input;
  }
}

float GetUserInput() {
  float value;
  cout << "Value: ";
  cin >> value;
  return value;
}

int main() {
  float value = GetUserInput();
  cout << "The absolute value is: " << GetAbsoluteValue(value) << endl;
  return 0;
}
