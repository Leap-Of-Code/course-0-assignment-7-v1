#include <iostream>
#include <string>
using namespace std;

void Evaluator (int input_y) {
int number_of_output = 0;
  if (input_y % 1 == 0) {
    number_of_output++;
    cout << "1, ";
  }
  if (input_y % 2 == 0) {
    number_of_output++;
    cout << "2, ";
  }
  if (input_y % 3 == 0) {
    number_of_output++;
    cout << "3, ";
  }
  if (input_y % 4 == 0) {
    number_of_output++;
    cout << "4, ";
  }
  if (input_y % 5 == 0) {
    number_of_output++;
    cout << "5, ";
  }
  if (input_y % 6 == 0) {
    number_of_output++;
    cout << "6,";
  }
  if (input_y % 7 == 0) {
    number_of_output++;
    cout << "7, ";
  }
  if (input_y % 8 == 0) {
    number_of_output++;
    cout << "8, ";
  }
  if (input_y % 9 == 0) {
    number_of_output++;
    cout << "9, ";
  }
  cout << "Total number of output is " << number_of_output << ".";
}

int main() {
  int input_y;
  cout << " What is your input Y?";
  cin >> input_y;
  Evaluator(input_y);
}
