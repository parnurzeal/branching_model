#include <iostream>
#include "new_print_feature.h"

using namespace std;

int main(void){
  char text[256] = "Hello Branching Man!";
  NewPrintFeature *print_feature = new NewPrintFeature();
  print_feature->print();
  return 0;
}
