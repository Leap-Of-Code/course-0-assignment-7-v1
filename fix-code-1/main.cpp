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

int main() {
  float value = 0;
  cout << "what is your value?";
  cin >> value;
  cout << "The absolute value is: " << GetAbsoluteValue(value);
}
