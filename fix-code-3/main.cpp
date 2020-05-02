#include <iostream>
#include <string>
using namespace std;

int main() {
  const int engine_cost = 250;
  const int breaks_cost = 90;
  const int windshield_cost = 70;

  const bool needs_engine = false;
  const bool needs_breaks = true;
  const bool needs_windshield = true;

  int cost_of_repairs = 0;

  if (needs_engine) {
    cost_of_repairs = cost_of_repairs + engine_cost;
  } 
  if (needs_breaks) {
    cost_of_repairs = cost_of_repairs + breaks_cost;
  } 
  if (needs_windshield) {
    cost_of_repairs = cost_of_repairs + windshield_cost;
  }

  cout << "The total repair costs will be: " << cost_of_repairs;
  return 0;
}
