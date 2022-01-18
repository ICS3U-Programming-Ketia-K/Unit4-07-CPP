// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 17, 2022
// This program prints numbers from 1000 to 2000.
#include <iostream>

int main() {
  // This function is the famous fizzBuzz problem.

  // declare variables
  int loopCounter;

  for (loopCounter=1000; loopCounter < 2001; loopCounter++) {
    if (loopCounter % 5 == 0) {
      std::cout << std::endl;
    }
    std::cout << loopCounter << " ";
  }
}
