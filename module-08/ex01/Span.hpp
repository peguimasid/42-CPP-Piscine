#pragma once
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Span {
 private:
  std::vector<int> _numbers;
  unsigned int _maxSize;

 public:
  // Constructors and Destructors
  Span(unsigned int N);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();

  // Member functions
  void addNumber(int num);
  void addRange(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
  unsigned int shortestSpan();
  unsigned int longestSpan();

  class FullSpanException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class SmallSpanException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};
