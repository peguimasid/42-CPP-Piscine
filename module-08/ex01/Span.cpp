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

void Span::addRange(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
  unsigned int finalSize = this->_numbers.size() + std::distance(begin, end);

  if (finalSize > this->_maxSize) {
    throw Span::FullSpanException();
  }

  this->_numbers.insert(this->_numbers.end(), begin, end);
}

unsigned int Span::shortestSpan() {
  if (this->_maxSize <= 1 || this->_numbers.size() <= 1) {
    throw Span::SmallSpanException();
  }

  unsigned int result = std::numeric_limits<unsigned int>::max();

  std::vector<int> copy(this->_numbers);
  std::sort(copy.begin(), copy.end());

  for (unsigned int i = 0; i < copy.size() - 1; i++) {
    int currentNumber = copy[i];
    int nextNumber = copy[i + 1];
    unsigned int diff = nextNumber - currentNumber;
    result = std::min(result, diff);
  }

  return result;
}

unsigned int Span::longestSpan() {
  if (this->_maxSize <= 1 || this->_numbers.size() <= 1) {
    throw Span::SmallSpanException();
  }

  std::vector<int> copy(this->_numbers);
  std::sort(copy.begin(), copy.end());

  int smallerNumber = copy.at(0);
  int highestNumber = copy.at(copy.size() - 1);

  return highestNumber - smallerNumber;
}

const char *Span::FullSpanException::what() const throw() {
  return "span is full";
}

const char *Span::SmallSpanException::what() const throw() {
  return "span size is less than or equal to 1, means nothing to find here";
}
