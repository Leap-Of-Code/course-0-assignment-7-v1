#include <iostream>
#include <string>
using namespace std;

int main() {
  bool is_student = true;
  bool is_cs_student = false;
  bool is_math_student = true;

  if (is_student) {
    if (is_cs_student) {
      cout << "Excellent, they are learning amazing things!";
    } else if (is_math_student) {
      cout << "Hmm, glad they're learning something.";
    } else {
      cout << "Well I hope they are enjoying what they are learning.";
    }
  } else {
    cout << "It seems like they should be back in school!";
  }
  return 0;
}
