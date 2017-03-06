//
// Created by mwypych on 06.03.17.
//

#include <iostream>
#include "ReverseString.h"

int main(int argc, char *argv[]) {
  if (argc > 1) {
    for (int i = 1; i < argc - 1; ++i) {
      std::cout << "reverse(" << argv[i] << ") = " << Reverse(argv[i]) << std::endl;
    }
  } else {
    std::cerr << "program requires at least one argument of arbitrary string" << std::endl;
  }
}
