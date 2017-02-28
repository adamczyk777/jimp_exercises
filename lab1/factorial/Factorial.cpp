//
// Created by mwypych on 02.02.17.
//
#include "Factorial.h"

int factorial(int value) {
  if(value == 0) return 1;
  int result;
  if(value > 0) {
    result = 1;
    for (int i = 2; i <= value; i++) {
      result *= i;
    }
  }
  else { // ujemne
    result = -1;
    for (int i = -2; i*i <= value*value; i--) {
      result *= i;
    }
  }
  return result;
}