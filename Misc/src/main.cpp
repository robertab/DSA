#include <iostream>
#include <string>
#include "weightedScheduele.h"
#include "editDistance.h"


using namespace std;

int main() {
  string w1 = "name";
  string w2 = "mean";

  cout << optimumEditDistance(w1, w2) << endl;
  

  return 0;
}
