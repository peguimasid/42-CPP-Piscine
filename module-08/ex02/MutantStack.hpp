#pragma once
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
 public:
  MutantStack(){};

  MutantStack(const MutantStack &other) : std::stack<T>(other){};

  MutantStack &operator=(const MutantStack &other) {
    if (this == &other) return *this;
    this->c = other.c;
    return *this;
  }

  ~MutantStack() {
    this->c.clear();
  }

  typedef typename std::stack<T>::container_type::iterator iterator;

  iterator begin() {
    return this->c.begin();
  }

  iterator end() {
    return this->c.end();
  }
};
