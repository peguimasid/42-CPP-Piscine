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

  void convert(const std::string &literal);
};
