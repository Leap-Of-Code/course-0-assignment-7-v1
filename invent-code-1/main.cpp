#include <iostream>
#include <string>
using namespace std;

int evaluator(int number) {
   int value = 0;
   if (number % 1 == 0) {
      value++;
      cout << "1, ";
    }
    if (number % 2 == 0) {
      value++;
      cout << "2, ";
    }
    if (number % 3 == 0) {
      value++;
      cout << "3, ";
    }
    if (number % 4 == 0) {
      value++;
      cout << "4, ";
    }
    if (number % 5 == 0) {
      value++;
      cout << "5, ";
    }
    if (number % 6 == 0) {
      value++;
      cout << "6, ";
    }
    if (number % 7 == 0) {
      value++;
      cout << "7, ";
    }
    if (number % 8 == 0) {
      value++;
      cout << "8, ";
    }
    if (number % 9 == 0) {
      value++;
      cout << "9, ";
    }
    if (number % 10 == 0) {
      value++;
      cout << "10, ";
    }
    return value;
}


int main() {
  int number;
  cout << "Number: ";
  cin >> number;
  int value = evaluator(number);
  cout << endl <<  "Multiples: " << value << endl;
  return 0;
}


