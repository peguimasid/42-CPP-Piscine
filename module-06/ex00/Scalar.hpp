#pragma once

#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>

class Scalar {
 private:
  Scalar();
  Scalar(const Scalar &other);
  Scalar &operator=(const Scalar &other);

 public:
  ~Scalar();

  static void convert(const std::string &literal);
};

bool isPseudoLiteral(const std::string &literal);
