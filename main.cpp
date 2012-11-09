/****************************/
/** This is version 0.1.1   ***/
/** Author: A             ***/
/****************************/

#include <iostream>
#include "new_print_feature.h"

using namespace std;

int main(void){
  char text[256] = "Hello Branching Man!";
  NewPrintFeature *print_feature = new NewPrintFeature();
  print_feature->print();
  cout<<"THE END (by hotfix 0.1.1)";
  return 0;
}
