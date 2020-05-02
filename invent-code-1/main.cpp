#include <iostream>
#include <string>
using namespace std;

void Evaluator (int input_y) {
int number_of_output = 0;
cout << "The number(s) divisible by the input is(are): ";
  string outputs;
  if (input_y % 1 == 0) {
    number_of_output++;
    outputs = outputs + "1 ,";
  }
  if (input_y % 2 == 0) {
    number_of_output++;
    outputs = outputs + "2, ";
  }
  if (input_y % 3 == 0) {
    number_of_output++;
    outputs = outputs + "3, ";
  }
  if (input_y % 4 == 0) {
    number_of_output++;
    outputs = outputs + "4, ";
  }
  if (input_y % 5 == 0) {
    number_of_output++;
    outputs = outputs + "5, ";
  }
  if (input_y % 6 == 0) {
    number_of_output++;
    outputs = outputs + "6, ";
  }
  if (input_y % 7 == 0) {
    number_of_output++;
    outputs = outputs + "7, ";
  }
  if (input_y % 8 == 0) {
    number_of_output++;
    outputs = outputs + "8, ";
  }
  if (input_y % 9 == 0) {
    number_of_output++;
    outputs = outputs + "9, ";
  }
  if (input_y % 10 == 0) {
    number_of_output++;
    outputs = outputs + "10, ";
  }
  outputs.pop_back();
  outputs.pop_back();
  cout << outputs << ". ";
  cout << "Total number of output is " << number_of_output << ".";
}

int main() {
  int input_y;
  cout << " What is your input Y?";
  cin >> input_y;
  Evaluator(input_y);
}
