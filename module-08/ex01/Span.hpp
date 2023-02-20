#pragma once
#include <iostream>
#include <vector>

class Span {
 private:
  std::vector<int> _numbers;
  unsigned int _size;

 public:
  // Constructors and Destructors
  Span();
  Span(unsigned int N);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();

  // Member functions
  void addNumber(int num);
  // void addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
  unsigned int shortestSpan();
  unsigned int longestSpan();
};
