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

void Span::addNumber(int num) {
  if (this->_numbers.size() >= this->_maxSize) {
    throw Span::FullSpanException();
  }
  this->_numbers.push_back(num);
}

unsigned int Span::shortestSpan() {
}

unsigned int Span::longestSpan() {
}

const char *Span::FullSpanException::what() const throw() {
  return "span is full";
}

const char *Span::SmallSpanException::what() const throw() {
  return "span size is less than or equal to 1, means nothing to find here";
}
