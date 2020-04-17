#include <iostream>
#include <string>
using namespace std;

// Takes input and returns the total numbers less than 10 that are evenly divisible from input

int Evaluator(int input) {
int counter = 0;
int num_through_10 = 1;
while (num_through_10 <= 10) {
  if (input % num_through_10 == 0) {
    counter++;
  }
  num_through_10++;
}
return counter;
}

int main() {
  int input;
  cout << "Enter a input " << endl;
  cin >> input;

  int number_of_evenly_divide = Evaluator(input);
  cout << "Number evenly divide is: " << number_of_evenly_divide << endl;
  return 0;
}
