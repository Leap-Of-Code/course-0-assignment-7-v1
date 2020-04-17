#include <iostream>
#include <string>
using namespace std;

// If both value_one and value_two are positive, increment and return output. 
// If not decrement and return output.
int CheckAllPositive(const int value_one, const int value_two, int output) {
  if ((value_one % 2 == 0) && (value_two % 2 == 0)) {
    output++;
    return output;
  }
  else {
    output--;
    return output;
  }
}

// If the product of value_one and value_two is greater than the sum, increment and return output. 
// If that is not true, but the sum of value_one and value_two is greater than zero, 
// decrement output and return it. If neither of those is true, return 0.
int EvaluateScale(const float value_one, const float value_two, int output) {
  int sum = value_one + value_two;
  if ((value_one * value_two) > sum) {
    output++;
    return output;
  }
  else if (sum > 0) {
    output--;
    return output;
  } else {
    return 0;
  }
}

// Given a number print out a single fortune for a user.
// The program should always print out a fortune of a user.
void PrintFortune(int number) {
  if (number == -2) {
    cout << "A beautiful, smart, and loving person will be coming into your life." << endl;
  }
  else if (number == -1) {
    cout << "A lifetime friend shall soon be made." << endl;
  }
  else if (number == 2) {
    cout << "Any decision you have to make tomorrow is a good decision." << endl;
  }
  else {
    cout << "A giant turtle will bless you" << endl;
  }
}

int main() {
  int counter = 0;
  int value_one;
  cout << "Enter a number please: ";
  cin >> value_one;

  int value_two;
  cout << "Enter another number please: ";
  cin >> value_two;

  counter = CheckAllPositive(value_one, value_two, counter);
  counter = EvaluateScale(value_one, value_two, counter);

  PrintFortune(counter);

  return 0;
}
