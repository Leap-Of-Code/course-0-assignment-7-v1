#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  return number;
}

void Evaluator (int Y) {
  int value = 0;
  bool is_1 = false;
  bool is_2 = false;
  bool is_3 = false;
  bool is_4 = false;
  bool is_5 = false;
  bool is_6 = false;
  bool is_7 = false;
  bool is_8 = false;
  bool is_9 = false;
  bool is_10 = false;

  if (Y % 1 == 0) {
    value++;
    is_1 = true;
  }
  if (Y % 2 == 0) {
    value++;
    is_2 = true;
  }
  if (Y % 3 == 0) {
    value++;
    is_3 = true;
  }
  if (Y % 4 == 0) {
    value++;
    is_4 = true;
  }
  if (Y % 5 == 0) {
    value++;
    is_5 = true;
  }
  if (Y % 6 == 0) {
    value++;
    is_6 = true;
  }
  if (Y % 7 == 0) {
    value++;
    is_7 = true;
  }
  if (Y % 8 == 0) {
    value++;
    is_8 = true;
  }
  if (Y % 9 == 0) {
    value++;
    is_9 = true;
  }
  if (Y % 10 == 0) {
    value++;
    is_10 = true;
  }

  if (is_1) {
    cout << "1, ";
  }
  if (is_2) {
    cout << "2, ";
  }
  if (is_3) {
    cout << "3, ";
  }
  if (is_4) {
    cout << "4, ";
  }
  if (is_5) {
    cout << "5, ";
  }
  if (is_6) {
    cout << "6, ";
  }
  if (is_7) {
    cout << "7, ";
  }
  if (is_8) {
    cout << "8, ";
  }
  if (is_9) {
    cout << "9, ";
  }
  if (is_10) {
    cout << "10, ";
  }

  cout << "and the number of multiples between 1 - 10 for " << Y << " is: " << value << endl;
}

int main() {
  int number = GetUserInput();

  Evaluator(number);

  return 0;
}
