#include "Span.hpp"

Span::Span(unsigned int N) {
  this->_maxSize = N;
}

Span::Span(const Span &other) {
  this->_maxSize = other._maxSize;
  this->_numbers = other._numbers;
}

Span &Span::operator=(const Span &other) {
  if (this == &other) return *this;

  this->_numbers = other._numbers;
  this->_maxSize = other._maxSize;

  return *this;
}

Span::~Span() {}
