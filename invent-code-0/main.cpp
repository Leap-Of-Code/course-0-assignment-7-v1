#include <iostream>
#include <string>
using namespace std;

// If both value_one and value_two are positive, increment and return output. If not decrement and return output.
int checkAllPositive(const float value_one, const float value_two, int output) {
  if (value_one > 0 && value_two > 0) {
    output++;
    return output;
  } else {
    output--;
    return output;
  }
}

// If the product of value_one and value_two is greater than the sum, increment and return output. If that is not true, but the sum of value_one and value_two is greater than zero, decrement output and return it. If neither of those is true, return 0.
  int evaluateScale(const float value_one, const float value_two, int output) {
    // Write code here.
  }

// Given a number print out a single fortune for a user.
// The program should always print out a fortune of a user.
void PrintFortune(int number) {
  if (number == -2) {
    cout << "A beautiful, smart, and loving person will be coming into your life." << endl;
  }
  if (number == -1) {
    cout << "A lifetime friend shall soon be made." << endl;
  }
  if (number == 2) {
    cout << "Any decision you have to make tomorrow is a good decision." << endl;
  }
}

int main() {
  int counter = 0;
  float value_one;
  cout << "Enter a number please: ";
  cin >> value_one;

  float value_two;
  cout << "Enter another number please: ";
  cin >> value_two;

  counter = checkAllPositive(value_one, value_two, counter);
  counter = EvaluateScale(value_one, value_two, counter);

  PrintFortune(counter);

  return 0;
}
