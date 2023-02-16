#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &other) {
  (void)other;
}

Scalar &Scalar::operator=(const Scalar &other) {
  (void)other;
  return *this;
}

Scalar::~Scalar() {}
